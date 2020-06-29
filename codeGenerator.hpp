#include "symbols.hpp"
#include <fstream>
#include <stack>
#include <iostream>

using namespace std;

struct label
{
  // count
  int C;
  //flag
  int LF;
  label(int num)
  {
    C = num;
    LF = -1;
  };
};

class LabelManager
{
private:
  int counts;

public:
  stack<label> lStack;
  LabelManager()
  {
    counts = 0;
  }
  void pushNLable(int n)
  {
    lStack.push(label(counts));
    counts += n;
  }
  void NLabel(int n)
  {
    lStack.top().C += n;
    counts += n;
  }
  void popLabel()
  {
    lStack.pop();
  }
  int takeLabel(int n)
  {
    return lStack.top().C + n;
  }
  int getLable()
  {
    return counts++;
  }
  int getFlag()
  {
    return lStack.top().LF;
  }
};
LabelManager lm;

extern ofstream ex;
extern string className;

enum condition
{
  IFLT, //  <
  IFGT, //  >
  IFLE, //  <=
  IFGE, //  >=
  IFEE, //  ==
  IFNE, //
};

// Block

void G_object_Start()
{
  ex << "class " << className << "{\n";
}
void G_object_End()
{
  ex << "}\n";
}

void G_block_End()
{
  ex << "\t}\n";
}

// Variable

void G_global_Var(string id)
{
  ex << "\tfield static int " << id << "\n";
}

void G_global_Var_value(string id, int val)
{
  ex << "\tfield static int " << id << " = " << val << "\n";
}

void G_local_Var_value(int idIndex, int val)
{
  ex << "\t\tistore " << idIndex << "\n";
}
// get
void G_get_global_Var(string id)
{
  ex << "\t\tgetstatic int " << className << "." << id << "\n";
}

void G_get_local_Var(int idIndex)
{
  ex << "\t\tiload " << idIndex << "\n";
}
//set
void G_set_global_Var(string id)
{
  ex << "\t\tputstatic int " << className << "." << id << "\n";
}

void G_set_local_Var(int idx)
{
  ex << "\t\tistore " << idx << "\n";
}

// Const
void G_const_int(int idIndex, int value)
{
  ex << "\t\tsipush " << value << "\n";
}

//----------------

void G_main_Start()
{
  ex << "\tmethod public static void main(java.lang.String[])"
     << "\n";
  ex << "\tmax_stack 15"
     << "\n";
  ex << "\tmax_locals 15"
     << "\n"
     << "\t{"
     << "\n";
}
void G_method_Start(IDclass info)
{
  ex << "\tmethod public static ";
  ex << ((info.idType == voidType) ? "void" : "int");
  ex << " " + info.id + "(";
  for (int i = 0; i < info.arrayValue.size(); i++)
  {
    if (i != 0)
      ex << ", ";
    ex << "int";
  }
  ex << ")"
     << "\n";
  ex << "\tmax_stack 15"
     << "\n";
  ex << "\tmax_locals 15"
     << "\n"
     << "\t{"
     << "\n";

  for (int i = 0; i < info.arrayValue.size(); i++)
  {
    ex << "\t\tiload " << i << "\n";
  }
}

void G_void_method_End()
{
  ex << "\t\treturn"
     << "\n"
     << "\t}"
     << "\n";
}

void G_print_Start()
{
  ex << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
}

void G_print(int idType)
{

  string type = "";
  switch (idType)
  {
  case intType:
    type = "int";
    break;
  case realType:
    type = "float";
    break;
  case boolType:
    type = "boolean";
    break;
  case charType:
    type = "char";
    break;
  case strType:
    type = "java.lang.String";
    break;
  default:
    type = "int";
    break;
  }
  ex << "\t\tinvokevirtual void java.io.PrintStream.print(" << type << ")\n";
}

void G_println(int idType)
{
  string type = "";
  switch (idType)
  {
  case intType:
    type = "int";
    break;
  case realType:
    type = "float";
    break;
  case boolType:
    type = "boolean";
    break;
  case charType:
    type = "char";
    break;
  case strType:
    type = "java.lang.String";
    break;
  default:
    type = "int";
    break;
  }
  ex << "\t\tinvokevirtual void java.io.PrintStream.println(" << type << ")\n";
}

void G_IReturn()
{
  ex << "\t\tireturn"
     << "\n";
}

void G_Return()
{
  ex << "\t\treturn"
     << "\n";
}

void G_const_Str(string s)
{
  ex << "\t\tldc \"" << s << "\"" << endl;
}

void G_const_Int(int i)
{
  ex << "\t\tsipush " << i << endl;
}

void G_Operator(char op)
{
  switch (op)
  {
  case 'm':
    ex << "\t\tineg"
       << "\n";
    break;
  case '*':
    ex << "\t\timul"
       << "\n";
    break;
  case '/':
    ex << "\t\tidiv"
       << "\n";
    break;
  case '+':
    ex << "\t\tiadd"
       << "\n";
    break;
  case '-':
    ex << "\t\tisub"
       << "\n";
    break;
  case '!':
    ex << "\t\tldc 1"
       << "\n"
       << "\t\tixor"
       << "\n";
    break;
  case '&':
    ex << "\t\tiand"
       << "\n";
    break;
  case '|':
    ex << "\t\tior"
       << "\n";
    break;
  case '%':
    ex << "\t\tirem"
       << "\n";
    break;
  }
}

void G_call_Func(IDclass info)
{
  ex << "\t\tinvokestatic ";
  ex << ((info.idType == voidType) ? "void" : "int");
  ex << " " + className + "." + info.id + "(";
  for (int i = 0; i < info.arrayValue.size(); ++i)
  {
    if (i != 0)
      ex << ", ";
    ex << "int";
  }
  ex << ")"
     << "\n";
}

void G_Compare(int op)
{
  ex << "\t\tisub" << endl;
  switch (op)
  {
  case IFLT:
    ex << "\t\tiflt";
    break;
  case IFGT:
    ex << "\t\tifgt";
    break;
  case IFLE:
    ex << "\t\tifle";
    break;
  case IFGE:
    ex << "\t\tifge";
    break;
  case IFEE:
    ex << "\t\tifeq";
    break;
  case IFNE:
    ex << "\t\tifne";
    break;
  }
  int l1 = lm.getLable();
  int l2 = lm.getLable();
  ex << " L" << l1 << endl;
  ex << "\t\ticonst_0" << endl;
  ex << "\t\tgoto L" << l2 << endl;
  ex << "\t\tnop" << endl
     << "L" << l1 << ":" << endl;
  ex << "\t\ticonst_1" << endl;
  ex << "\t\tnop" << endl
     << "L" << l2 << ":" << endl;
}

void G_If(string mode)
{
  if (mode == "if_start")
  { // if start
    lm.pushNLable(2);
    ex << "\t\tifeq L" << lm.takeLabel(0) << endl;
  }
  else if (mode == "else")
  { // else
    ex << "\t\tgoto L" << lm.takeLabel(1) << endl;
    ex << "\t\tnop" << endl
       << "L" << lm.takeLabel(0) << ":" << endl;
  }
  else if (mode == "if_end")
  { // if end
    ex << "\t\tnop" << endl
       << "L" << lm.takeLabel(0) << ":" << endl;
    lm.popLabel();
  }
  else if (mode == "if_else_end")
  { // if else end
    ex << "\t\tnop" << endl
       << "L" << lm.takeLabel(1) << ":" << endl;
    lm.popLabel();
  }
}

void G_While(string mode)
{
  if (mode == "while_start")
  {
    lm.pushNLable(4);
    ex << "\t\tnop" << endl
       << "L" << lm.takeLabel(0) << ":" << endl;
  }
  else if (mode == "while_con")
  {
    lm.NLabel(1);
    ex << "\t\tifeq L" << lm.takeLabel(3 + lm.getFlag()) << endl;
  }
  else if (mode == "while_end")
  {
    ex << "\t\tgoto L" << lm.takeLabel(lm.getFlag()) << endl;
    ex << "\t\tnop" << endl
       << "L" << lm.takeLabel(3 + lm.getFlag()) << ":" << endl;
    lm.popLabel();
  }
}
