%{
#include "codeGenerator.hpp"	
#include "lex.yy.cpp"
#define Trace(t) if (Opt_P) cout << "TRACE => " << t << endl;
bool hasMain = false;
int Opt_P = 0;
void yyerror(string s);
symboltableList symbolTable;
vector<vector<IDclass> > functions;
string filename;
string className;
ofstream ex;
%}

/* yylval */
%union {
  int ival;
  float fval;
  bool bval;
  char cval;
  string *sval;
  IDclass* idClassval;
  int type;
}

/* tokens*/
//operator & keyword
%token EE LE GE NE OR AND
%token BOOLEAN BREAK CHAR CASE CLASS CONTINUE DEF DO ELSE EXIT FLOAT FOR IF INT OBJECT PRINT PRINTLN REPEAT RETURN STRING TO TYPE VAL VAR WHILE READ TRUE FALSE
%token <sval> ID
%token <ival> INT_C
%token <fval> FLOAT_C
%token <bval> BOOL_C
%token <sval> STRING_C
%token <cval> CHAR_C
%type <idClassval> const_val expression function_invocation
/*NT return type*/
%type <type> var_type return_type 

/* precedence */
%left OR
%left AND
%left '!'
%left '<' LE EE GE '>' NE
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%%

program: 				OBJECT ID
						{			
							Trace("program start");
							IDclass* c = new IDclass();
							c->idFlag = objectFlag;	
							c->idType = None;				
							symbolTable.insert(*$2,*c);
							className = *$2;
							G_object_Start();
						} 
						'{' var_const_decs method_decs '}'
						{						
							Trace("End program");
							symbolTable.dump();
							symbolTable.pop();
							G_object_End();
							if(!hasMain){
								yyerror("No main exist");
							}
						}
						;

var_const_decs:			const_dec var_const_decs		
						|	var_dec var_const_decs
						|	/* zero */
						;

/* constant declaration */
const_dec:				VAL ID ':' var_type '=' expression
						{

							Trace("VAL ID : var_type = expression");
							$6->idFlag = constVariableFlag;
							$6->init = true;
							if(symbolTable.insert(*$2,*$6) == -1) yyerror("const redefine");
							int i = symbolTable.getIndex(*$2);
							
						}
						| VAL ID '=' expression
						{
							Trace("VAL ID = expression");
							$4->idFlag = constVariableFlag;
							$4->init = true;
							if(symbolTable.insert(*$2,*$4) == -1) yyerror("const redefine");
						}
						;
var_dec:				VAR ID ':' var_type
						{
							Trace("VAR ID : var_type");
							IDclass* c = new IDclass(variableFlag,$4,false);
							if(symbolTable.insert(*$2,*c) == -1) yyerror("var_dec redefine");
							if($4 == intType || $4 == boolType){
								int idx = symbolTable.getIndex(*$2);
								if(idx == -1){
									G_global_Var(*$2);
								}
							}
						}
						| VAR ID '=' expression
						{
							Trace("VAR ID '=' expression");
							$4 ->init = true;
							$4 ->idFlag = variableFlag;
							if(symbolTable.insert(*$2,*$4) == -1) yyerror("var_dec redefine");
							int idx = symbolTable.getIndex(*$2);
							int val = $4->getValue();
							if(idx == -1){
								G_global_Var_value(*$2,val);
							}else if(idx>=0){
								G_local_Var_value(idx,val);
							}

						}
						| VAR ID ':' var_type '=' expression
						{
							Trace("VAR ID ':' var_type '=' expression");
							$6->init = true;
							$6->idFlag = variableFlag;
							if(symbolTable.insert(*$2,*$6) == -1 ){yyerror("variable redefine");}
							int idx = symbolTable.getIndex(*$2);
							int val = $6->getValue();
							if(idx == -1){
								G_global_Var_value(*$2,val);
							}else if(idx>=0){
								G_local_Var_value(idx,val);
							}
						}
						| VAR ID
						{
							Trace("var id");
							IDclass* c = new IDclass(variableFlag,None,false);
							if(symbolTable.insert(*$2,*c) == -1) yyerror("var_dec redefine");
							int idx = symbolTable.getIndex(*$2);
							if(idx == -1){
								G_global_Var(*$2);
							}else if(idx >= 0){
								G_const_Int(0);
								G_local_Var_value(idx,0);
							}
						}
						;			
/* variable type */
var_type                : INT
                        {
                          $$ = intType;
                        }
                        | FLOAT
                        {
                          $$ = realType;
                        }
                        | BOOLEAN
                        {
                          $$ = boolType;
                        }
                        | STRING
                        {
                          $$ = strType;
                        }
                        | CHAR
                        {
                          $$ = charType;
                        }
                        ;
method_decs:			method_dec method_decs
						| method_dec
						;
method_dec:				DEF ID 
						{
							Trace("DEF ID '(' args ')' return_type");
							
							IDclass *c = new IDclass(functionFlag,None,false);
							if(symbolTable.insert(*$2,*c)==-1) yyerror("function redefine");
							symbolTable.push();

						}
						'(' args ')' return_type '{' 
						{
							Trace("method_desc");
							if(*$2=="main"){
								hasMain = true;
								G_main_Start();
							}else{
								G_method_Start(*symbolTable.lookup(*$2));
							}
						}
						var_const_decs zero_more_staments '}'
						{
							Trace("method end");
							if(symbolTable.lookup(*$2)->idType == voidType){
								G_void_method_End();
							}else{
								G_block_End();
							}
							symbolTable.dump();
							symbolTable.pop();
						}
						;
args:					arg ',' args
						|  arg
						;
arg:					ID ':' var_type
    					{
    						Trace("Add function arg");
        					IDclass* c = new IDclass(variableFlag,$3,false);
        					if(symbolTable.insert(*$1,*c) == -1) yyerror("variable redefine");
        					symbolTable.addFunctionArg(*$1, *c);
    					}
    					| /*zero arg*/
    					;
return_type:			':' var_type
						{
							Trace("return_type':' var_type");
							symbolTable.setFunctionType($2);
						}
						| /*empty*/
						{
							Trace("return_type':' None");
							symbolTable.setFunctionType(voidType);
						}
						;
zero_more_staments:		statements zero_more_staments
						| /*zero*/
						;
one_more_staments:		statements zero_more_staments
						;
statements:				stament
						| block
						| conditional
						| loop
						| function_invocation	
						;
stament:				ID '=' expression
						{
							Trace("statement: variable assignment");
							IDclass* c = symbolTable.lookup(*$1);
							if(c == NULL){
								yyerror("variable not declare!");
							}else if(c->idFlag!=variableFlag){
								yyerror("this is not variable");
							}else if(c->idType != $3->idType && c->idType!=None){
								yyerror("variable type not the same");
							} else{
								if(c->idType==None){
									c -> idType = $3->idType;
								}
								c->init = true;
								c->setValue(*$3);	
								if (c->idType == intType || c->idType == boolType || c->idType == charType) {
                            		int idx = symbolTable.getIndex(*$1);
                            		if (idx == -1) G_set_global_Var(*$1);
                            		else G_set_local_Var(idx);
                          		}
							}
						}
						| 
						{
							G_print_Start();
						} 
						PRINT '(' expression ')'
						{
							Trace("stament: print expression");
							G_print($4 ->idType);
						}
						|
						{
							G_print_Start();
						}   
						PRINTLN '(' expression ')'
						{
							Trace("stament: println expression");
							G_println($4->idType);
						} 
						|  READ ID
						{
							Trace("Read id");
						}
						|  RETURN
						{
							Trace("stament: return");
							G_Return();
						}
						|  RETURN expression
						{
							Trace("stament: return expression");
							G_IReturn();
						}
						;
block:					'{'
						{
							Trace("Block start");
							symbolTable.push();
						}
						var_const_decs one_more_staments '}'
						{
                        	symbolTable.dump();
                        	symbolTable.pop();
                        }
                        ;
conditional:			IF '(' expression ')' if_Start
						a_block_or_statement ELSE 
						{
							G_If("else");
						}
						a_block_or_statement	
						{
							Trace("statement: if else");
							if($3->idType != boolType )yyerror("condition type error");
							G_If("if_else_end");
						}
						| IF '(' expression ')' if_Start a_block_or_statement
						{
							Trace("conditional IF");
							if($3->idType != boolType) { yyerror("condition type error");}
							G_If("if_end");
						}
						; 
if_Start				:
						{
							G_If("if_start");
						}	
a_block_or_statement:	block
						| stament
						;
loop:					WHILE '(' 
						{
							Trace("while loop start");
							G_While("while_start");
						}
						expression 
						{
							if($4->idType!=boolType && $4->idType!=intType) yyerror("condition not bool or int ");
							G_While("while_con");
						}
						')' a_block_or_statement
						{	
							Trace("while loop end");
							G_While("while_end");
						}	
						|  FOR '(' ID '<' '-' INT_C TO INT_C ')' 
						{
							Trace("For loop start");
							IDclass* c = symbolTable.lookup(*$3);
							if(c == NULL){
								yyerror("variable not declare!");
							}else if(c->idFlag!=variableFlag){
								yyerror("this is not variable");
							}else if(c->idType != intType){
								yyerror("variable in for can only be int");
							} 
						} a_block_or_statement
						{
							Trace("For loop end");
						}
						;
function_invocation:	ID 
						{
							functions.push_back(vector<IDclass>());
						}
						'(' comma_separated_expressions ')'
					    {
                          Trace("statement: function invocation");
                          IDclass *c = symbolTable.lookup(*$1);
                          if (c == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (c->idFlag != functionFlag) yyerror("not a function"); /* function check */
                          vector<IDclass> para = c->arrayValue;
                          if (para.size() != functions[functions.size() - 1].size()) yyerror("parameter size not match"); /* parameter size check */

                          for (int i = 0; i < para.size(); ++i) {
                            if (para[i].idType != functions[functions.size() - 1].at(i).idType) yyerror("parameter type not match"); /* parameter type check */
                          }
						  G_call_Func(*c);
                          $$ = c;
                          functions.pop_back();
                        }
                        ;

/* optional comma-separated expressions */
comma_separated_expressions: 
						comma_separated
                        | /* zero */
                        ;

/* comma-separated expressions */
comma_separated         : func_expression ',' comma_separated
                        | func_expression 	/* func_expression */
                        ;

/* function expression */
func_expression         : expression
                        {
                          	functions[functions.size() - 1].push_back(*$1);
                        }
                        ;
/* constant value */
const_val               : INT_C
                        {
							Trace("int const");
                          	$$ = intConst($1);
                        }
                        | FLOAT_C
                        {
                          	$$ = realConst($1);
                        }
                        | BOOL_C
                        {
                          	$$ = boolConst($1);
                        }
                        | STRING_C
                        {
							Trace("str const");
                          	$$ = strConst($1);
                        }
                        | CHAR_C
                        {
                        	$$ = charConst($1);
                        }
                        ;
/* expression */
expression              : ID
                        {
							Trace("expression ID");
                          	IDclass *c = symbolTable.lookup(*$1);
                          	if (c == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	$$ = c;
							if(!symbolTable.isGlobal() && isConst(*c)){
								if(c->idType == strType){
									G_const_Str(c->idData.sval);
								}else if(c->idType == intType || c->idType == boolType || c->idType == charType){
									G_const_Int(c->getValue());
								}
							}else if(c->idType == intType || c->idType == boolType || c->idType == charType){
								int idx = symbolTable.getIndex(*$1);
								if(idx == -1){
									G_get_global_Var(*$1);
								}else{
									cout<<*$1<<":idx is========"<<idx<<"\n";
									G_get_local_Var(idx);
								}
								
							}
                        }
                        | const_val
						{
							if(!symbolTable.isGlobal()){
								if($1->idType == strType){
									G_const_Str($1->idData.sval);
								}else if($1->idType == intType || $1->idType == boolType || $1->idType == charType){
									G_const_Int($1->getValue());
								}
							}
						}
                        | ID '[' expression ']'
                        {
                          	IDclass *c = symbolTable.lookup(*$1);
                          	if (c == NULL) yyerror("undeclared identifier");
                          	else if (c->idType != arrayType) yyerror("not array type");
                          	else if ($3->idType != intType) yyerror("invalid index");
                          	else if ($3->idData.ival >= c->arrayValue.size()) yyerror("index out of range");                        
                          	$$ = new IDclass(c->arrayValue[$3->idData.ival]);
                        }
                        | function_invocation
                        | '-' expression %prec UMINUS
                        {
                          	Trace("-expression");
                          	if ($2->idType != intType && $2->idType != realType) yyerror("operator error"); /* operator check */
                          	IDclass *c = new IDclass(variableFlag,$2->idType,true);
                          	$$ = c;
							if($2->idType == intType) G_Operator('m');
                        }
                        | expression '*' expression
                        {
                          	Trace("expression * expression");
                          	if ($1->idType != $3->idType) yyerror("* type not match"); /* type check */ 
                          	if ($1->idType != intType && $1->idType != realType) yyerror(" * operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,$1->idType,true); 
                          	//c->setValue (*$1 * *$3);
                          	$$ = c;
							if($1->idType == intType) G_Operator('*');
                        }
                        | expression '/' expression
                        {
                          	Trace("expression / expression");
							if ($1->idType != $3->idType) yyerror("/type not match"); /* type check */ 
                          	if ($1->idType != intType && $1->idType != realType) yyerror("/ operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,$1->idType,true); 
                          	//c->setValue (*$1 / *$3);
                          	$$ = c;
							if($1->idType == intType) G_Operator('/');
                        }
                        | expression '+' expression
                        {
                          	Trace("expression + expression");
                          	if ($1->idType != $3->idType) yyerror("+ type not match"); /* type check */ 
                          	if ($1->idType != intType && $1->idType != realType) yyerror("+ operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,$1->idType,true);
							//c->setValue (*$1 + *$3);
                          	$$ = c;
							if($1->idType == intType) G_Operator('+');
                        }
                        | expression '-' expression
                        {
                          	Trace("expression - expression");
                          	if ($1->idType != $3->idType) yyerror("- type not match"); /* type check */ 
                          	if ($1->idType != intType && $1->idType != realType) yyerror("- operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,$1->idType,true); 
                          	//c->setValue (*$1 - *$3);
                          	$$ = c;
							if($1->idType == intType) G_Operator('-');
                        }
						| expression '%' expression
                        {
                          	Trace("expression - expression");
                          	if ($1->idType != $3->idType) yyerror("- type not match"); /* type check */ 
                          	if ($1->idType != intType && $1->idType != realType) yyerror("- operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,$1->idType,true); 
                          	$$ = c;
							if($1->idType == intType) G_Operator('%');
                        }
						| expression AND expression
                        {
	                        Trace("expression && expression");
	                        if ($1->idType != $3->idType) yyerror("AND type not match"); /* type check */
	                        if ($1->idType != boolType) yyerror("AND operator error"); /* operator check */
	                        IDclass *c = new IDclass(variableFlag,boolType,true);
                          	$$ = c;
							if ($1->idType == boolType) G_Operator('&');
                        }
                        | expression OR expression
                        {
                          	Trace("expression || expression");
                          	if ($1->idType != $3->idType) yyerror("OR type not match"); /* type check */
	                        if ($1->idType != boolType) yyerror("OR operator error"); /* operator check */
	                        IDclass *c = new IDclass(variableFlag,boolType,true);
                          	$$ = c;
							if ($1->idType == boolType) G_Operator('|');
                        }
						| expression '<' expression
                        {
                          	Trace("expression < expression");
                          	if ($1->idType != $3->idType) yyerror("< type not match"); /* type check */	
                          	if ($1->idType != intType && $1->idType != realType && $1->idType != boolType && $1->idType != charType) yyerror("< operator error"); /* operator check */  
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 < *$3);
                          	$$ = c;	
							G_Compare(IFLT);  
                        }
						| expression '>' expression
                        {
                          	Trace("expression > expression");
                          	if ($1->idType != $3->idType) yyerror("> type not match"); /* type check */	
                          	if ($1->idType != intType && $1->idType != realType && $1->idType != boolType && $1->idType != charType) yyerror("> operator error"); /* operator check */  
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 > *$3);
                          	$$ = c;	
							G_Compare(IFGT);  
                        }
                        | expression LE expression
                        {
                          	Trace("expression <= expression");
							if ($1->idType != $3->idType) yyerror("LE type not match"); /* type check */	
                          	if ($1->idType != intType && $1->idType != realType && $1->idType != boolType && $1->idType != charType) yyerror("LE operator error"); /* operator check */  
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 <= *$3);
                          	$$ = c;	 
							G_Compare(IFLE);                  
                        }
                        | expression EE expression
                        {
                            Trace("expression == expression");
                            if ($1->idType != $3->idType) yyerror("EE type not match"); /* type check */	                         	
							IDclass *c = new IDclass(variableFlag,boolType,true); 
                          	$$ = c;	
							G_Compare(IFEE);  
                        }
                        | expression GE expression
                        {
                          	Trace("expression >= expression");
                          	if ($1->idType != $3->idType) yyerror("GE type not match"); /* type check */	
                          	if ($1->idType != intType && $1->idType != realType && $1->idType != boolType && $1->idType != charType) yyerror("GE operator error"); /* operator check */  
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 >= *$3);
                          	$$ = c;	
							G_Compare(IFGE);  
                        }                       
                        | expression NE expression
                        {
                          	Trace("expression != expression");
                          	if ($1->idType != $3->idType) yyerror("NE type not match"); /* type check */              
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 != *$3);
                          	$$ = c;	
							G_Compare(IFNE);  
                        }
                        | '!' expression
                        {
                          	Trace("!expression");
                          	if ($2->idType != boolType) yyerror("!operator error"); /* operator check */                                   
                          	IDclass *c = new IDclass(variableFlag,boolType,true); 
                          	//c->idData.bval = !$2->idData.bval;
                          	$$ = c;
							G_Operator('!');
                        }
                        | '(' expression ')'
                        {
                          	Trace("(expression)");
                          	$$ = $2;
                        }
                        ;			
%%

void yyerror(string s){
	cerr << "yyerror: line " << linenum << ": " << s << endl;
  	exit(1);
}

int main(int argc, char *argv[])
{

if(argc==2){
	yyin = fopen(argv[1],"r");
	
	filename = string(argv[1]);
	filename += ".jasm";
	string jasmfolder = "jasmFile";
	filename = filename.replace(2,8,jasmfolder,0,8);
	//./testFile/test1.scala.jasmis
	ex.open(filename);

}else{
	puts("Format error!");
	return 0 ;
}


yyparse();

}