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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compiler.h"
#include "actions.h"

extern int linenum;
extern FILE *yyin;
extern char *yytext;
extern char buf[256]; 
extern int opt_symbol; 
enum SymbolType should_return = NULL_TYPE;
int last_stmt_is_return = 0;
int in_loop = 0;

#line 83 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    SEMICOLON = 258,
    ID = 259,
    WHILE = 260,
    DO = 261,
    IF = 262,
    ELSE = 263,
    TRUE = 264,
    FALSE = 265,
    FOR = 266,
    CONST = 267,
    READ = 268,
    CONTINUE = 269,
    BREAK = 270,
    RETURN = 271,
    PRINT = 272,
    STRING_LITERAL = 273,
    FLOAT_LITERAL = 274,
    SCIENTIFIC_LITERAL = 275,
    INT_LITERAL = 276,
    OR = 277,
    AND = 278,
    EQ = 279,
    NEQ = 280,
    GEQ = 281,
    LEQ = 282,
    INT = 283,
    BOOL = 284,
    VOID = 285,
    FLOAT = 286,
    DOUBLE = 287,
    STRING = 288
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define ID 259
#define WHILE 260
#define DO 261
#define IF 262
#define ELSE 263
#define TRUE 264
#define FALSE 265
#define FOR 266
#define CONST 267
#define READ 268
#define CONTINUE 269
#define BREAK 270
#define RETURN 271
#define PRINT 272
#define STRING_LITERAL 273
#define FLOAT_LITERAL 274
#define SCIENTIFIC_LITERAL 275
#define INT_LITERAL 276
#define OR 277
#define AND 278
#define EQ 279
#define NEQ 280
#define GEQ 281
#define LEQ 282
#define INT 283
#define BOOL 284
#define VOID 285
#define FLOAT 286
#define DOUBLE 287
#define STRING 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "parser.y" /* yacc.c:355  */

    int count;
    int val;
    float fval;
    double lfval;
    char *strval;
    struct SymbolEntry *sym;
    struct IDPair *id;
    struct Attribute *attr;
    struct AttrList *list;
    struct TypeInfo *type_info;
    struct Assignment *assign;

#line 203 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 220 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   788

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,    41,     2,     2,
      42,    43,    39,    37,    44,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    45,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    58,    61,    62,    63,    64,    65,
      68,    69,    70,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    96,    97,   100,   101,   104,   106,   107,
     108,   109,   112,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   126,   128,   129,   132,   133,   134,   135,   138,
     139,   142,   144,   144,   145,   145,   146,   146,   147,   147,
     150,   151,   152,   153,   154,   157,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   171,   172,   175,   176,   179,
     180,   183,   185,   186,   189,   190,   191,   194,   195,   198,
     199,   202,   204,   206,   208,   211,   214,   215,   216,   217,
     220,   221,   224,   225
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "ID", "WHILE", "DO", "IF",
  "ELSE", "TRUE", "FALSE", "FOR", "CONST", "READ", "CONTINUE", "BREAK",
  "RETURN", "PRINT", "STRING_LITERAL", "FLOAT_LITERAL",
  "SCIENTIFIC_LITERAL", "INT_LITERAL", "OR", "AND", "EQ", "NEQ", "GEQ",
  "LEQ", "INT", "BOOL", "VOID", "FLOAT", "DOUBLE", "STRING", "'!'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "','", "'='",
  "'{'", "'}'", "$accept", "program", "decl_and_def_list", "declaration",
  "expr", "func_invoke", "param_list", "var_decl", "identifier_list",
  "scaler_assignment", "scaler_literal", "const_decl", "const_list",
  "func_decl", "arg_list", "argument", "func_def", "$@1", "$@2", "$@3",
  "$@4", "type", "identifier", "stmt", "expr_stmt", "func_body",
  "compound_stmt", "scope_marker", "block", "block_element", "simple_stmt",
  "if_stmt", "start_loop", "end_loop", "loop_body", "while_stmt",
  "do_stmt", "for_stmt", "return_stmt", "jump_stmt", YY_NULLPTR
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
     285,   286,   287,   288,    33,    60,    62,    43,    45,    42,
      47,    37,    40,    41,    44,    61,   123,   125
};
# endif

#define YYPACT_NINF -135

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-135)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,   137,  -135,  -135,     9,  -135,  -135,  -135,    19,   127,
    -135,  -135,  -135,  -135,   127,    10,    22,    -6,  -135,  -135,
     127,   127,  -135,   -30,     0,  -135,    -5,     1,   165,   127,
    -135,   210,   580,  -135,    35,    58,  -135,    39,    59,    26,
    -135,    60,    70,    45,   -17,  -135,  -135,  -135,  -135,  -135,
    -135,   580,   587,   580,   740,  -135,  -135,  -135,    30,  -135,
      14,  -135,    38,  -135,    48,    82,   137,  -135,  -135,  -135,
      48,    95,   337,   515,  -135,  -135,  -135,    41,   608,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,  -135,  -135,  -135,    58,   100,  -135,  -135,    48,
    -135,  -135,  -135,    48,  -135,   740,    49,  -135,   747,   515,
     246,   246,   246,   246,   246,   246,    41,    41,  -135,  -135,
    -135,  -135,  -135,    66,  -135,    83,    88,    97,   121,   132,
     363,   580,  -135,  -135,   489,  -135,  -135,   133,  -135,  -135,
    -135,   171,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,   580,   580,   306,   131,   580,   389,   138,
    -135,  -135,  -135,   496,   535,   216,  -135,    30,  -135,  -135,
     740,   630,  -135,   101,   652,   415,  -135,  -135,  -135,  -135,
     261,  -135,  -135,   580,   306,   441,   542,  -135,  -135,   674,
     140,  -135,   696,   467,   142,   306,  -135,  -135,  -135,   718,
    -135,  -135,  -135,  -135,  -135,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    70,    71,     0,    72,    73,    74,     0,     0,
       7,    11,    10,    12,     9,     0,     0,     0,     1,     5,
       4,     3,     8,    41,     0,    40,     0,     0,     0,     2,
       6,     0,     0,    37,     0,     0,    52,     0,    68,     0,
      60,     0,    64,     0,    29,    50,    51,    43,    44,    46,
      45,     0,     0,     0,    42,    31,    32,    30,    38,    39,
       0,    54,     0,    58,     0,    66,     0,    75,    61,    56,
       0,    62,     0,    28,    44,    46,    45,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    49,    48,     0,     0,    69,    57,     0,
      59,    65,    55,     0,    34,    36,     0,    26,    13,    14,
      15,    16,    17,    18,    20,    19,    21,    22,    23,    24,
      25,    53,    86,     0,   101,     0,     0,     0,     0,     0,
       0,     0,    91,    88,     0,    94,    95,     0,    96,    84,
      76,     0,    93,    77,    78,    79,    80,    81,    83,    82,
      67,    63,    33,     0,     0,     0,     0,     0,     0,     0,
     113,   112,   111,     0,     0,     0,    85,    41,    87,    92,
      35,     0,   102,     0,     0,     0,    98,   110,    97,    90,
       0,   101,   103,     0,     0,     0,     0,    89,   104,     0,
      99,   101,     0,     0,     0,     0,   109,   101,   101,     0,
     105,   100,   108,   106,   101,   107
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,    -4,     2,   -31,  -135,  -135,   -94,  -135,   -10,
     -29,   -78,  -135,  -135,   118,    84,     8,  -135,  -135,  -135,
    -135,    -1,  -135,  -123,    -7,   -61,  -135,  -135,   -12,  -134,
    -135,  -135,  -135,  -135,  -107,  -135,  -135,  -135,  -135,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,   134,    55,   106,    11,    24,    56,
      57,    12,    27,    13,    39,    40,    22,   103,    70,    99,
      64,    15,    68,   138,   139,    97,   140,   165,   141,   142,
     143,   144,   155,   182,   156,   145,   146,   147,   148,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    54,   135,    33,    36,    25,    61,   169,    14,   101,
      21,    19,    31,    17,    23,    32,    29,    20,   136,    18,
      73,    77,    78,    19,    59,    72,    26,    41,    32,    30,
      41,    19,   172,    92,    93,    94,    28,    30,   150,    58,
      35,   105,   151,    62,    34,    37,   169,   135,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   190,    63,   136,    67,    41,   121,    45,    46,    65,
      66,   135,   201,    69,   188,    32,    47,    48,    49,    50,
      89,    90,    91,    95,   196,    98,   135,   136,    71,    66,
     202,   203,   152,   153,    96,   137,    60,   205,   102,   163,
     164,   159,   136,   122,    44,   123,   124,   125,   154,    45,
      46,   126,     1,   127,   128,   129,   130,   131,    47,    48,
      49,    50,   170,   171,   160,   157,   174,    25,     2,     3,
     158,     5,     6,     7,    51,   161,   173,   167,    52,     1,
     137,   176,    53,   183,   186,   200,   132,   133,   195,    43,
     100,   175,   189,   180,   192,     2,     3,     4,     5,     6,
       7,     0,   199,     0,   137,     2,     3,     0,     5,     6,
       7,     0,     0,     0,   122,    44,   123,   124,   125,   137,
      45,    46,   126,     1,   127,   128,   129,   130,   131,    47,
      48,    49,    50,     2,     3,     0,     5,     6,     7,     2,
       3,     0,     5,     6,     7,    51,     0,     0,    38,    52,
       0,     0,     0,    53,     0,     0,     0,   132,   168,   122,
      44,   123,   124,   125,     0,    45,    46,   126,     1,   127,
     128,   129,   130,   131,    47,    48,    49,    50,     2,     3,
       0,     5,     6,     7,     2,     3,     0,     5,     6,     7,
      51,     0,     0,    42,    52,     0,     0,     0,    53,     0,
       0,     0,   132,   179,   122,    44,   123,   124,   125,     0,
      45,    46,   126,     1,   127,   128,   129,   130,   131,    47,
      48,    49,    50,    87,    88,    89,    90,    91,     0,     2,
       3,     0,     5,     6,     7,    51,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,   132,   187,   122,
      44,   123,   124,   125,     0,    45,    46,   126,     0,   127,
     128,   129,   130,   131,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    44,     0,     0,    52,     0,    45,    46,    53,     0,
       0,     0,   132,     0,     0,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,   162,    44,     0,     0,
       0,    51,    45,    46,     0,    52,     0,     0,     0,    53,
     104,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,   122,    44,     0,     0,     0,    51,    45,    46,
       0,    52,     0,     0,     0,    53,     0,    47,    48,    49,
      50,     0,     0,     0,     0,     0,     0,     0,   185,    44,
       0,     0,     0,    51,    45,    46,     0,    52,     0,     0,
       0,    53,     0,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    44,     0,     0,     0,    51,
      45,    46,     0,    52,     0,     0,     0,    53,     0,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,     0,    51,    45,    46,     0,    52,
       0,     0,     0,    53,   191,    47,    48,    49,    50,     0,
       0,     0,   166,     0,     0,     0,     0,     0,     0,   177,
       0,    51,     0,     0,     0,    52,     0,     0,     0,    53,
     198,    79,    80,    81,    82,    83,    84,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    85,    86,    87,    88,    89,    90,    91,   178,    81,
      82,    83,    84,     0,     0,   193,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    79,    80,    81,
      82,    83,    84,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    85,    86,    87,
      88,    89,    90,    91,    44,     0,     0,     0,     0,    45,
      46,    44,     0,     0,     0,     0,    45,    46,    47,    48,
      49,    50,     0,     0,     0,    47,    74,    75,    76,     0,
       0,     0,     0,     0,    51,     0,     0,     0,    52,     0,
       0,    51,    53,     0,     0,    52,     0,     0,     0,    53,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
       0,   107,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    85,    86,    87,    88,    89,
      90,    91,     0,   181,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,     0,   184,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,     0,   194,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,     0,
       0,    85,    86,    87,    88,    89,    90,    91,     0,   197,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
       0,   204,    79,    80,    81,    82,    83,    84,     0,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    85,    86,    87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
       1,    32,    96,     3,     3,    15,    35,   141,     0,    70,
      14,     9,    42,     4,     4,    45,    20,     9,    96,     0,
      51,    52,    53,    21,    34,    42,     4,    28,    45,    21,
      31,    29,   155,    19,    20,    21,    42,    29,    99,     4,
      45,    72,   103,     4,    44,    44,   180,   141,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,   184,     3,   141,     4,    66,    95,     9,    10,    43,
      44,   165,   195,     3,   181,    45,    18,    19,    20,    21,
      39,    40,    41,    45,   191,     3,   180,   165,    43,    44,
     197,   198,    43,    44,    46,    96,    38,   204,     3,   130,
     131,     4,   180,     3,     4,     5,     6,     7,    42,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   153,   154,     3,    42,   157,   137,    28,    29,
      42,    31,    32,    33,    34,     3,     5,     4,    38,    12,
     141,     3,    42,    42,   175,     3,    46,    47,     8,    31,
      66,   158,   183,   165,   185,    28,    29,    30,    31,    32,
      33,    -1,   193,    -1,   165,    28,    29,    -1,    31,    32,
      33,    -1,    -1,    -1,     3,     4,     5,     6,     7,   180,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    28,    29,    -1,    31,    32,    33,    28,
      29,    -1,    31,    32,    33,    34,    -1,    -1,    43,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    28,    29,
      -1,    31,    32,    33,    28,    29,    -1,    31,    32,    33,
      34,    -1,    -1,    43,    38,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    37,    38,    39,    40,    41,    -1,    28,
      29,    -1,    31,    32,    33,    34,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,     4,    -1,    -1,    38,    -1,     9,    10,    42,    -1,
      -1,    -1,    46,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    34,     9,    10,    -1,    38,    -1,    -1,    -1,    42,
      43,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    34,     9,    10,
      -1,    38,    -1,    -1,    -1,    42,    -1,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    34,     9,    10,    -1,    38,    -1,    -1,
      -1,    42,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    34,
       9,    10,    -1,    38,    -1,    -1,    -1,    42,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    34,     9,    10,    -1,    38,
      -1,    -1,    -1,    42,    43,    18,    19,    20,    21,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      43,    22,    23,    24,    25,    26,    27,    -1,    22,    23,
      24,    25,    26,    27,    35,    36,    37,    38,    39,    40,
      41,    35,    36,    37,    38,    39,    40,    41,     3,    24,
      25,    26,    27,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    22,    23,    24,
      25,    26,    27,    -1,    22,    23,    24,    25,    26,    27,
      35,    36,    37,    38,    39,    40,    41,    35,    36,    37,
      38,    39,    40,    41,     4,    -1,    -1,    -1,    -1,     9,
      10,     4,    -1,    -1,    -1,    -1,     9,    10,    18,    19,
      20,    21,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,
      -1,    34,    42,    -1,    -1,    38,    -1,    -1,    -1,    42,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    22,    23,    24,    25,    26,    27,    -1,    -1,
      23,    24,    25,    26,    27,    35,    36,    37,    38,    39,
      40,    41,    35,    36,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    28,    29,    30,    31,    32,    33,    49,    50,
      51,    55,    59,    61,    64,    69,    69,     4,     0,    51,
      64,    50,    64,     4,    56,    57,     4,    60,    42,    50,
      64,    42,    45,     3,    44,    45,     3,    44,    43,    62,
      63,    69,    43,    62,     4,     9,    10,    18,    19,    20,
      21,    34,    38,    42,    52,    53,    57,    58,     4,    57,
      38,    58,     4,     3,    68,    43,    44,     4,    70,     3,
      66,    43,    42,    52,    19,    20,    21,    52,    52,    22,
      23,    24,    25,    26,    27,    35,    36,    37,    38,    39,
      40,    41,    19,    20,    21,    45,    46,    73,     3,    67,
      63,    73,     3,    65,    43,    52,    54,    43,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    58,     3,     5,     6,     7,    11,    13,    14,    15,
      16,    17,    46,    47,    52,    55,    59,    69,    71,    72,
      74,    76,    77,    78,    79,    83,    84,    85,    86,    87,
      73,    73,    43,    44,    42,    80,    82,    42,    42,     4,
       3,     3,     3,    52,    52,    75,     3,     4,    47,    77,
      52,    52,    71,     5,    52,    72,     3,     3,     3,    47,
      76,    43,    81,    42,    43,     3,    52,    47,    82,    52,
      71,    43,    52,     3,    43,     8,    82,    43,    43,    52,
       3,    71,    82,    82,    43,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    49,    50,    50,    50,    50,    50,
      51,    51,    51,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    53,    53,    54,    54,    55,    56,    56,
      56,    56,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    60,    60,    61,    61,    61,    61,    62,
      62,    63,    65,    64,    66,    64,    67,    64,    68,    64,
      69,    69,    69,    69,    69,    70,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    76,    76,    77,    77,    77,    78,    78,    79,
      79,    80,    81,    82,    83,    84,    85,    85,    85,    85,
      86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     2,     1,     1,     0,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     4,     3,     3,     1,     3,     3,     3,
       1,     1,     3,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     4,     5,     3,     6,     5,     6,     5,     3,
       1,     2,     0,     7,     0,     6,     0,     7,     0,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     4,
       3,     0,     2,     1,     1,     1,     1,     3,     3,     5,
       7,     0,     0,     3,     5,     7,     7,     8,     7,     6,
       3,     2,     2,     2
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
#line 56 "parser.y" /* yacc.c:1646  */
    { print_table(); print_error(); }
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 57 "parser.y" /* yacc.c:1646  */
    { print_table(); print_error(); }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 58 "parser.y" /* yacc.c:1646  */
    { print_table(); print_error(); }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = logic_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 74 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = logic_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 75 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 77 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = arith_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = arith_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = arith_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 84 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = arith_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = modulo_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 86 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = (yyvsp[-1].type_info); }
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = negate_op((yyvsp[0].type_info)); }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = not_op((yyvsp[0].type_info)); }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = identifier_expr((yyvsp[0].id)); }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = get_scaler_literal_type((yyvsp[0].attr)); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = (yyvsp[0].type_info); }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = assignment_expr((yyvsp[0].assign)); }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = func_invoke((yyvsp[-3].id), (yyvsp[-1].list)); }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = func_invoke((yyvsp[-2].id), NULL); }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_param((yyvsp[-2].list), (yyvsp[0].type_info)); }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_param(NULL, (yyvsp[0].type_info)); }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 106 "parser.y" /* yacc.c:1646  */
    { scaler_var_decl((yyvsp[-3].val), (yyvsp[0].id)); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 107 "parser.y" /* yacc.c:1646  */
    { scaler_var_def((yyvsp[-3].val), (yyvsp[0].assign)); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 108 "parser.y" /* yacc.c:1646  */
    { scaler_var_def((yyvsp[-1].val), (yyvsp[0].assign)); }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 109 "parser.y" /* yacc.c:1646  */
    { scaler_var_decl((yyvsp[-1].val), (yyvsp[0].id)); }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 112 "parser.y" /* yacc.c:1646  */
    { (yyval.assign) = scaler_assignment((yyvsp[-2].id), (yyvsp[0].type_info)); }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 115 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_string((yyvsp[0].strval)); }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 116 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit((yyvsp[0].lfval)); }
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 117 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_int((yyvsp[0].val)); }
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 118 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit((yyvsp[0].lfval)); }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 119 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit(-(yyvsp[0].lfval)); }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 120 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_int(-(yyvsp[0].val)); }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 121 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit(-(yyvsp[0].lfval)); }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 122 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_bool(1); }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 123 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_bool(0); }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 128 "parser.y" /* yacc.c:1646  */
    { const_decl((yyvsp[-5].val), (yyvsp[-2].id), (yyvsp[0].attr)); }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 129 "parser.y" /* yacc.c:1646  */
    { const_decl((yyvsp[-3].val), (yyvsp[-2].id), (yyvsp[0].attr)); }
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 132 "parser.y" /* yacc.c:1646  */
    { func_decl((yyvsp[-5].val), (yyvsp[-4].id), (yyvsp[-2].list)); }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 133 "parser.y" /* yacc.c:1646  */
    { func_decl((yyvsp[-4].val), (yyvsp[-3].id), NULL); }
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 134 "parser.y" /* yacc.c:1646  */
    { func_decl(S_VOID, (yyvsp[-4].id), (yyvsp[-2].list)); }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "parser.y" /* yacc.c:1646  */
    { func_decl(S_VOID, (yyvsp[-3].id), NULL); }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 138 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_arg((yyvsp[-2].list), (yyvsp[0].id)); }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_arg(NULL, (yyvsp[0].id)); }
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "parser.y" /* yacc.c:1646  */
    { (yyval.id) = make_arg((yyvsp[-1].val), (yyvsp[0].id)); }
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "parser.y" /* yacc.c:1646  */
    { func_def((yyvsp[-4].val), (yyvsp[-3].id), (yyvsp[-1].list)); }
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "parser.y" /* yacc.c:1646  */
    { pop_scope(); check_return((yyvsp[-5].id)); }
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "parser.y" /* yacc.c:1646  */
    { func_def((yyvsp[-3].val), (yyvsp[-2].id), NULL); }
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 145 "parser.y" /* yacc.c:1646  */
    { pop_scope(); check_return((yyvsp[-4].id)); }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 146 "parser.y" /* yacc.c:1646  */
    { func_def(S_VOID, (yyvsp[-3].id), (yyvsp[-1].list)); }
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 146 "parser.y" /* yacc.c:1646  */
    { pop_scope(); should_return = NULL_TYPE; }
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 147 "parser.y" /* yacc.c:1646  */
    { func_def(S_VOID, (yyvsp[-2].id), NULL); }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 147 "parser.y" /* yacc.c:1646  */
    { pop_scope(); should_return = NULL_TYPE; }
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 150 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_INT; }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 151 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_BOOL; }
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 152 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_FLOAT; }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 153 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_DOUBLE; }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 154 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_STRING; }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 157 "parser.y" /* yacc.c:1646  */
    { (yyval.id) = (yyvsp[0].id); }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 160 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 161 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 162 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 163 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 164 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 165 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 166 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 167 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 1; }
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 168 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 179 "parser.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 180 "parser.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 183 "parser.y" /* yacc.c:1646  */
    { push_scope(); }
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 189 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 190 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 195 "parser.y" /* yacc.c:1646  */
    { identifier_expr((yyvsp[-1].id)); }
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 198 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 199 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-4].type_info)); }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 202 "parser.y" /* yacc.c:1646  */
    { in_loop++; }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 204 "parser.y" /* yacc.c:1646  */
    { in_loop--; }
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 208 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 211 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 214 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-3].type_info)); }
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 215 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-4].type_info)); }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 220 "parser.y" /* yacc.c:1646  */
    { return_stmt((yyvsp[-1].type_info)); }
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 221 "parser.y" /* yacc.c:1646  */
    { return_stmt(NULL); }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 224 "parser.y" /* yacc.c:1646  */
    { check_jump(); }
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 225 "parser.y" /* yacc.c:1646  */
    { check_jump(); }
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2103 "y.tab.c" /* yacc.c:1646  */
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
#line 228 "parser.y" /* yacc.c:1906  */


int yyerror( char *msg )
{
    fprintf( stderr, "\n|--------------------------------------------------------------------------\n" );
    fprintf( stderr, "| Error found in Line #%d: %s\n", linenum, buf );
    fprintf( stderr, "|\n" );
    fprintf( stderr, "| Unmatched token: %s\n", yytext );
    fprintf( stderr, "|--------------------------------------------------------------------------\n" );
    exit(-1);
}

int main( int argc, char **argv )
{
    if( argc != 2 ) {
        fprintf(  stdout,  "Usage:  ./parser  [filename]\n"  );
        exit(0);
    }

    FILE *fp = fopen( argv[1], "r" );

    if( fp == NULL )  {
        fprintf( stdout, "Open  file  error\n" );
        exit(-1);
    }
    init_symbol_table();

    yyin = fp;
    yyparse();
    
    if (has_sem_error) {
        fprintf( stdout, "\n" );
        fprintf( stdout, "|---------------------------------------------|\n" );
        fprintf( stdout, "|  There is no syntactic error!               |\n" );
        fprintf( stdout, "|---------------------------------------------|\n" );
        exit(-1);
    }

    fprintf( stdout, "\n" );
    fprintf( stdout, "|---------------------------------------------|\n" );
    fprintf( stdout, "|  There is no syntactic and semantic error!  |\n" );
    fprintf( stdout, "|---------------------------------------------|\n" );
    exit(0);

}

