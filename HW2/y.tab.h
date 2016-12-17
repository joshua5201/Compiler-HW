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
    INT = 260,
    WHILE = 261,
    DO = 262,
    IF = 263,
    ELSE = 264,
    TRUE = 265,
    FALSE = 266,
    FOR = 267,
    CONST = 268,
    READ = 269,
    BOOLEAN = 270,
    BOOL = 271,
    VOID = 272,
    FLOAT = 273,
    DOUBLE = 274,
    STRING = 275,
    CONTINUE = 276,
    BREAK = 277,
    RETURN = 278,
    PRINT = 279,
    STRING_LITERAL = 280,
    FLOAT_LITERAL = 281,
    INT_LITERAL = 282,
    SCIENTIFIC_LITERAL = 283,
    OR = 284,
    AND = 285,
    EQ = 286,
    NEQ = 287,
    GEQ = 288,
    LEQ = 289
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define ID 259
#define INT 260
#define WHILE 261
#define DO 262
#define IF 263
#define ELSE 264
#define TRUE 265
#define FALSE 266
#define FOR 267
#define CONST 268
#define READ 269
#define BOOLEAN 270
#define BOOL 271
#define VOID 272
#define FLOAT 273
#define DOUBLE 274
#define STRING 275
#define CONTINUE 276
#define BREAK 277
#define RETURN 278
#define PRINT 279
#define STRING_LITERAL 280
#define FLOAT_LITERAL 281
#define INT_LITERAL 282
#define SCIENTIFIC_LITERAL 283
#define OR 284
#define AND 285
#define EQ 286
#define NEQ 287
#define GEQ 288
#define LEQ 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
