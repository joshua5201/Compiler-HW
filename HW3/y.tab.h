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
#line 18 "parser.y" /* yacc.c:1909  */

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

#line 135 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
