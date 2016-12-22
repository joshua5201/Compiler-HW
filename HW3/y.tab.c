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
#include "parser_utils.h"
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
    struct ArrayRef *aref;
    struct Assignment *assign;

#line 204 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   900

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

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
      42,    43,    39,    37,    47,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    46,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    60,    63,    64,    65,    66,    67,
      70,    71,    72,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    99,   100,   103,   106,   107,
     110,   111,   112,   113,   116,   118,   119,   120,   121,   122,
     123,   124,   125,   128,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   142,   145,   146,   149,   150,   153,   155,
     156,   159,   160,   161,   162,   165,   166,   169,   171,   171,
     172,   172,   173,   173,   174,   174,   177,   178,   179,   180,
     181,   184,   185,   188,   189,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   203,   204,   207,   208,   211,   212,
     215,   217,   218,   221,   222,   223,   226,   227,   228,   231,
     232,   235,   237,   239,   241,   244,   247,   248,   249,   250,
     253,   254,   257,   258
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
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'['", "']'",
  "'='", "','", "'{'", "'}'", "$accept", "program", "decl_and_def_list",
  "declaration", "expr", "array_ref", "array_ref_assignment",
  "func_invoke", "param_list", "var_decl", "identifier_list",
  "scaler_assignment", "scaler_literal", "array_assignment",
  "array_literal", "element_list", "const_decl", "const_list", "func_decl",
  "arg_list", "argument", "func_def", "$@1", "$@2", "$@3", "$@4", "type",
  "identifier", "array_identifier", "stmt", "expr_stmt", "func_body",
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
      47,    37,    40,    41,    91,    93,    61,    44,   123,   125
};
# endif

#define YYPACT_NINF -183

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-183)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     177,    13,  -183,  -183,     6,  -183,  -183,  -183,    30,   177,
    -183,  -183,  -183,  -183,   177,    83,    91,    -6,  -183,  -183,
     177,   177,  -183,   -29,     4,  -183,  -183,    44,    52,    11,
     202,   177,  -183,   220,    82,   602,  -183,   119,   111,    76,
     390,  -183,   132,   143,   -16,  -183,   147,   151,    54,   112,
     -24,  -183,  -183,  -183,  -183,  -183,  -183,   602,   609,   602,
     852,    64,  -183,  -183,  -183,  -183,    75,  -183,  -183,    44,
     114,    73,  -183,    28,  -183,   115,  -183,   116,   157,    13,
     123,  -183,   129,  -183,   116,   160,  -183,   161,   602,   537,
    -183,  -183,  -183,    40,   720,   602,   602,   602,   602,   602,
     602,   602,   602,   602,   602,   602,   602,   602,   602,   602,
    -183,  -183,   852,   103,  -183,  -183,  -183,   390,   208,  -183,
    -183,   116,  -183,  -183,  -183,   116,    74,  -183,   852,    66,
     129,   672,  -183,   859,   537,   153,   153,   153,   153,   153,
     153,    40,    40,  -183,  -183,  -183,   696,   852,   602,  -183,
    -183,  -183,   126,  -183,   133,   134,   170,   175,   180,   385,
     602,  -183,  -183,   511,  -183,  -183,   181,  -183,  -183,  -183,
     255,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,   644,  -183,   651,  -183,  -183,   852,   602,   124,   179,
     602,   411,    16,    32,  -183,  -183,  -183,   518,   557,   302,
    -183,    75,  -183,  -183,   112,   852,   129,   742,  -183,   145,
     764,   437,  -183,  -183,  -183,  -183,  -183,   349,  -183,  -183,
     602,   124,   463,   564,  -183,  -183,   786,   189,  -183,   808,
     489,   197,   124,  -183,  -183,  -183,   830,  -183,  -183,  -183,
    -183,  -183,  -183
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    86,    87,     0,    88,    89,    90,     0,     0,
       7,    11,    10,    12,     9,     0,     0,     0,     1,     5,
       4,     3,     8,    52,     0,    49,    50,    51,     0,     0,
       0,     2,     6,     0,     0,     0,    44,     0,     0,     0,
       0,    68,     0,    84,     0,    76,     0,    80,     0,     0,
      29,    61,    62,    54,    55,    57,    56,     0,     0,     0,
      53,    32,    33,    31,    34,    30,    45,    47,    48,    46,
       0,     0,    63,     0,    70,     0,    74,     0,    82,     0,
      91,    77,    92,    72,     0,    78,    93,     0,     0,    28,
      55,    57,    56,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    65,    67,     0,    58,    60,    59,     0,     0,    85,
      73,     0,    75,    81,    71,     0,    29,    39,    42,     0,
      43,     0,    26,    13,    14,    15,    16,    17,    18,    20,
      19,    21,    22,    23,    24,    25,     0,    37,     0,    64,
      69,   105,     0,   121,     0,     0,     0,     0,     0,     0,
       0,   110,   107,     0,   113,   114,     0,   115,   103,    95,
       0,   112,    96,    97,    98,    99,   100,   102,   101,    83,
      79,     0,    38,     0,    36,    35,    66,     0,     0,     0,
       0,     0,     0,     0,   133,   132,   131,     0,     0,     0,
     104,    52,   106,   111,    56,    40,    41,     0,   122,     0,
       0,     0,   117,   118,   130,   116,   109,     0,   121,   123,
       0,     0,     0,     0,   108,   124,     0,   119,   121,     0,
       0,     0,     0,   129,   121,   121,     0,   125,   120,   128,
     126,   121,   127
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,    20,     7,   -34,    45,  -183,  -183,  -183,  -115,
    -183,   -11,   -32,   165,  -183,  -183,  -113,  -183,  -183,   199,
     159,    12,  -183,  -183,  -183,  -183,    -1,  -183,   -35,  -182,
      53,   -25,  -183,  -183,    48,  -161,  -183,  -183,  -183,  -183,
    -129,  -183,  -183,  -183,  -183,  -183
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,   163,    61,    62,    63,   129,    11,
      24,    64,    65,    26,    72,   113,    12,    29,    13,    44,
      45,    22,   125,    84,   121,    77,    15,    81,    27,   167,
     168,   119,   169,   199,   170,   171,   172,   173,   188,   219,
     189,   174,   175,   176,   177,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    60,    69,   164,    25,   165,   208,    36,    74,   203,
      17,    82,    14,    33,    41,    34,    19,    35,    87,   212,
      88,    20,    35,    89,    93,    94,    67,    78,    19,    46,
      18,    79,    46,    32,    21,   213,    30,   112,    19,   227,
      31,     2,     3,    32,     5,     6,     7,   114,   115,   116,
     238,    37,   130,   128,   131,   164,   203,   165,    42,   123,
      88,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   108,    50,    46,   105,
     106,   107,    51,    52,   164,   150,   165,    23,    38,   225,
      39,    53,    54,    55,    56,    28,   179,    85,    40,   233,
     180,    79,   164,    49,   165,   239,   240,    57,   108,   182,
     109,    58,   242,   183,   186,    59,    87,   166,   181,    34,
      35,    35,   111,    66,    71,   197,   198,   151,    50,   152,
     153,   154,    70,    51,    52,   155,    75,   156,   157,   158,
     159,   160,    53,    54,    55,    56,    76,   131,   206,   205,
     148,    80,   149,   207,    83,    25,   210,    86,    57,   110,
     120,   117,    58,   124,   118,   126,    59,    34,   187,   166,
      51,    52,   161,    38,   192,   190,   191,   223,   194,    53,
      54,    55,    56,   195,   209,   201,   226,   220,   229,     1,
     103,   104,   105,   106,   107,    57,   236,   232,   166,    58,
     237,   193,    68,    59,   127,     2,     3,     4,     5,     6,
       7,   151,    50,   152,   153,   154,   166,    51,    52,   155,
       1,   156,   157,   158,   159,   160,    53,    54,    55,    56,
       2,     3,    48,     5,     6,     7,     2,     3,   122,     5,
       6,     7,    57,     0,   211,    43,    58,   217,     2,     3,
      59,     5,     6,     7,     0,     0,   161,   162,   151,    50,
     152,   153,   154,    47,    51,    52,   155,     1,   156,   157,
     158,   159,   160,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     2,     3,     0,     5,     6,     7,    57,
       0,     0,     0,    58,     0,     0,     0,    59,     0,     0,
       0,     0,     0,   161,   202,   151,    50,   152,   153,   154,
       0,    51,    52,   155,     1,   156,   157,   158,   159,   160,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       2,     3,     0,     5,     6,     7,    57,     0,     0,     0,
      58,     0,     0,     0,    59,     0,     0,     0,     0,     0,
     161,   216,   151,    50,   152,   153,   154,     0,    51,    52,
     155,     1,   156,   157,   158,   159,   160,    53,    54,    55,
      56,     0,     0,     0,     0,     0,     0,     2,     3,     0,
       5,     6,     7,    57,     0,     0,     0,    58,   196,    50,
       0,    59,     0,     0,    51,    52,     0,   161,   224,    51,
      52,     0,     0,    53,    54,    55,    56,     0,    53,    54,
      55,    56,     0,     0,   151,    50,     0,     0,     0,    57,
      51,    52,     0,    58,     0,     0,     0,    59,    73,    53,
      54,    55,    56,     0,     0,     0,     0,     0,     0,     0,
     222,    50,     0,     0,     0,    57,    51,    52,     0,    58,
       0,     0,     0,    59,     0,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    57,    51,    52,     0,    58,     0,     0,     0,    59,
       0,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    57,    51,    52,
       0,    58,     0,     0,     0,    59,   228,    53,    54,    55,
      56,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,   214,     0,    57,     0,     0,     0,    58,     0,     0,
       0,    59,   235,    95,    96,    97,    98,    99,   100,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   101,   102,   103,   104,   105,   106,   107,
     215,    97,    98,    99,   100,     0,     0,   230,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   107,    95,
      96,    97,    98,    99,   100,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   101,
     102,   103,   104,   105,   106,   107,    50,     0,     0,     0,
       0,    51,    52,    50,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    56,     0,     0,     0,    53,    90,    91,
      92,     0,     0,     0,     0,     0,    57,     0,     0,     0,
      58,     0,     0,    57,    59,     0,     0,    58,    50,     0,
       0,    59,     0,    51,    52,   126,     0,     0,     0,     0,
      51,    52,    53,    54,    55,   204,     0,     0,     0,    53,
      54,    55,    56,     0,     0,     0,     0,     0,    57,     0,
       0,     0,    58,     0,     0,    57,    59,     0,     0,    58,
       0,     0,     0,    59,    95,    96,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,     0,     0,     0,   184,    95,    96,
      97,    98,    99,   100,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,   107,     0,     0,
       0,   185,    95,    96,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,   107,     0,   132,    95,    96,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,     0,   218,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,     0,   221,    95,    96,
      97,    98,    99,   100,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,   107,     0,   231,
      95,    96,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   107,
       0,   234,    95,    96,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,   107,     0,   241,    95,    96,    97,    98,    99,   100,
       0,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   101,   102,   103,   104,   105,   106,
     107
};

static const yytype_int16 yycheck[] =
{
       1,    35,    37,   118,    15,   118,   188,     3,    40,   170,
       4,    46,     0,    42,     3,    44,     9,    46,    42,     3,
      44,     9,    46,    57,    58,    59,    37,    43,    21,    30,
       0,    47,    33,    21,    14,     3,    42,    71,    31,   221,
      20,    28,    29,    31,    31,    32,    33,    19,    20,    21,
     232,    47,    87,    87,    88,   170,   217,   170,    47,    84,
      44,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    44,     4,    79,    39,
      40,    41,     9,    10,   199,   117,   199,     4,    44,   218,
      46,    18,    19,    20,    21,     4,   121,    43,    46,   228,
     125,    47,   217,    21,   217,   234,   235,    34,    44,    43,
      46,    38,   241,    47,   148,    42,    42,   118,    44,    44,
      46,    46,    49,     4,    48,   159,   160,     3,     4,     5,
       6,     7,    21,     9,    10,    11,     4,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     3,   181,   183,   183,
      47,     4,    49,   187,     3,   166,   190,    45,    34,    45,
       3,    46,    38,     3,    48,     4,    42,    44,    42,   170,
       9,    10,    48,    44,     4,    42,    42,   211,     3,    18,
      19,    20,    21,     3,     5,     4,   220,    42,   222,    12,
      37,    38,    39,    40,    41,    34,   230,     8,   199,    38,
       3,   156,    37,    42,    43,    28,    29,    30,    31,    32,
      33,     3,     4,     5,     6,     7,   217,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      28,    29,    33,    31,    32,    33,    28,    29,    79,    31,
      32,    33,    34,    -1,   191,    43,    38,   199,    28,    29,
      42,    31,    32,    33,    -1,    -1,    48,    49,     3,     4,
       5,     6,     7,    43,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    34,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    38,     3,     4,
      -1,    42,    -1,    -1,     9,    10,    -1,    48,    49,     9,
      10,    -1,    -1,    18,    19,    20,    21,    -1,    18,    19,
      20,    21,    -1,    -1,     3,     4,    -1,    -1,    -1,    34,
       9,    10,    -1,    38,    -1,    -1,    -1,    42,    38,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    34,     9,    10,    -1,    38,
      -1,    -1,    -1,    42,    -1,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    34,     9,    10,    -1,    38,    -1,    -1,    -1,    42,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    34,     9,    10,
      -1,    38,    -1,    -1,    -1,    42,    43,    18,    19,    20,
      21,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    22,    23,    24,    25,    26,    27,    -1,
      22,    23,    24,    25,    26,    27,    35,    36,    37,    38,
      39,    40,    41,    35,    36,    37,    38,    39,    40,    41,
       3,    24,    25,    26,    27,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    22,
      23,    24,    25,    26,    27,    -1,    22,    23,    24,    25,
      26,    27,    35,    36,    37,    38,    39,    40,    41,    35,
      36,    37,    38,    39,    40,    41,     4,    -1,    -1,    -1,
      -1,     9,    10,     4,    -1,    -1,    -1,    -1,     9,    10,
      18,    19,    20,    21,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    34,    42,    -1,    -1,    38,     4,    -1,
      -1,    42,    -1,     9,    10,     4,    -1,    -1,    -1,    -1,
       9,    10,    18,    19,    20,    21,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    -1,    34,    42,    -1,    -1,    38,
      -1,    -1,    -1,    42,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    22,    23,    24,    25,    26,    27,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    22,    23,    24,    25,    26,    27,
      -1,    -1,    23,    24,    25,    26,    27,    35,    36,    37,
      38,    39,    40,    41,    35,    36,    37,    38,    39,    40,
      41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    28,    29,    30,    31,    32,    33,    51,    52,
      53,    59,    66,    68,    71,    76,    76,     4,     0,    53,
      71,    52,    71,     4,    60,    61,    63,    78,     4,    67,
      42,    52,    71,    42,    44,    46,     3,    47,    44,    46,
      46,     3,    47,    43,    69,    70,    76,    43,    69,    21,
       4,     9,    10,    18,    19,    20,    21,    34,    38,    42,
      54,    55,    56,    57,    61,    62,     4,    61,    63,    78,
      21,    48,    64,    38,    62,     4,     3,    75,    43,    47,
       4,    77,    78,     3,    73,    43,    45,    42,    44,    54,
      19,    20,    21,    54,    54,    22,    23,    24,    25,    26,
      27,    35,    36,    37,    38,    39,    40,    41,    44,    46,
      45,    49,    54,    65,    19,    20,    21,    46,    48,    81,
       3,    74,    70,    81,     3,    72,     4,    43,    54,    58,
      78,    54,    43,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    47,    49,
      62,     3,     5,     6,     7,    11,    13,    14,    15,    16,
      17,    48,    49,    54,    59,    66,    76,    79,    80,    82,
      84,    85,    86,    87,    91,    92,    93,    94,    95,    81,
      81,    44,    43,    47,    45,    45,    54,    42,    88,    90,
      42,    42,     4,    55,     3,     3,     3,    54,    54,    83,
       3,     4,    49,    85,    21,    54,    78,    54,    79,     5,
      54,    80,     3,     3,     3,     3,    49,    84,    43,    89,
      42,    43,     3,    54,    49,    90,    54,    79,    43,    54,
       3,    43,     8,    90,    43,    43,    54,     3,    79,    90,
      90,    43,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    51,    52,    52,    52,    52,    52,
      53,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    58,    58,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    68,    68,    68,    69,    69,    70,    72,    71,
      73,    71,    74,    71,    75,    71,    76,    76,    76,    76,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    84,    84,    85,    85,    85,    86,    86,    86,    87,
      87,    88,    89,    90,    91,    92,    93,    93,    93,    93,
      94,    94,    95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     2,     1,     1,     0,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     4,     3,
       3,     3,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     3,     3,     2,     3,     1,     4,     5,
       3,     6,     5,     6,     5,     3,     1,     2,     0,     7,
       0,     6,     0,     7,     0,     6,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     2,     4,     3,
       0,     2,     1,     1,     1,     1,     3,     3,     3,     5,
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
#line 58 "parser.y" /* yacc.c:1646  */
    { print_table(); print_error(); }
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "parser.y" /* yacc.c:1646  */
    { print_table(); print_error(); }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "parser.y" /* yacc.c:1646  */
    { print_table(); print_error(); }
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 75 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = logic_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = logic_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 79 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 80 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 82 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = relation_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 83 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = arith_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = arith_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = arith_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = arith_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = modulo_op((yyvsp[-2].type_info), (yyvsp[0].type_info)); }
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = (yyvsp[-1].type_info); }
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = negate_op((yyvsp[0].type_info)); }
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = not_op((yyvsp[0].type_info)); }
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = identifier_expr((yyvsp[0].id)); }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = get_scaler_literal_type((yyvsp[0].attr)); }
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = (yyvsp[0].type_info); }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = get_array_elem_type((yyvsp[0].aref)); }
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = (yyvsp[0].type_info); }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = assignment_expr((yyvsp[0].assign)); }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyval.aref) = array_ref((yyvsp[-3].aref), (yyvsp[-1].type_info)); }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval.aref) = array_ref(make_aref((yyvsp[-3].id)), (yyvsp[-1].type_info)); }
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 103 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = array_ref_assignment((yyvsp[-2].aref), (yyvsp[0].type_info)); }
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 106 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = func_invoke((yyvsp[-3].id), (yyvsp[-1].list)); }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 107 "parser.y" /* yacc.c:1646  */
    { (yyval.type_info) = func_invoke((yyvsp[-2].id), NULL); }
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 110 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_param((yyvsp[-2].list), (yyvsp[0].type_info)); }
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 111 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_param((yyvsp[-2].list), &((yyvsp[0].id)->type_info)); }
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 112 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_param(NULL, (yyvsp[0].type_info)); }
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 113 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_param(NULL, &((yyvsp[0].id)->type_info)); }
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 118 "parser.y" /* yacc.c:1646  */
    { scaler_var_decl((yyvsp[-3].val), (yyvsp[0].id)); }
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "parser.y" /* yacc.c:1646  */
    { array_var_decl((yyvsp[-3].val), (yyvsp[0].id)); }
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 120 "parser.y" /* yacc.c:1646  */
    { scaler_var_def((yyvsp[-3].val), (yyvsp[0].assign)); }
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 121 "parser.y" /* yacc.c:1646  */
    { array_var_def((yyvsp[-3].val), (yyvsp[0].assign)); }
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "parser.y" /* yacc.c:1646  */
    { scaler_var_def((yyvsp[-1].val), (yyvsp[0].assign)); }
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 123 "parser.y" /* yacc.c:1646  */
    { array_var_def((yyvsp[-1].val), (yyvsp[0].assign)); }
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 124 "parser.y" /* yacc.c:1646  */
    { array_var_decl((yyvsp[-1].val), (yyvsp[0].id)); }
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 125 "parser.y" /* yacc.c:1646  */
    { scaler_var_decl((yyvsp[-1].val), (yyvsp[0].id)); }
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 128 "parser.y" /* yacc.c:1646  */
    { (yyval.assign) = scaler_assignment((yyvsp[-2].id), (yyvsp[0].type_info)); }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 131 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_string((yyvsp[0].strval)); }
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 132 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit((yyvsp[0].lfval)); }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_int((yyvsp[0].val)); }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit((yyvsp[0].lfval)); }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit(-(yyvsp[0].lfval)); }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 136 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_int(-(yyvsp[0].val)); }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 137 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit(-(yyvsp[0].lfval)); }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 138 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_bool(1); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_bool(0); }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 142 "parser.y" /* yacc.c:1646  */
    { (yyval.assign) = array_assignment((yyvsp[-2].id), (yyvsp[0].list)); }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_elem((yyvsp[-2].list), (yyvsp[0].type_info)); }
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_elem(NULL, (yyvsp[0].type_info)); }
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 155 "parser.y" /* yacc.c:1646  */
    { const_decl((yyvsp[-5].val), (yyvsp[-2].id), (yyvsp[0].attr)); }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 156 "parser.y" /* yacc.c:1646  */
    { const_decl((yyvsp[-3].val), (yyvsp[-2].id), (yyvsp[0].attr)); }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 159 "parser.y" /* yacc.c:1646  */
    { func_decl((yyvsp[-5].val), (yyvsp[-4].id), (yyvsp[-2].list)); }
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 160 "parser.y" /* yacc.c:1646  */
    { func_decl((yyvsp[-4].val), (yyvsp[-3].id), NULL); }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 161 "parser.y" /* yacc.c:1646  */
    { func_decl(S_VOID, (yyvsp[-4].id), (yyvsp[-2].list)); }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 162 "parser.y" /* yacc.c:1646  */
    { func_decl(S_VOID, (yyvsp[-3].id), NULL); }
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_arg((yyvsp[-2].list), (yyvsp[0].id)); }
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_arg(NULL, (yyvsp[0].id)); }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyval.id) = make_arg((yyvsp[-1].val), (yyvsp[0].id)); }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 171 "parser.y" /* yacc.c:1646  */
    { func_def((yyvsp[-4].val), (yyvsp[-3].id), (yyvsp[-1].list)); }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 171 "parser.y" /* yacc.c:1646  */
    { pop_scope(); check_return((yyvsp[-5].id)); }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 172 "parser.y" /* yacc.c:1646  */
    { func_def((yyvsp[-3].val), (yyvsp[-2].id), NULL); }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "parser.y" /* yacc.c:1646  */
    { pop_scope(); check_return((yyvsp[-4].id)); }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 173 "parser.y" /* yacc.c:1646  */
    { func_def(S_VOID, (yyvsp[-3].id), (yyvsp[-1].list)); }
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "parser.y" /* yacc.c:1646  */
    { pop_scope(); should_return = NULL_TYPE; }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 174 "parser.y" /* yacc.c:1646  */
    { func_def(S_VOID, (yyvsp[-2].id), NULL); }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 174 "parser.y" /* yacc.c:1646  */
    { pop_scope(); should_return = NULL_TYPE; }
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_INT; }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_BOOL; }
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_FLOAT; }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_DOUBLE; }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_STRING; }
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.id) = (yyvsp[0].id); }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval.id) = (yyvsp[0].id); }
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 188 "parser.y" /* yacc.c:1646  */
    { push_array_dim((yyvsp[-3].id), (yyvsp[-1].val)); (yyval.id) = (yyvsp[-3].id); }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 189 "parser.y" /* yacc.c:1646  */
    { push_array_dim((yyvsp[-3].id), (yyvsp[-1].val)); (yyval.id) = (yyvsp[-3].id); }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 192 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 193 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 194 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 195 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 196 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 197 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 198 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 199 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 1; }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 200 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 211 "parser.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 212 "parser.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 215 "parser.y" /* yacc.c:1646  */
    { push_scope(); }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 221 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 222 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 227 "parser.y" /* yacc.c:1646  */
    { identifier_expr((yyvsp[-1].id)); }
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 231 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 232 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-4].type_info)); }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 235 "parser.y" /* yacc.c:1646  */
    { in_loop++; }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 237 "parser.y" /* yacc.c:1646  */
    { in_loop--; }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 241 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 244 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 247 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-3].type_info)); }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 248 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-4].type_info)); }
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 253 "parser.y" /* yacc.c:1646  */
    { return_stmt((yyvsp[-1].type_info)); }
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 254 "parser.y" /* yacc.c:1646  */
    { return_stmt(NULL); }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 257 "parser.y" /* yacc.c:1646  */
    { check_jump(); }
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 258 "parser.y" /* yacc.c:1646  */
    { check_jump(); }
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2264 "y.tab.c" /* yacc.c:1646  */
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
#line 261 "parser.y" /* yacc.c:1906  */


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
        exit(-1);
    }

    fprintf( stdout, "\n" );
    fprintf( stdout, "|---------------------------------------------|\n" );
    fprintf( stdout, "|  There is no syntactic and semantic error!  |\n" );
    fprintf( stdout, "|---------------------------------------------|\n" );
    exit(0);

}

