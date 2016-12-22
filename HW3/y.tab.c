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
extern char buf[1024]; 
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
#define YYLAST   909

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

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
     123,   126,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   140,   143,   144,   147,   148,   151,   153,   154,   157,
     158,   159,   160,   163,   164,   167,   169,   169,   170,   170,
     171,   171,   172,   172,   175,   176,   177,   178,   179,   182,
     183,   186,   187,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   201,   202,   205,   206,   209,   210,   213,   215,
     216,   219,   220,   221,   224,   225,   226,   229,   230,   233,
     235,   237,   239,   242,   245,   246,   247,   248,   251,   252,
     255,   256
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

#define YYPACT_NINF -182

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-182)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     441,    98,  -182,  -182,     9,  -182,  -182,  -182,    19,   441,
    -182,  -182,  -182,  -182,   441,    18,    37,    38,  -182,  -182,
     441,   441,  -182,     2,     7,  -182,  -182,   -16,    33,    11,
     134,   441,  -182,   201,    91,   577,  -182,   107,    94,    74,
     426,  -182,   119,   125,   -27,  -182,   131,   136,   -12,    95,
      43,  -182,  -182,  -182,  -182,  -182,  -182,   577,   608,   577,
     861,    -6,  -182,  -182,  -182,  -182,    61,  -182,  -182,   100,
      72,  -182,   151,  -182,   101,  -182,   108,   154,    98,   120,
    -182,   129,  -182,   108,   172,  -182,    99,   577,   596,  -182,
    -182,  -182,   159,   729,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,  -182,
    -182,   861,   104,  -182,  -182,  -182,   426,   207,  -182,  -182,
     108,  -182,  -182,  -182,   108,    90,  -182,   861,     4,   129,
     681,  -182,   868,   596,    59,    59,    59,    59,    59,    59,
     159,   159,  -182,  -182,  -182,   705,   861,   577,  -182,  -182,
    -182,   137,  -182,   138,   139,   179,   181,   183,   140,   577,
    -182,  -182,   166,  -182,  -182,   190,  -182,  -182,  -182,   254,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
     634,  -182,   660,  -182,  -182,   861,   577,   395,   191,   577,
     421,    15,    31,  -182,  -182,  -182,   521,   528,   301,  -182,
      61,  -182,  -182,    95,   861,   129,   751,  -182,   167,   773,
     447,  -182,  -182,  -182,  -182,  -182,   348,  -182,  -182,   577,
     395,   473,   567,  -182,  -182,   795,   200,  -182,   817,   499,
     228,   395,  -182,  -182,  -182,   839,  -182,  -182,  -182,  -182,
    -182,  -182
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    84,    85,     0,    86,    87,    88,     0,     0,
       7,    11,    10,    12,     9,     0,     0,     0,     1,     5,
       4,     3,     8,    50,     0,    48,    49,     0,     0,     0,
       0,     2,     6,     0,     0,     0,    44,     0,     0,     0,
       0,    66,     0,    82,     0,    74,     0,    78,     0,     0,
      29,    59,    60,    52,    53,    55,    54,     0,     0,     0,
      51,    32,    33,    31,    34,    30,    45,    46,    47,     0,
       0,    61,     0,    68,     0,    72,     0,    80,     0,    89,
      75,    90,    70,     0,    76,    91,     0,     0,    28,    53,
      55,    54,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      63,    65,     0,    56,    58,    57,     0,     0,    83,    71,
       0,    73,    79,    69,     0,    29,    39,    42,     0,    43,
       0,    26,    13,    14,    15,    16,    17,    18,    20,    19,
      21,    22,    23,    24,    25,     0,    37,     0,    62,    67,
     103,     0,   119,     0,     0,     0,     0,     0,     0,     0,
     108,   105,     0,   111,   112,     0,   113,   101,    93,     0,
     110,    94,    95,    96,    97,    98,   100,    99,    81,    77,
       0,    38,     0,    36,    35,    64,     0,     0,     0,     0,
       0,     0,     0,   131,   130,   129,     0,     0,     0,   102,
      50,   104,   109,    54,    40,    41,     0,   120,     0,     0,
       0,   115,   116,   128,   114,   107,     0,   119,   121,     0,
       0,     0,     0,   106,   122,     0,   117,   119,     0,     0,
       0,     0,   127,   119,   119,     0,   123,   118,   126,   124,
     119,   125
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,    -3,     6,   -34,    82,  -182,  -182,  -182,  -114,
    -182,   -11,   -33,   205,  -182,  -182,  -112,  -182,  -182,   210,
     168,    12,  -182,  -182,  -182,  -182,    -1,  -182,   -44,  -181,
      57,   -75,  -182,  -182,    50,  -160,  -182,  -182,  -182,  -182,
    -139,  -182,  -182,  -182,  -182,  -182
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,   162,    61,    62,    63,   128,    11,
      24,    64,    65,    26,    71,   112,    12,    29,    13,    44,
      45,    22,   124,    83,   120,    76,    15,    80,    27,   166,
     167,   118,   168,   198,   169,   170,   171,   172,   187,   218,
     188,   173,   174,   175,   176,   177
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    60,    81,   163,    25,   164,   207,    73,   122,   202,
      36,    21,    14,    17,    41,    19,    77,    31,   211,    18,
      78,    20,    23,    88,    92,    93,    67,    19,    38,    46,
      39,    84,    46,    32,   212,    78,   111,    19,   107,   226,
     108,    28,   129,    32,    33,   178,    34,   181,    35,   179,
     237,   182,   127,   130,    37,   163,   202,   164,    42,    87,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   107,    50,    46,   224,    40,
      30,    51,    52,   149,   163,    86,   164,    87,   232,    35,
      53,    54,    55,    56,   238,   239,   102,   103,   104,   105,
     106,   241,   163,   125,   164,    34,    57,    35,    51,    52,
      58,    66,    49,   185,    59,    69,   165,    53,    54,    55,
      56,   110,    70,    74,   196,   197,     2,     3,    75,     5,
       6,     7,    86,    57,   180,    79,    35,    58,   205,    82,
      85,    59,   126,   195,    50,   109,   130,   116,   204,    51,
      52,   147,   206,   148,    25,   209,   117,   119,    53,    54,
      55,    56,     2,     3,    34,     5,     6,     7,   165,   199,
     113,   114,   115,    38,    57,   123,   222,    43,    58,   186,
     189,   190,    59,   191,   193,   225,   194,   228,    94,    95,
      96,    97,    98,    99,   200,   235,   208,   165,   104,   105,
     106,   100,   101,   102,   103,   104,   105,   106,   231,   219,
     150,    50,   151,   152,   153,   165,    51,    52,   154,     1,
     155,   156,   157,   158,   159,    53,    54,    55,    56,     2,
       3,   236,     5,     6,     7,     2,     3,   192,     5,     6,
       7,    57,    68,    48,    47,    58,   121,   210,   216,    59,
       0,     0,     0,     0,     0,   160,   161,   150,    50,   151,
     152,   153,     0,    51,    52,   154,     1,   155,   156,   157,
     158,   159,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     2,     3,     0,     5,     6,     7,    57,     0,
       0,     0,    58,     0,     0,     0,    59,     0,     0,     0,
       0,     0,   160,   201,   150,    50,   151,   152,   153,     0,
      51,    52,   154,     1,   155,   156,   157,   158,   159,    53,
      54,    55,    56,     0,     0,     0,     0,     0,     0,     2,
       3,     0,     5,     6,     7,    57,     0,     0,     0,    58,
       0,     0,     0,    59,     0,     0,     0,     0,     0,   160,
     215,   150,    50,   151,   152,   153,     0,    51,    52,   154,
       1,   155,   156,   157,   158,   159,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     5,
       6,     7,    57,     0,     0,     0,    58,     0,     0,     0,
      59,     0,     0,     0,     0,     0,   160,   223,   150,    50,
     151,   152,   153,     0,    51,    52,   154,     0,   155,   156,
     157,   158,   159,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,   150,    50,     0,     0,     0,    57,
      51,    52,     0,    58,     0,    51,    52,    59,     0,    53,
      54,    55,    56,   160,    53,    54,    55,    56,     0,     0,
     221,    50,     0,     1,     0,    57,    51,    52,     0,    58,
       0,     0,     0,    59,    72,    53,    54,    55,    56,     2,
       3,     4,     5,     6,     7,     0,     0,    50,     0,     0,
       0,    57,    51,    52,     0,    58,     0,     0,     0,    59,
       0,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    57,    51,    52,
       0,    58,     0,     0,     0,    59,   227,    53,    54,    55,
      56,     0,     0,     0,   213,     0,     0,     0,     0,     0,
       0,   214,     0,    57,     0,     0,     0,    58,     0,     0,
       0,    59,   234,    94,    95,    96,    97,    98,    99,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   100,   101,   102,   103,   104,   105,   106,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,    51,    52,     0,    94,
      95,    96,    97,    98,    99,    53,    54,    55,    56,     0,
       0,     0,   100,   101,   102,   103,   104,   105,   106,     0,
       0,    57,    50,     0,     0,    58,     0,    51,    52,    59,
      96,    97,    98,    99,     0,     0,    53,    89,    90,    91,
       0,   100,   101,   102,   103,   104,   105,   106,    50,     0,
       0,     0,    57,    51,    52,     0,    58,     0,     0,     0,
      59,     0,    53,    54,    55,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,    57,    51,
      52,     0,    58,     0,     0,     0,    59,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,    58,     0,
       0,     0,    59,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   106,     0,     0,     0,   183,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
     184,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,     0,   131,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   106,     0,   217,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,   106,     0,   220,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   106,     0,   230,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,   106,     0,
     233,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,     0,   240,    94,    95,    96,    97,    98,    99,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   100,   101,   102,   103,   104,   105,   106
};

static const yytype_int16 yycheck[] =
{
       1,    35,    46,   117,    15,   117,   187,    40,    83,   169,
       3,    14,     0,     4,     3,     9,    43,    20,     3,     0,
      47,     9,     4,    57,    58,    59,    37,    21,    44,    30,
      46,    43,    33,    21,     3,    47,    70,    31,    44,   220,
      46,     4,    86,    31,    42,   120,    44,    43,    46,   124,
     231,    47,    86,    87,    47,   169,   216,   169,    47,    44,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    44,     4,    78,   217,    46,
      42,     9,    10,   116,   198,    42,   198,    44,   227,    46,
      18,    19,    20,    21,   233,   234,    37,    38,    39,    40,
      41,   240,   216,     4,   216,    44,    34,    46,     9,    10,
      38,     4,    21,   147,    42,    21,   117,    18,    19,    20,
      21,    49,    48,     4,   158,   159,    28,    29,     3,    31,
      32,    33,    42,    34,    44,     4,    46,    38,   182,     3,
      45,    42,    43,     3,     4,    45,   180,    46,   182,     9,
      10,    47,   186,    49,   165,   189,    48,     3,    18,    19,
      20,    21,    28,    29,    44,    31,    32,    33,   169,     3,
      19,    20,    21,    44,    34,     3,   210,    43,    38,    42,
      42,    42,    42,     4,     3,   219,     3,   221,    22,    23,
      24,    25,    26,    27,     4,   229,     5,   198,    39,    40,
      41,    35,    36,    37,    38,    39,    40,    41,     8,    42,
       3,     4,     5,     6,     7,   216,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    28,
      29,     3,    31,    32,    33,    28,    29,   155,    31,    32,
      33,    34,    37,    33,    43,    38,    78,   190,   198,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    31,    32,    33,    34,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    34,
       9,    10,    -1,    38,    -1,     9,    10,    42,    -1,    18,
      19,    20,    21,    48,    18,    19,    20,    21,    -1,    -1,
       3,     4,    -1,    12,    -1,    34,     9,    10,    -1,    38,
      -1,    -1,    -1,    42,    38,    18,    19,    20,    21,    28,
      29,    30,    31,    32,    33,    -1,    -1,     4,    -1,    -1,
      -1,    34,     9,    10,    -1,    38,    -1,    -1,    -1,    42,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    34,     9,    10,
      -1,    38,    -1,    -1,    -1,    42,    43,    18,    19,    20,
      21,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    22,    23,    24,    25,    26,    27,    -1,
      22,    23,    24,    25,    26,    27,    35,    36,    37,    38,
      39,    40,    41,    35,    36,    37,    38,    39,    40,    41,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,     9,    10,    -1,    22,
      23,    24,    25,    26,    27,    18,    19,    20,    21,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    34,     4,    -1,    -1,    38,    -1,     9,    10,    42,
      24,    25,    26,    27,    -1,    -1,    18,    19,    20,    21,
      -1,    35,    36,    37,    38,    39,    40,    41,     4,    -1,
      -1,    -1,    34,     9,    10,    -1,    38,    -1,    -1,    -1,
      42,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    34,     9,
      10,    -1,    38,    -1,    -1,    -1,    42,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    22,    23,    24,    25,    26,    27,    -1,
      -1,    23,    24,    25,    26,    27,    35,    36,    37,    38,
      39,    40,    41,    35,    36,    37,    38,    39,    40,    41
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
      54,    55,    56,    57,    61,    62,     4,    61,    63,    21,
      48,    64,    38,    62,     4,     3,    75,    43,    47,     4,
      77,    78,     3,    73,    43,    45,    42,    44,    54,    19,
      20,    21,    54,    54,    22,    23,    24,    25,    26,    27,
      35,    36,    37,    38,    39,    40,    41,    44,    46,    45,
      49,    54,    65,    19,    20,    21,    46,    48,    81,     3,
      74,    70,    81,     3,    72,     4,    43,    54,    58,    78,
      54,    43,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    47,    49,    62,
       3,     5,     6,     7,    11,    13,    14,    15,    16,    17,
      48,    49,    54,    59,    66,    76,    79,    80,    82,    84,
      85,    86,    87,    91,    92,    93,    94,    95,    81,    81,
      44,    43,    47,    45,    45,    54,    42,    88,    90,    42,
      42,     4,    55,     3,     3,     3,    54,    54,    83,     3,
       4,    49,    85,    21,    54,    78,    54,    79,     5,    54,
      80,     3,     3,     3,     3,    49,    84,    43,    89,    42,
      43,     3,    54,    49,    90,    54,    79,    43,    54,     3,
      43,     8,    90,    43,    43,    54,     3,    79,    90,    90,
      43,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    51,    52,    52,    52,    52,    52,
      53,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    58,    58,    59,    60,    60,    60,    60,    60,
      60,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    64,    64,    65,    65,    66,    67,    67,    68,
      68,    68,    68,    69,    69,    70,    72,    71,    73,    71,
      74,    71,    75,    71,    76,    76,    76,    76,    76,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    84,
      84,    85,    85,    85,    86,    86,    86,    87,    87,    88,
      89,    90,    91,    92,    93,    93,    93,    93,    94,    94,
      95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     2,     1,     1,     0,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     4,     3,
       3,     3,     1,     1,     3,     3,     3,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     3,     3,     2,     3,     1,     4,     5,     3,     6,
       5,     6,     5,     3,     1,     2,     0,     7,     0,     6,
       0,     7,     0,     6,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     4,     3,     0,     2,
       1,     1,     1,     1,     3,     3,     3,     5,     7,     0,
       0,     3,     5,     7,     7,     8,     7,     6,     3,     2,
       2,     2
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
    { scaler_var_def((yyvsp[-3].val), (yyvsp[0].assign)); }
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 120 "parser.y" /* yacc.c:1646  */
    { array_var_def((yyvsp[-3].val), (yyvsp[0].assign)); }
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 121 "parser.y" /* yacc.c:1646  */
    { scaler_var_def((yyvsp[-1].val), (yyvsp[0].assign)); }
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "parser.y" /* yacc.c:1646  */
    { array_var_def((yyvsp[-1].val), (yyvsp[0].assign)); }
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 123 "parser.y" /* yacc.c:1646  */
    { scaler_var_decl((yyvsp[-1].val), (yyvsp[0].id)); }
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 126 "parser.y" /* yacc.c:1646  */
    { (yyval.assign) = scaler_assignment((yyvsp[-2].id), (yyvsp[0].type_info)); }
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 129 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_string((yyvsp[0].strval)); }
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 130 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit((yyvsp[0].lfval)); }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 131 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_int((yyvsp[0].val)); }
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 132 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit((yyvsp[0].lfval)); }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit(-(yyvsp[0].lfval)); }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_int(-(yyvsp[0].val)); }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_float_lit(-(yyvsp[0].lfval)); }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 136 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_bool(1); }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 137 "parser.y" /* yacc.c:1646  */
    { (yyval.attr) = make_bool(0); }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 140 "parser.y" /* yacc.c:1646  */
    { (yyval.assign) = array_assignment((yyvsp[-2].id), (yyvsp[0].list)); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = NULL; }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_elem((yyvsp[-2].list), (yyvsp[0].type_info)); }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_elem(NULL, (yyvsp[0].type_info)); }
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 153 "parser.y" /* yacc.c:1646  */
    { const_decl((yyvsp[-5].val), (yyvsp[-2].id), (yyvsp[0].attr)); }
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 154 "parser.y" /* yacc.c:1646  */
    { const_decl((yyvsp[-3].val), (yyvsp[-2].id), (yyvsp[0].attr)); }
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 157 "parser.y" /* yacc.c:1646  */
    { func_decl((yyvsp[-5].val), (yyvsp[-4].id), (yyvsp[-2].list)); }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 158 "parser.y" /* yacc.c:1646  */
    { func_decl((yyvsp[-4].val), (yyvsp[-3].id), NULL); }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 159 "parser.y" /* yacc.c:1646  */
    { func_decl(S_VOID, (yyvsp[-4].id), (yyvsp[-2].list)); }
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 160 "parser.y" /* yacc.c:1646  */
    { func_decl(S_VOID, (yyvsp[-3].id), NULL); }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 163 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_arg((yyvsp[-2].list), (yyvsp[0].id)); }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval.list) = push_arg(NULL, (yyvsp[0].id)); }
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval.id) = make_arg((yyvsp[-1].val), (yyvsp[0].id)); }
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 169 "parser.y" /* yacc.c:1646  */
    { func_def((yyvsp[-4].val), (yyvsp[-3].id), (yyvsp[-1].list)); }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 169 "parser.y" /* yacc.c:1646  */
    { pop_scope(); check_return((yyvsp[-5].id)); }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 170 "parser.y" /* yacc.c:1646  */
    { func_def((yyvsp[-3].val), (yyvsp[-2].id), NULL); }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 170 "parser.y" /* yacc.c:1646  */
    { pop_scope(); check_return((yyvsp[-4].id)); }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "parser.y" /* yacc.c:1646  */
    { func_def(S_VOID, (yyvsp[-3].id), (yyvsp[-1].list)); }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 171 "parser.y" /* yacc.c:1646  */
    { pop_scope(); should_return = NULL_TYPE; }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 172 "parser.y" /* yacc.c:1646  */
    { func_def(S_VOID, (yyvsp[-2].id), NULL); }
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 172 "parser.y" /* yacc.c:1646  */
    { pop_scope(); should_return = NULL_TYPE; }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_INT; }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_BOOL; }
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_FLOAT; }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_DOUBLE; }
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = S_STRING; }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.id) = (yyvsp[0].id); }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.id) = (yyvsp[0].id); }
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 186 "parser.y" /* yacc.c:1646  */
    { push_array_dim((yyvsp[-3].id), (yyvsp[-1].val)); (yyval.id) = (yyvsp[-3].id); }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 187 "parser.y" /* yacc.c:1646  */
    { push_array_dim((yyvsp[-3].id), (yyvsp[-1].val)); (yyval.id) = (yyvsp[-3].id); }
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 190 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 191 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
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
    { last_stmt_is_return = 1; }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 198 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 209 "parser.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 210 "parser.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 213 "parser.y" /* yacc.c:1646  */
    { push_scope(); }
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 219 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 220 "parser.y" /* yacc.c:1646  */
    { last_stmt_is_return = 0; }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 225 "parser.y" /* yacc.c:1646  */
    { identifier_expr((yyvsp[-1].id)); }
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 229 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 230 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-4].type_info)); }
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 233 "parser.y" /* yacc.c:1646  */
    { in_loop++; }
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 235 "parser.y" /* yacc.c:1646  */
    { in_loop--; }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 239 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 242 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-2].type_info)); }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 245 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-3].type_info)); }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 246 "parser.y" /* yacc.c:1646  */
    { check_cond((yyvsp[-4].type_info)); }
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 251 "parser.y" /* yacc.c:1646  */
    { return_stmt((yyvsp[-1].type_info)); }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 252 "parser.y" /* yacc.c:1646  */
    { return_stmt(NULL); }
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 255 "parser.y" /* yacc.c:1646  */
    { check_jump(); }
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 256 "parser.y" /* yacc.c:1646  */
    { check_jump(); }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2252 "y.tab.c" /* yacc.c:1646  */
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
#line 259 "parser.y" /* yacc.c:1906  */


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

