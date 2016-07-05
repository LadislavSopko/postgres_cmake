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

#ifndef YY_REPLICATION_YY_D_GITREPOS_POSTGRES_CMAKE_SRC_BACKEND_REPLICATION_REPL_GRAM_H_INCLUDED
# define YY_REPLICATION_YY_D_GITREPOS_POSTGRES_CMAKE_SRC_BACKEND_REPLICATION_REPL_GRAM_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int replication_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SCONST = 258,
     IDENT = 259,
     UCONST = 260,
     RECPTR = 261,
     K_BASE_BACKUP = 262,
     K_IDENTIFY_SYSTEM = 263,
     K_START_REPLICATION = 264,
     K_CREATE_REPLICATION_SLOT = 265,
     K_DROP_REPLICATION_SLOT = 266,
     K_TIMELINE_HISTORY = 267,
     K_LABEL = 268,
     K_PROGRESS = 269,
     K_FAST = 270,
     K_NOWAIT = 271,
     K_MAX_RATE = 272,
     K_WAL = 273,
     K_TABLESPACE_MAP = 274,
     K_TIMELINE = 275,
     K_PHYSICAL = 276,
     K_LOGICAL = 277,
     K_SLOT = 278,
     K_RESERVE_WAL = 279
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 45 "replication/repl_gram.y"

		char					*str;
		bool					boolval;
		uint32					uintval;

		XLogRecPtr				recptr;
		Node					*node;
		List					*list;
		DefElem					*defelt;


/* Line 2058 of yacc.c  */
#line 93 "D:/GitREPOS/postgres_cmake/src/backend/replication/repl_gram.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE replication_yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int replication_yyparse (void *YYPARSE_PARAM);
#else
int replication_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int replication_yyparse (void);
#else
int replication_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_REPLICATION_YY_D_GITREPOS_POSTGRES_CMAKE_SRC_BACKEND_REPLICATION_REPL_GRAM_H_INCLUDED  */
