/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_AST_TAB_H_INCLUDED
# define YY_YY_AST_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 2058 of yacc.c  */
#line 17 "ast.y"

// #include "gen.h"
#include "ast.h"


/* Line 2058 of yacc.c  */
#line 52 "ast.tab.h"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_NUM = 258,
     FLOAT_NUM = 259,
     ADDOP = 260,
     MULOP = 261,
     RELOP = 262,
     ID = 263,
     READ = 264,
     WRITE = 265,
     IF = 266,
     ELSE = 267,
     WHILE = 268,
     DO = 269,
     FOR = 270,
     INT = 271,
     FLOAT = 272,
     OR = 273,
     AND = 274,
     NOT = 275,
     IMPLY = 276,
     SWITCH = 277,
     CASE = 278,
     DEFAULT = 279,
     BREAK = 280
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 23 "ast.y"

   int ival;
   // float numbers in the source program are stored as double
   double fval;
   enum op op;
   char name[100];
   
   myType _type;
   
   //  pointers to AST nodes:
   Stmt *stmt;
   Block *block;
   Stmt *stmtlist; // points to first Stmt in the list (NULL if list is empty)
   ReadStmt *read_stmt;
   WriteStmt *write_stmt;
   AssignStmt *assign_stmt;
   IfStmt *if_stmt;
   WhileStmt *while_stmt;
   DoWhileStmt *do_while_stmt;
   ForStmt *for_stmt;
   SwitchStmt *switch_stmt;
   Case *caselist; //points to first Case in the list
   Case *mycase;
   BreakStmt *break_stmt;
   Exp  *exp;
   BoolExp *boolexp;
   bool hasBreak;


/* Line 2058 of yacc.c  */
#line 122 "ast.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_AST_TAB_H_INCLUDED  */
