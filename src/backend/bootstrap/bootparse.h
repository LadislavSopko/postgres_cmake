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

#ifndef YY_BOOT_YY_D_GITREPOS_POSTGRES_CMAKE_SRC_BACKEND_BOOTSTRAP_BOOTPARSE_H_INCLUDED
# define YY_BOOT_YY_D_GITREPOS_POSTGRES_CMAKE_SRC_BACKEND_BOOTSTRAP_BOOTPARSE_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int boot_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CONST_P = 258,
     ID = 259,
     OPEN = 260,
     XCLOSE = 261,
     XCREATE = 262,
     INSERT_TUPLE = 263,
     XDECLARE = 264,
     INDEX = 265,
     ON = 266,
     USING = 267,
     XBUILD = 268,
     INDICES = 269,
     UNIQUE = 270,
     XTOAST = 271,
     COMMA = 272,
     EQUALS = 273,
     LPAREN = 274,
     RPAREN = 275,
     OBJ_ID = 276,
     XBOOTSTRAP = 277,
     XSHARED_RELATION = 278,
     XWITHOUT_OIDS = 279,
     XROWTYPE_OID = 280,
     NULLVAL = 281,
     XFORCE = 282,
     XNOT = 283,
     XNULL = 284,
     low = 285,
     high = 286
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 98 "bootstrap/bootparse.y"

	List		*list;
	IndexElem	*ielem;
	char		*str;
	int			ival;
	Oid			oidval;


/* Line 2058 of yacc.c  */
#line 97 "D:/GitREPOS/postgres_cmake/src/backend/bootstrap/bootparse.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE boot_yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int boot_yyparse (void *YYPARSE_PARAM);
#else
int boot_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int boot_yyparse (void);
#else
int boot_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_BOOT_YY_D_GITREPOS_POSTGRES_CMAKE_SRC_BACKEND_BOOTSTRAP_BOOTPARSE_H_INCLUDED  */
