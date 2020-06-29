/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EE = 258,
    LE = 259,
    GE = 260,
    NE = 261,
    OR = 262,
    AND = 263,
    BOOLEAN = 264,
    BREAK = 265,
    CHAR = 266,
    CASE = 267,
    CLASS = 268,
    CONTINUE = 269,
    DEF = 270,
    DO = 271,
    ELSE = 272,
    EXIT = 273,
    FLOAT = 274,
    FOR = 275,
    IF = 276,
    INT = 277,
    OBJECT = 278,
    PRINT = 279,
    PRINTLN = 280,
    REPEAT = 281,
    RETURN = 282,
    STRING = 283,
    TO = 284,
    TYPE = 285,
    VAL = 286,
    VAR = 287,
    WHILE = 288,
    READ = 289,
    TRUE = 290,
    FALSE = 291,
    ID = 292,
    INT_C = 293,
    FLOAT_C = 294,
    BOOL_C = 295,
    STRING_C = 296,
    CHAR_C = 297,
    UMINUS = 298
  };
#endif
/* Tokens.  */
#define EE 258
#define LE 259
#define GE 260
#define NE 261
#define OR 262
#define AND 263
#define BOOLEAN 264
#define BREAK 265
#define CHAR 266
#define CASE 267
#define CLASS 268
#define CONTINUE 269
#define DEF 270
#define DO 271
#define ELSE 272
#define EXIT 273
#define FLOAT 274
#define FOR 275
#define IF 276
#define INT 277
#define OBJECT 278
#define PRINT 279
#define PRINTLN 280
#define REPEAT 281
#define RETURN 282
#define STRING 283
#define TO 284
#define TYPE 285
#define VAL 286
#define VAR 287
#define WHILE 288
#define READ 289
#define TRUE 290
#define FALSE 291
#define ID 292
#define INT_C 293
#define FLOAT_C 294
#define BOOL_C 295
#define STRING_C 296
#define CHAR_C 297
#define UMINUS 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:1909  */

  int ival;
  float fval;
  bool bval;
  char cval;
  string *sval;
  IDclass* idClassval;
  int type;

#line 150 "y.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */
