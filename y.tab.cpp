/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

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

#line 80 "y.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.hpp".  */
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
#line 16 "parser.y" /* yacc.c:355  */

  int ival;
  float fval;
  bool bval;
  char cval;
  string *sval;
  IDclass* idClassval;
  int type;

#line 216 "y.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 233 "y.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   278

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,    60,     2,     2,
      55,    56,    48,    46,    57,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,     2,
      44,    54,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    51,    73,    74,    75,    79,    89,    97,
     109,   124,   138,   153,   157,   161,   165,   169,   174,   175,
     178,   187,   177,   208,   209,   211,   218,   220,   226,   231,
     232,   234,   236,   237,   238,   239,   240,   242,   266,   266,
     275,   275,   283,   287,   292,   299,   298,   311,   309,   320,
     328,   331,   332,   335,   340,   334,   350,   349,   366,   365,
     389,   390,   394,   395,   399,   405,   410,   414,   418,   423,
     429,   452,   462,   471,   472,   480,   490,   500,   510,   520,
     529,   538,   547,   557,   567,   577,   585,   595,   604,   613
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EE", "LE", "GE", "NE", "OR", "AND",
  "BOOLEAN", "BREAK", "CHAR", "CASE", "CLASS", "CONTINUE", "DEF", "DO",
  "ELSE", "EXIT", "FLOAT", "FOR", "IF", "INT", "OBJECT", "PRINT",
  "PRINTLN", "REPEAT", "RETURN", "STRING", "TO", "TYPE", "VAL", "VAR",
  "WHILE", "READ", "TRUE", "FALSE", "ID", "INT_C", "FLOAT_C", "BOOL_C",
  "STRING_C", "CHAR_C", "'!'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "UMINUS", "'{'", "'}'", "':'", "'='", "'('", "')'", "','", "'['", "']'",
  "'%'", "$accept", "program", "$@1", "var_const_decs", "const_dec",
  "var_dec", "var_type", "method_decs", "method_dec", "$@2", "$@3", "args",
  "arg", "return_type", "zero_more_staments", "one_more_staments",
  "statements", "stament", "$@4", "$@5", "block", "$@6", "conditional",
  "$@7", "if_Start", "a_block_or_statement", "loop", "$@8", "$@9", "$@10",
  "function_invocation", "$@11", "comma_separated_expressions",
  "comma_separated", "func_expression", "const_val", "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    33,    60,    62,    43,    45,    42,    47,
     298,   123,   125,    58,    61,    40,    41,    44,    91,    93,
      37
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -59

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -22,    25,    79,   -85,   -85,    29,    -9,    44,    46,    72,
      -9,    -9,   -28,     7,    51,    37,    72,   -85,   -85,    97,
     213,    97,   213,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,    47,   -34,   -85,   -85,   -85,   -85,   -85,   213,   213,
     213,   -85,   -85,   154,    48,   154,    43,   213,   213,    45,
      26,    64,     3,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,    66,   154,     9,
     213,   -85,   218,   218,   218,   218,   182,    26,   218,   218,
      16,    16,    64,    64,   154,   154,    54,    62,    69,   -85,
      73,   -85,    71,   154,    97,    78,    66,   -85,   213,   -85,
      97,    53,   -85,   -85,   -85,   -85,    -9,   185,    90,    91,
     213,    92,   112,    96,   -85,   117,   185,   -85,   140,   145,
     -85,   -85,   -85,   -85,   134,   213,   154,   -85,   -85,   213,
      -9,   -85,   -85,   118,   121,   128,    88,   213,   154,   212,
     213,   213,   130,   -85,   154,   137,   185,   107,   135,   155,
     141,   138,   -85,   -85,   -85,   -85,   167,    96,   -85,   -85,
     190,   141,   170,   -85,   -85,   157,   141,   -85,   -85,   141,
     -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     6,     0,     0,     0,
       6,     6,     0,    12,     0,     0,    19,     4,     5,     0,
       0,     0,     0,    20,     3,    18,    15,    17,    14,    13,
      16,     0,    70,    65,    66,    67,    68,    69,     0,     0,
       0,    73,    71,     8,     9,    10,     0,     0,     0,     0,
      88,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     7,     0,
      61,    89,    85,    84,    86,    87,    81,    80,    82,    83,
      77,    78,    75,    76,    79,    11,     0,     0,    24,    72,
       0,    60,    63,    64,     0,    28,    26,    59,     0,    25,
       0,     0,    23,    62,    27,    21,     6,    30,     0,     0,
      43,     0,     0,    58,    45,     0,    30,    32,     0,     0,
      33,    34,    35,    36,     0,     0,    44,    53,    42,     0,
       6,    22,    29,     0,     0,     0,     0,     0,    37,    38,
       0,     0,     0,    50,    54,     0,    30,     0,     0,     0,
      38,     0,    46,    31,    39,    41,     0,     0,    52,    51,
      49,    38,     0,    47,    55,     0,    38,    56,    48,    38,
      57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,    -7,   -85,   -85,   -16,   195,   -85,   -85,
     -85,   119,   -85,   -85,   -49,   -85,    77,   -84,   -85,   -85,
      74,   -85,   -85,   -85,   -85,   -39,   -85,   -85,   -85,   -85,
      58,   -85,   -85,   122,   -85,   -85,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     9,    10,    11,    31,    15,    16,    46,
     106,    87,    88,   101,   115,   145,   116,   117,   118,   119,
     120,   130,   121,   166,   150,   160,   122,   137,   151,   169,
      41,    49,    90,    91,    92,    42,    93
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,     1,    45,    17,    18,    44,    53,    54,    55,    56,
      57,    58,    53,    54,    55,    56,    57,    58,    50,    51,
      52,   -58,     7,     8,    48,    19,    20,    68,    69,    53,
      54,    55,    56,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    59,    60,    61,
      62,    63,    64,    59,    60,    61,    62,    63,    64,    71,
      21,    22,     3,    65,    63,    64,   158,   132,    89,    65,
      59,    60,    61,    62,    63,    64,    65,   158,    99,     4,
       6,    12,   158,    13,   104,   158,    65,    14,    23,    24,
     126,    53,    54,    55,    56,    57,    58,   153,    67,   107,
      70,    47,    66,    86,   105,   136,    26,    94,    27,   138,
      53,    54,    55,    56,    57,    58,    28,   144,    95,    29,
     147,   148,   164,   139,    65,    30,    96,   168,    98,    97,
     170,   100,    59,    60,    61,    62,    63,    64,    53,    54,
      55,    56,    57,    58,   143,   124,   125,   127,    65,   128,
     129,    59,    60,    61,    62,    63,    64,    53,    54,    55,
      56,    57,    58,   154,   133,   123,   -40,    65,   110,   131,
     134,   135,   142,   140,   123,   112,   141,   149,   157,    59,
      60,    61,    62,    63,    64,    53,    54,    55,    56,   152,
      58,   155,   114,   156,   161,    65,   162,   123,    59,    60,
      61,    62,    63,    64,   123,   108,   109,   163,   165,   -38,
     -40,    25,   110,   167,    65,   102,   146,     0,   111,   112,
     103,     0,   113,     0,   159,     0,    59,    60,    61,    62,
      63,    64,   108,   109,     0,   159,   114,   -40,     0,   110,
     159,     0,    65,   159,     0,   111,   112,     0,     0,   113,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
      39,     0,     0,   114,    61,    62,    63,    64,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65
};

static const yytype_int16 yycheck[] =
{
      20,    23,    22,    10,    11,    21,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,    38,    39,
      40,    55,    31,    32,    58,    53,    54,    47,    48,     3,
       4,     5,     6,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    44,    45,    46,
      47,    48,    49,    44,    45,    46,    47,    48,    49,    56,
      53,    54,    37,    60,    48,    49,   150,   116,    59,    60,
      44,    45,    46,    47,    48,    49,    60,   161,    94,     0,
      51,    37,   166,    37,   100,   169,    60,    15,    37,    52,
     110,     3,     4,     5,     6,     7,     8,   146,    55,   106,
      55,    54,    54,    37,    51,   125,     9,    53,    11,   129,
       3,     4,     5,     6,     7,     8,    19,   137,    56,    22,
     140,   141,   161,   130,    60,    28,    57,   166,    57,    56,
     169,    53,    44,    45,    46,    47,    48,    49,     3,     4,
       5,     6,     7,     8,    56,    55,    55,    55,    60,    37,
      54,    44,    45,    46,    47,    48,    49,     3,     4,     5,
       6,     7,     8,    56,    24,   107,    25,    60,    27,    52,
      25,    37,    44,    55,   116,    34,    55,    47,    37,    44,
      45,    46,    47,    48,    49,     3,     4,     5,     6,    52,
       8,    56,    51,    38,    56,    60,    29,   139,    44,    45,
      46,    47,    48,    49,   146,    20,    21,    17,    38,    24,
      25,    16,    27,    56,    60,    96,   139,    -1,    33,    34,
      98,    -1,    37,    -1,   150,    -1,    44,    45,    46,    47,
      48,    49,    20,    21,    -1,   161,    51,    25,    -1,    27,
     166,    -1,    60,   169,    -1,    33,    34,    -1,    -1,    37,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      47,    -1,    -1,    51,    46,    47,    48,    49,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    62,    37,     0,    63,    51,    31,    32,    64,
      65,    66,    37,    37,    15,    68,    69,    64,    64,    53,
      54,    53,    54,    37,    52,    68,     9,    11,    19,    22,
      28,    67,    37,    38,    39,    40,    41,    42,    43,    47,
      55,    91,    96,    97,    67,    97,    70,    54,    58,    92,
      97,    97,    97,     3,     4,     5,     6,     7,     8,    44,
      45,    46,    47,    48,    49,    60,    54,    55,    97,    97,
      55,    56,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    37,    72,    73,    59,
      93,    94,    95,    97,    53,    56,    57,    56,    57,    67,
      53,    74,    72,    94,    67,    51,    71,    64,    20,    21,
      27,    33,    34,    37,    51,    75,    77,    78,    79,    80,
      81,    83,    87,    91,    55,    55,    97,    55,    37,    54,
      82,    52,    75,    24,    25,    37,    97,    88,    97,    64,
      55,    55,    44,    56,    97,    76,    77,    97,    97,    47,
      85,    89,    52,    75,    56,    56,    38,    37,    78,    81,
      86,    56,    29,    17,    86,    38,    84,    56,    86,    90,
      86
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    63,    62,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    68,    68,
      70,    71,    69,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    77,    77,    77,    77,    77,    78,    79,    78,
      80,    78,    78,    78,    78,    82,    81,    84,    83,    83,
      85,    86,    86,    88,    89,    87,    90,    87,    92,    91,
      93,    93,    94,    94,    95,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     7,     2,     2,     0,     6,     4,     4,
       4,     6,     2,     1,     1,     1,     1,     1,     2,     1,
       0,     0,    12,     3,     1,     3,     0,     2,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     3,     0,     5,
       0,     5,     2,     1,     2,     0,     5,     0,     9,     6,
       0,     1,     1,     0,     0,     7,     0,    11,     0,     5,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 52 "parser.y" /* yacc.c:1646  */
    {			
							Trace("program start");
							IDclass* c = new IDclass();
							c->idFlag = objectFlag;	
							c->idType = None;				
							symbolTable.insert(*(yyvsp[0].sval),*c);
							className = *(yyvsp[0].sval);
							G_object_Start();
						}
#line 1463 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 62 "parser.y" /* yacc.c:1646  */
    {						
							Trace("End program");
							symbolTable.dump();
							symbolTable.pop();
							G_object_End();
							if(!hasMain){
								yyerror("No main exist");
							}
						}
#line 1477 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 80 "parser.y" /* yacc.c:1646  */
    {

							Trace("VAL ID : var_type = expression");
							(yyvsp[0].idClassval)->idFlag = constVariableFlag;
							(yyvsp[0].idClassval)->init = true;
							if(symbolTable.insert(*(yyvsp[-4].sval),*(yyvsp[0].idClassval)) == -1) yyerror("const redefine");
							int i = symbolTable.getIndex(*(yyvsp[-4].sval));
							
						}
#line 1491 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "parser.y" /* yacc.c:1646  */
    {
							Trace("VAL ID = expression");
							(yyvsp[0].idClassval)->idFlag = constVariableFlag;
							(yyvsp[0].idClassval)->init = true;
							if(symbolTable.insert(*(yyvsp[-2].sval),*(yyvsp[0].idClassval)) == -1) yyerror("const redefine");
						}
#line 1502 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "parser.y" /* yacc.c:1646  */
    {
							Trace("VAR ID : var_type");
							IDclass* c = new IDclass(variableFlag,(yyvsp[0].type),false);
							if(symbolTable.insert(*(yyvsp[-2].sval),*c) == -1) yyerror("var_dec redefine");
							if((yyvsp[0].type) == intType || (yyvsp[0].type) == boolType){
								int idx = symbolTable.getIndex(*(yyvsp[-2].sval));
								if(idx == -1){
									G_global_Var(*(yyvsp[-2].sval));
								}
							}
						}
#line 1518 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "parser.y" /* yacc.c:1646  */
    {
							Trace("VAR ID '=' expression");
							(yyvsp[0].idClassval) ->init = true;
							(yyvsp[0].idClassval) ->idFlag = variableFlag;
							if(symbolTable.insert(*(yyvsp[-2].sval),*(yyvsp[0].idClassval)) == -1) yyerror("var_dec redefine");
							int idx = symbolTable.getIndex(*(yyvsp[-2].sval));
							int val = (yyvsp[0].idClassval)->getValue();
							if(idx == -1){
								G_global_Var_value(*(yyvsp[-2].sval),val);
							}else if(idx>=0){
								G_local_Var_value(idx,val);
							}

						}
#line 1537 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 125 "parser.y" /* yacc.c:1646  */
    {
							Trace("VAR ID ':' var_type '=' expression");
							(yyvsp[0].idClassval)->init = true;
							(yyvsp[0].idClassval)->idFlag = variableFlag;
							if(symbolTable.insert(*(yyvsp[-4].sval),*(yyvsp[0].idClassval)) == -1 ){yyerror("variable redefine");}
							int idx = symbolTable.getIndex(*(yyvsp[-4].sval));
							int val = (yyvsp[0].idClassval)->getValue();
							if(idx == -1){
								G_global_Var_value(*(yyvsp[-4].sval),val);
							}else if(idx>=0){
								G_local_Var_value(idx,val);
							}
						}
#line 1555 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 139 "parser.y" /* yacc.c:1646  */
    {
							Trace("var id");
							IDclass* c = new IDclass(variableFlag,None,false);
							if(symbolTable.insert(*(yyvsp[0].sval),*c) == -1) yyerror("var_dec redefine");
							int idx = symbolTable.getIndex(*(yyvsp[0].sval));
							if(idx == -1){
								G_global_Var(*(yyvsp[0].sval));
							}else if(idx >= 0){
								G_const_Int(0);
								G_local_Var_value(idx,0);
							}
						}
#line 1572 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 154 "parser.y" /* yacc.c:1646  */
    {
                          (yyval.type) = intType;
                        }
#line 1580 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 158 "parser.y" /* yacc.c:1646  */
    {
                          (yyval.type) = realType;
                        }
#line 1588 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 162 "parser.y" /* yacc.c:1646  */
    {
                          (yyval.type) = boolType;
                        }
#line 1596 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 166 "parser.y" /* yacc.c:1646  */
    {
                          (yyval.type) = strType;
                        }
#line 1604 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 170 "parser.y" /* yacc.c:1646  */
    {
                          (yyval.type) = charType;
                        }
#line 1612 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 178 "parser.y" /* yacc.c:1646  */
    {
							Trace("DEF ID '(' args ')' return_type");
							
							IDclass *c = new IDclass(functionFlag,None,false);
							if(symbolTable.insert(*(yyvsp[0].sval),*c)==-1) yyerror("function redefine");
							symbolTable.push();

						}
#line 1625 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 187 "parser.y" /* yacc.c:1646  */
    {
							Trace("method_desc");
							if(*(yyvsp[-6].sval)=="main"){
								hasMain = true;
								G_main_Start();
							}else{
								G_method_Start(*symbolTable.lookup(*(yyvsp[-6].sval)));
							}
						}
#line 1639 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 197 "parser.y" /* yacc.c:1646  */
    {
							Trace("method end");
							if(symbolTable.lookup(*(yyvsp[-10].sval))->idType == voidType){
								G_void_method_End();
							}else{
								G_block_End();
							}
							symbolTable.dump();
							symbolTable.pop();
						}
#line 1654 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 212 "parser.y" /* yacc.c:1646  */
    {
    						Trace("Add function arg");
        					IDclass* c = new IDclass(variableFlag,(yyvsp[0].type),false);
        					if(symbolTable.insert(*(yyvsp[-2].sval),*c) == -1) yyerror("variable redefine");
        					symbolTable.addFunctionArg(*(yyvsp[-2].sval), *c);
    					}
#line 1665 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 221 "parser.y" /* yacc.c:1646  */
    {
							Trace("return_type':' var_type");
							symbolTable.setFunctionType((yyvsp[0].type));
						}
#line 1674 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 226 "parser.y" /* yacc.c:1646  */
    {
							Trace("return_type':' None");
							symbolTable.setFunctionType(voidType);
						}
#line 1683 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 243 "parser.y" /* yacc.c:1646  */
    {
							Trace("statement: variable assignment");
							IDclass* c = symbolTable.lookup(*(yyvsp[-2].sval));
							if(c == NULL){
								yyerror("variable not declare!");
							}else if(c->idFlag!=variableFlag){
								yyerror("this is not variable");
							}else if(c->idType != (yyvsp[0].idClassval)->idType && c->idType!=None){
								yyerror("variable type not the same");
							} else{
								if(c->idType==None){
									c -> idType = (yyvsp[0].idClassval)->idType;
								}
								c->init = true;
								c->setValue(*(yyvsp[0].idClassval));	
								if (c->idType == intType || c->idType == boolType || c->idType == charType) {
                            		int idx = symbolTable.getIndex(*(yyvsp[-2].sval));
                            		if (idx == -1) G_set_global_Var(*(yyvsp[-2].sval));
                            		else G_set_local_Var(idx);
                          		}
							}
						}
#line 1710 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 266 "parser.y" /* yacc.c:1646  */
    {
							G_print_Start();
						}
#line 1718 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 270 "parser.y" /* yacc.c:1646  */
    {
							Trace("stament: print expression");
							G_print((yyvsp[-1].idClassval) ->idType);
						}
#line 1727 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 275 "parser.y" /* yacc.c:1646  */
    {
							G_print_Start();
						}
#line 1735 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 279 "parser.y" /* yacc.c:1646  */
    {
							Trace("stament: println expression");
							G_println((yyvsp[-1].idClassval)->idType);
						}
#line 1744 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 284 "parser.y" /* yacc.c:1646  */
    {
							Trace("Read id");
						}
#line 1752 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 288 "parser.y" /* yacc.c:1646  */
    {
							Trace("stament: return");
							G_Return();
						}
#line 1761 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 293 "parser.y" /* yacc.c:1646  */
    {
							Trace("stament: return expression");
							G_IReturn();
						}
#line 1770 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 299 "parser.y" /* yacc.c:1646  */
    {
							Trace("Block start");
							symbolTable.push();
						}
#line 1779 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 304 "parser.y" /* yacc.c:1646  */
    {
                        	symbolTable.dump();
                        	symbolTable.pop();
                        }
#line 1788 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 311 "parser.y" /* yacc.c:1646  */
    {
							G_If("else");
						}
#line 1796 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 315 "parser.y" /* yacc.c:1646  */
    {
							Trace("statement: if else");
							if((yyvsp[-6].idClassval)->idType != boolType )yyerror("condition type error");
							G_If("if_else_end");
						}
#line 1806 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 321 "parser.y" /* yacc.c:1646  */
    {
							Trace("conditional IF");
							if((yyvsp[-3].idClassval)->idType != boolType) { yyerror("condition type error");}
							G_If("if_end");
						}
#line 1816 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 328 "parser.y" /* yacc.c:1646  */
    {
							G_If("if_start");
						}
#line 1824 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 335 "parser.y" /* yacc.c:1646  */
    {
							Trace("while loop start");
							G_While("while_start");
						}
#line 1833 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 340 "parser.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].idClassval)->idType!=boolType && (yyvsp[0].idClassval)->idType!=intType) yyerror("condition not bool or int ");
							G_While("while_con");
						}
#line 1842 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 345 "parser.y" /* yacc.c:1646  */
    {	
							Trace("while loop end");
							G_While("while_end");
						}
#line 1851 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 350 "parser.y" /* yacc.c:1646  */
    {
							Trace("For loop start");
							IDclass* c = symbolTable.lookup(*(yyvsp[-6].sval));
							if(c == NULL){
								yyerror("variable not declare!");
							}else if(c->idFlag!=variableFlag){
								yyerror("this is not variable");
							}else if(c->idType != intType){
								yyerror("variable in for can only be int");
							} 
						}
#line 1867 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 361 "parser.y" /* yacc.c:1646  */
    {
							Trace("For loop end");
						}
#line 1875 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 366 "parser.y" /* yacc.c:1646  */
    {
							functions.push_back(vector<IDclass>());
						}
#line 1883 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 370 "parser.y" /* yacc.c:1646  */
    {
                          Trace("statement: function invocation");
                          IDclass *c = symbolTable.lookup(*(yyvsp[-4].sval));
                          if (c == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (c->idFlag != functionFlag) yyerror("not a function"); /* function check */
                          vector<IDclass> para = c->arrayValue;
                          if (para.size() != functions[functions.size() - 1].size()) yyerror("parameter size not match"); /* parameter size check */

                          for (int i = 0; i < para.size(); ++i) {
                            if (para[i].idType != functions[functions.size() - 1].at(i).idType) yyerror("parameter type not match"); /* parameter type check */
                          }
						  G_call_Func(*c);
                          (yyval.idClassval) = c;
                          functions.pop_back();
                        }
#line 1903 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 400 "parser.y" /* yacc.c:1646  */
    {
                          	functions[functions.size() - 1].push_back(*(yyvsp[0].idClassval));
                        }
#line 1911 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 406 "parser.y" /* yacc.c:1646  */
    {
							Trace("int const");
                          	(yyval.idClassval) = intConst((yyvsp[0].ival));
                        }
#line 1920 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 411 "parser.y" /* yacc.c:1646  */
    {
                          	(yyval.idClassval) = realConst((yyvsp[0].fval));
                        }
#line 1928 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 415 "parser.y" /* yacc.c:1646  */
    {
                          	(yyval.idClassval) = boolConst((yyvsp[0].bval));
                        }
#line 1936 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 419 "parser.y" /* yacc.c:1646  */
    {
							Trace("str const");
                          	(yyval.idClassval) = strConst((yyvsp[0].sval));
                        }
#line 1945 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 424 "parser.y" /* yacc.c:1646  */
    {
                        	(yyval.idClassval) = charConst((yyvsp[0].cval));
                        }
#line 1953 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 430 "parser.y" /* yacc.c:1646  */
    {
							Trace("expression ID");
                          	IDclass *c = symbolTable.lookup(*(yyvsp[0].sval));
                          	if (c == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	(yyval.idClassval) = c;
							if(!symbolTable.isGlobal() && isConst(*c)){
								if(c->idType == strType){
									G_const_Str(c->idData.sval);
								}else if(c->idType == intType || c->idType == boolType || c->idType == charType){
									G_const_Int(c->getValue());
								}
							}else if(c->idType == intType || c->idType == boolType || c->idType == charType){
								int idx = symbolTable.getIndex(*(yyvsp[0].sval));
								if(idx == -1){
									G_get_global_Var(*(yyvsp[0].sval));
								}else{
									cout<<*(yyvsp[0].sval)<<":idx is========"<<idx<<"\n";
									G_get_local_Var(idx);
								}
								
							}
                        }
#line 1980 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 453 "parser.y" /* yacc.c:1646  */
    {
							if(!symbolTable.isGlobal()){
								if((yyvsp[0].idClassval)->idType == strType){
									G_const_Str((yyvsp[0].idClassval)->idData.sval);
								}else if((yyvsp[0].idClassval)->idType == intType || (yyvsp[0].idClassval)->idType == boolType || (yyvsp[0].idClassval)->idType == charType){
									G_const_Int((yyvsp[0].idClassval)->getValue());
								}
							}
						}
#line 1994 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 463 "parser.y" /* yacc.c:1646  */
    {
                          	IDclass *c = symbolTable.lookup(*(yyvsp[-3].sval));
                          	if (c == NULL) yyerror("undeclared identifier");
                          	else if (c->idType != arrayType) yyerror("not array type");
                          	else if ((yyvsp[-1].idClassval)->idType != intType) yyerror("invalid index");
                          	else if ((yyvsp[-1].idClassval)->idData.ival >= c->arrayValue.size()) yyerror("index out of range");                        
                          	(yyval.idClassval) = new IDclass(c->arrayValue[(yyvsp[-1].idClassval)->idData.ival]);
                        }
#line 2007 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 473 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("-expression");
                          	if ((yyvsp[0].idClassval)->idType != intType && (yyvsp[0].idClassval)->idType != realType) yyerror("operator error"); /* operator check */
                          	IDclass *c = new IDclass(variableFlag,(yyvsp[0].idClassval)->idType,true);
                          	(yyval.idClassval) = c;
							if((yyvsp[0].idClassval)->idType == intType) G_Operator('m');
                        }
#line 2019 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 481 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression * expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("* type not match"); /* type check */ 
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType) yyerror(" * operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,(yyvsp[-2].idClassval)->idType,true); 
                          	//c->setValue (*$1 * *$3);
                          	(yyval.idClassval) = c;
							if((yyvsp[-2].idClassval)->idType == intType) G_Operator('*');
                        }
#line 2033 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 491 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression / expression");
							if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("/type not match"); /* type check */ 
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType) yyerror("/ operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,(yyvsp[-2].idClassval)->idType,true); 
                          	//c->setValue (*$1 / *$3);
                          	(yyval.idClassval) = c;
							if((yyvsp[-2].idClassval)->idType == intType) G_Operator('/');
                        }
#line 2047 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 501 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression + expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("+ type not match"); /* type check */ 
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType) yyerror("+ operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,(yyvsp[-2].idClassval)->idType,true);
							//c->setValue (*$1 + *$3);
                          	(yyval.idClassval) = c;
							if((yyvsp[-2].idClassval)->idType == intType) G_Operator('+');
                        }
#line 2061 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 511 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression - expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("- type not match"); /* type check */ 
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType) yyerror("- operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,(yyvsp[-2].idClassval)->idType,true); 
                          	//c->setValue (*$1 - *$3);
                          	(yyval.idClassval) = c;
							if((yyvsp[-2].idClassval)->idType == intType) G_Operator('-');
                        }
#line 2075 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 521 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression - expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("- type not match"); /* type check */ 
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType) yyerror("- operator error"); /* operator check */ 
							IDclass *c = new IDclass(variableFlag,(yyvsp[-2].idClassval)->idType,true); 
                          	(yyval.idClassval) = c;
							if((yyvsp[-2].idClassval)->idType == intType) G_Operator('%');
                        }
#line 2088 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 530 "parser.y" /* yacc.c:1646  */
    {
	                        Trace("expression && expression");
	                        if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("AND type not match"); /* type check */
	                        if ((yyvsp[-2].idClassval)->idType != boolType) yyerror("AND operator error"); /* operator check */
	                        IDclass *c = new IDclass(variableFlag,boolType,true);
                          	(yyval.idClassval) = c;
							if ((yyvsp[-2].idClassval)->idType == boolType) G_Operator('&');
                        }
#line 2101 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 539 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression || expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("OR type not match"); /* type check */
	                        if ((yyvsp[-2].idClassval)->idType != boolType) yyerror("OR operator error"); /* operator check */
	                        IDclass *c = new IDclass(variableFlag,boolType,true);
                          	(yyval.idClassval) = c;
							if ((yyvsp[-2].idClassval)->idType == boolType) G_Operator('|');
                        }
#line 2114 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 548 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression < expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("< type not match"); /* type check */	
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType && (yyvsp[-2].idClassval)->idType != boolType && (yyvsp[-2].idClassval)->idType != charType) yyerror("< operator error"); /* operator check */  
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 < *$3);
                          	(yyval.idClassval) = c;	
							G_Compare(IFLT);  
                        }
#line 2128 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 558 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression > expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("> type not match"); /* type check */	
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType && (yyvsp[-2].idClassval)->idType != boolType && (yyvsp[-2].idClassval)->idType != charType) yyerror("> operator error"); /* operator check */  
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 > *$3);
                          	(yyval.idClassval) = c;	
							G_Compare(IFGT);  
                        }
#line 2142 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 568 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression <= expression");
							if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("LE type not match"); /* type check */	
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType && (yyvsp[-2].idClassval)->idType != boolType && (yyvsp[-2].idClassval)->idType != charType) yyerror("LE operator error"); /* operator check */  
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 <= *$3);
                          	(yyval.idClassval) = c;	 
							G_Compare(IFLE);                  
                        }
#line 2156 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 578 "parser.y" /* yacc.c:1646  */
    {
                            Trace("expression == expression");
                            if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("EE type not match"); /* type check */	                         	
							IDclass *c = new IDclass(variableFlag,boolType,true); 
                          	(yyval.idClassval) = c;	
							G_Compare(IFEE);  
                        }
#line 2168 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 586 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression >= expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("GE type not match"); /* type check */	
                          	if ((yyvsp[-2].idClassval)->idType != intType && (yyvsp[-2].idClassval)->idType != realType && (yyvsp[-2].idClassval)->idType != boolType && (yyvsp[-2].idClassval)->idType != charType) yyerror("GE operator error"); /* operator check */  
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 >= *$3);
                          	(yyval.idClassval) = c;	
							G_Compare(IFGE);  
                        }
#line 2182 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 596 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression != expression");
                          	if ((yyvsp[-2].idClassval)->idType != (yyvsp[0].idClassval)->idType) yyerror("NE type not match"); /* type check */              
							IDclass *c = new IDclass(variableFlag,boolType,true); 
							//c->setValue (*$1 != *$3);
                          	(yyval.idClassval) = c;	
							G_Compare(IFNE);  
                        }
#line 2195 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 605 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("!expression");
                          	if ((yyvsp[0].idClassval)->idType != boolType) yyerror("!operator error"); /* operator check */                                   
                          	IDclass *c = new IDclass(variableFlag,boolType,true); 
                          	//c->idData.bval = !$2->idData.bval;
                          	(yyval.idClassval) = c;
							G_Operator('!');
                        }
#line 2208 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 614 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("(expression)");
                          	(yyval.idClassval) = (yyvsp[-1].idClassval);
                        }
#line 2217 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2221 "y.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 619 "parser.y" /* yacc.c:1906  */


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
