
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "SyntaxAnalyzer.y"

	
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "symtab.h"
	
    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);	
    int yylex(void);

    extern int line;

    int class_id = 0;
    int level = 0;
    bool isParam = false;   
    int method_call_index = -1;
    int expression_level = 0;

    //other

    #define YYERROR_VERBOSE 1
    



/* Line 189 of yacc.c  */
#line 102 "SyntaxAnalyzer.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _PUBLIC = 258,
     _STATIC = 259,
     _CLASS = 260,
     _VOID = 261,
     _MAIN = 262,
     _EXTENDS = 263,
     _RETURN = 264,
     _SOP = 265,
     _LENGTH = 266,
     _THIS = 267,
     _NEW = 268,
     _IF = 269,
     _ELSE = 270,
     _WHILE = 271,
     _INTEGER = 272,
     _STRING = 273,
     _DATATYPE = 274,
     _OPENPARENT = 275,
     _CLOSEPARENT = 276,
     _OPENSQRBRACK = 277,
     _CLOSESQRBRACK = 278,
     _OPENBRAC = 279,
     _CLOSEBRAC = 280,
     _AND = 281,
     _OR = 282,
     _DOT = 283,
     _SEMICOLON = 284,
     _COMMA = 285,
     _DOUBLEQUOTE = 286,
     _SINGLEQUOTE = 287,
     _PLUS = 288,
     _MINUS = 289,
     _MULTIPLY = 290,
     _NOT = 291,
     _EQUAL = 292,
     _DIV = 293,
     _COMPOP = 294,
     _BOOLVALUE = 295,
     _INTEGERVALUE = 296,
     _IDENT = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 186 "SyntaxAnalyzer.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1385

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNRULES -- Number of states.  */
#define YYNSTATES  419

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    11,    16,    21,    26,    31,    45,
      59,    73,    87,   101,   115,   129,   143,   157,   171,   185,
     199,   202,   205,   208,   209,   212,   215,   218,   226,   234,
     242,   250,   251,   254,   257,   260,   263,   266,   269,   272,
     275,   278,   281,   284,   287,   290,   293,   297,   301,   302,
     306,   310,   311,   314,   315,   329,   343,   357,   371,   385,
     399,   413,   427,   428,   433,   438,   443,   451,   459,   467,
     475,   483,   489,   495,   501,   507,   513,   519,   525,   531,
     537,   542,   547,   552,   557,   565,   573,   581,   589,   597,
     605,   606,   610,   614,   615,   617,   619,   621,   623,   625,
     627,   630,   631,   634,   637,   640,   641,   646,   647,   652,
     656,   661,   666,   671,   675,   679,   683,   689,   695,   701,
     703,   706,   708,   710,   712,   718,   724,   730,   736,   742,
     747,   752,   757,   762,   767,   770,   773,   777,   781,   785
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    46,    49,    -1,    18,    22,    23,    42,
      -1,     1,    22,    23,    42,    -1,    18,     1,    23,    42,
      -1,    18,    22,     1,    42,    -1,    18,    22,    23,     1,
      -1,    48,    24,     3,     4,     6,     7,    20,    45,    21,
      24,    56,    25,    25,    -1,    48,     1,     3,     4,     6,
       7,    20,    45,    21,    24,    56,    25,    25,    -1,    48,
      24,     1,     4,     6,     7,    20,    45,    21,    24,    56,
      25,    25,    -1,    48,    24,     3,     1,     6,     7,    20,
      45,    21,    24,    56,    25,    25,    -1,    48,    24,     3,
       4,     1,     7,    20,    45,    21,    24,    56,    25,    25,
      -1,    48,    24,     3,     4,     6,     1,    20,    45,    21,
      24,    56,    25,    25,    -1,    48,    24,     3,     4,     6,
       7,     1,    45,    21,    24,    56,    25,    25,    -1,    48,
      24,     3,     4,     6,     7,    20,    45,     1,    24,    56,
      25,    25,    -1,    48,    24,     3,     4,     6,     7,    20,
      45,    21,     1,    56,    25,    25,    -1,    48,    24,     3,
       4,     6,     7,    20,    45,    21,    24,     1,    25,    25,
      -1,    48,    24,     3,     4,     6,     7,    20,    45,    21,
      24,    56,     1,    25,    -1,    48,    24,     3,     4,     6,
       7,    20,    45,    21,    24,    56,    25,     1,    -1,     8,
      42,    -1,     1,    42,    -1,     8,     1,    -1,    -1,     5,
      42,    -1,     1,    42,    -1,     5,     1,    -1,    48,    47,
      24,    52,    55,    25,    49,    -1,     1,    47,    24,    52,
      55,    25,    49,    -1,    48,    47,     1,    52,    55,    25,
      49,    -1,    48,    47,    24,    52,    55,     1,    49,    -1,
      -1,    19,    42,    -1,    42,    42,    -1,    17,    42,    -1,
       1,    42,    -1,    42,     1,    -1,    19,     1,    -1,    17,
       1,    -1,    19,    42,    -1,    42,    42,    -1,    17,    42,
      -1,     1,    42,    -1,    42,     1,    -1,    19,     1,    -1,
      17,     1,    -1,    50,    29,    52,    -1,    50,     1,    52,
      -1,    -1,    30,    50,    53,    -1,     1,    50,    53,    -1,
      -1,    50,    53,    -1,    -1,     3,    51,    20,    54,    21,
      24,    52,    56,     9,    62,    29,    25,    55,    -1,     1,
      51,    20,    54,    21,    24,    52,    56,     9,    62,    29,
      25,    55,    -1,     3,     1,     1,    54,    21,    24,    52,
      56,     9,    62,    29,    25,    55,    -1,     3,    51,    20,
      54,     1,    24,    52,    56,     9,    62,    29,    25,    55,
      -1,     3,    51,    20,    54,    21,     1,    52,    56,     9,
      62,    29,    25,    55,    -1,     3,    51,    20,    54,    21,
      24,    52,    56,     1,    62,    29,    25,    55,    -1,     3,
      51,    20,    54,    21,    24,    52,    56,     9,    62,     1,
      25,    55,    -1,     3,    51,    20,    54,    21,    24,    52,
      56,     9,    62,    29,     1,    55,    -1,    -1,    24,    56,
      25,    56,    -1,     1,    56,    25,    56,    -1,    24,    56,
       1,    56,    -1,    14,    20,    62,    21,    56,    15,    56,
      -1,     1,    20,    62,    21,    56,    15,    56,    -1,    14,
       1,    62,    21,    56,    15,    56,    -1,    14,    20,    62,
       1,    56,    15,    56,    -1,    14,    20,    62,    21,    56,
       1,    56,    -1,    16,    20,    62,    21,    56,    -1,     1,
      20,    62,    21,    56,    -1,    16,     1,    62,    21,    56,
      -1,    16,    20,    62,     1,    56,    -1,    10,    20,    62,
      21,    29,    -1,     1,    20,    62,    21,    29,    -1,    10,
       1,    62,    21,    29,    -1,    10,    20,    62,     1,    29,
      -1,    10,    20,    62,    21,     1,    -1,    42,    37,    62,
      29,    -1,     1,    37,    62,    29,    -1,    42,     1,    62,
      29,    -1,    42,    37,    62,     1,    -1,    42,    22,    62,
      23,    37,    62,    29,    -1,     1,    22,    62,    23,    37,
      62,    29,    -1,    42,     1,    62,    23,    37,    62,    29,
      -1,    42,    22,    62,     1,    37,    62,    29,    -1,    42,
      22,    62,    23,     1,    62,    29,    -1,    42,    22,    62,
      23,    37,    62,     1,    -1,    -1,    30,    62,    57,    -1,
       1,    62,    57,    -1,    -1,    26,    -1,    39,    -1,    33,
      -1,    34,    -1,    35,    -1,    38,    -1,    62,    57,    -1,
      -1,    28,    42,    -1,     1,    42,    -1,    28,     1,    -1,
      -1,    62,    63,    59,    62,    -1,    -1,    62,    64,    58,
      62,    -1,    62,     1,    62,    -1,    62,    22,    62,    23,
      -1,    62,     1,    62,    23,    -1,    62,    22,    62,     1,
      -1,    62,    28,    11,    -1,    62,     1,    11,    -1,    62,
      28,     1,    -1,    62,    61,    20,    60,    21,    -1,    62,
      61,     1,    60,    21,    -1,    62,    61,    20,    60,     1,
      -1,    41,    -1,    34,    41,    -1,    40,    -1,    42,    -1,
      12,    -1,    13,    17,    22,    62,    25,    -1,     1,    17,
      22,    62,    25,    -1,    13,     1,    22,    62,    25,    -1,
      13,    17,     1,    62,    25,    -1,    13,    17,    22,    62,
       1,    -1,    13,    42,    20,    21,    -1,     1,    42,    20,
      21,    -1,    13,     1,    20,    21,    -1,    13,    42,     1,
      21,    -1,    13,    42,    20,     1,    -1,    36,    62,    -1,
       1,    62,    -1,    20,    62,    21,    -1,     1,    62,    21,
      -1,    20,    62,     1,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    78,    83,    84,    85,    86,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     103,   108,   109,   110,   113,   118,   119,   122,   123,   124,
     125,   126,   129,   137,   144,   151,   152,   153,   154,   157,
     162,   167,   172,   173,   174,   175,   178,   179,   180,   183,
     184,   185,   188,   189,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   224,   225,   226,   227,   232,   233,   234,   235,   236,
     237,   240,   241,   242,   245,   246,   249,   250,   251,   252,
     255,   261,   267,   271,   272,   276,   275,   289,   288,   303,
     304,   312,   313,   314,   321,   322,   323,   324,   325,   326,
     331,   337,   342,   350,   351,   352,   353,   354,   355,   356,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_PUBLIC", "_STATIC", "_CLASS", "_VOID",
  "_MAIN", "_EXTENDS", "_RETURN", "_SOP", "_LENGTH", "_THIS", "_NEW",
  "_IF", "_ELSE", "_WHILE", "_INTEGER", "_STRING", "_DATATYPE",
  "_OPENPARENT", "_CLOSEPARENT", "_OPENSQRBRACK", "_CLOSESQRBRACK",
  "_OPENBRAC", "_CLOSEBRAC", "_AND", "_OR", "_DOT", "_SEMICOLON", "_COMMA",
  "_DOUBLEQUOTE", "_SINGLEQUOTE", "_PLUS", "_MINUS", "_MULTIPLY", "_NOT",
  "_EQUAL", "_DIV", "_COMPOP", "_BOOLVALUE", "_INTEGERVALUE", "_IDENT",
  "$accept", "program", "MainMethodParam", "MainClass", "SectionE_I",
  "ClassScope", "ClassDeclaration", "Type", "MethodType", "VarDeclaration",
  "SectionC_T", "SectionT_SCT", "MethodDeclaration", "Statement",
  "SectionC_E", "LogicOperator", "MathOperator", "SectionE_SCE",
  "UseFunction", "Expression", "$@1", "$@2", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    45,    45,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    47,    47,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    50,    50,    50,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    53,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    57,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    63,    62,    64,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     4,     4,     4,     4,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
       2,     2,     2,     0,     2,     2,     2,     7,     7,     7,
       7,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     0,     3,
       3,     0,     2,     0,    13,    13,    13,    13,    13,    13,
      13,    13,     0,     4,     4,     4,     7,     7,     7,     7,
       7,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     7,     7,     7,     7,     7,     7,
       0,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     2,     2,     0,     4,     0,     4,     3,
       4,     4,     4,     3,     3,     3,     5,     5,     5,     1,
       2,     1,     1,     1,     5,     5,     5,     5,     5,     4,
       4,     4,     4,     4,     2,     2,     3,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    25,    26,    24,     1,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    38,    34,    37,    32,
      36,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    45,    41,    44,    39,
      43,    40,     0,     0,     0,    28,    29,    30,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,   121,   119,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     8,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    63,
       0,    82,     0,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,   136,   114,   122,     0,    76,    72,     0,   115,
     113,   102,     0,     0,    96,    97,    98,    99,     0,    94,
      95,     0,     0,    77,    78,    79,    75,     0,     0,     0,
       0,     0,    73,    74,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131,     0,
       0,     0,   132,   133,   129,   111,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,     0,   124,    67,   117,
       0,     0,   100,   118,   116,    85,    68,     0,    69,    70,
      66,    86,    87,    88,     0,    84,    55,    56,    57,    58,
      59,    60,    61,    54,     0,     0,     0,    92,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,   101,     4,    17,    11,    12,    36,    71,    37,
     125,   109,    56,   181,   392,   321,   318,   359,   263,   305,
     264,   265
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -133
static const yytype_int16 yypact[] =
{
     105,   -23,    25,   192,   454,    74,  -133,  -133,  -133,  -133,
      22,   224,  -133,   199,   226,   180,    32,   207,   364,   236,
     270,    20,  -133,  -133,  -133,    15,    15,    15,   303,   307,
     312,    16,   282,    67,   122,   126,    93,   311,   311,   311,
     324,   342,   344,   372,   213,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,    62,    62,   286,   291,   362,   395,   170,   459,
     462,   463,   466,   474,   227,  -133,  -133,   355,   214,   233,
     275,   475,   277,   482,   454,   454,   454,   454,   101,   101,
     101,   101,   101,   101,   101,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,   202,   202,   202,  -133,  -133,  -133,  -133,   440,
     137,   464,   484,   488,   491,   500,   502,    10,   125,   506,
     509,    91,   493,   511,    13,   515,   516,   517,   521,   522,
     524,   526,   365,   310,   310,  -133,   528,   532,   533,   377,
     519,   520,   536,   290,   159,   159,   159,   159,   159,   159,
     159,   159,   633,   125,   125,   306,   306,   306,   306,   306,
    -133,  -133,  -133,  -133,  -133,    83,   360,   393,   401,   159,
      99,   534,   538,   539,   558,   559,   560,   567,   571,   604,
     296,  -133,  -133,   654,   654,   654,   654,   654,   176,   176,
     176,   576,   176,   176,   176,   176,   176,   176,   325,   176,
     176,   176,   577,   578,   579,   581,   583,   585,   587,   588,
     594,   597,   333,   573,   614,   616,   618,    19,   260,  -133,
     169,   176,   589,   176,  -133,  -133,  -133,   885,   907,   921,
     565,   936,   951,   966,   981,   996,  1011,   565,   565,   843,
    1025,  1039,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   176,   176,   176,   176,   176,   176,
     613,   617,   672,   284,   257,   413,  1054,  -133,   691,   620,
     184,   176,    24,   429,   465,    85,   599,  -133,  -133,   609,
     531,   100,   666,   477,   666,   565,   138,   565,  -133,  -133,
     602,  -133,   557,    36,   495,  -133,  1068,  1082,  1097,  1111,
    1126,  1140,   176,   621,  -133,   623,   176,   176,   176,   624,
     136,   334,  -133,  -133,   449,   714,  -133,   635,  1162,   452,
    -133,  -133,    49,    49,  -133,  -133,  -133,  -133,   176,  -133,
    -133,   176,   176,  -133,  -133,  -133,  -133,   636,   229,   779,
     637,    14,  -133,  -133,  -133,   176,   176,   176,   176,   628,
     634,   640,   641,   644,   575,   352,  1180,  -133,  -133,  1198,
    1216,  1234,  -133,  -133,  -133,  -133,   565,   370,  -133,   627,
     866,   155,   733,   756,  1252,   565,   176,   802,   565,   565,
     565,  1270,  1288,  1306,  1324,   311,   311,   311,   311,   311,
     311,   311,   311,  -133,  -133,  -133,   406,  -133,  -133,  -133,
     620,   176,  -133,  -133,  -133,  -133,  -133,  1346,  -133,  -133,
    -133,  -133,  -133,  -133,   513,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   825,   866,   442,  -133,  -133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,   605,  -133,   660,   674,   348,   292,   622,   -14,
     294,   367,   -38,  -132,    59,  -133,  -133,   359,  -133,  -131,
    -133,  -133
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -140
static const yytype_int16 yytable[] =
{
      57,    58,   161,   162,   163,   164,   165,   166,   167,   168,
     170,   121,    38,    39,   132,   369,    32,    43,   -48,     6,
     248,    30,    44,    15,    31,   309,     7,   188,   249,   370,
      16,   122,    33,    23,    34,   310,   133,   337,    65,    66,
     -48,   203,   204,   205,   206,   207,   -23,   217,   218,   219,
     208,   221,   222,   223,   224,   225,   226,    35,   229,   230,
     231,   209,   210,    32,     6,   -48,   311,     8,    46,   211,
    -101,   -48,   -48,   338,    24,    13,   -48,   252,   -48,    33,
     256,    34,   258,   212,   155,   213,   -48,   -48,   268,   214,
     215,   216,   128,   156,    52,   278,   279,   157,    14,   158,
     189,   325,    99,   178,    35,   179,     1,   159,   -90,    47,
       2,   319,   129,   286,   287,   288,   289,   290,   291,   100,
     180,   190,    53,    48,   320,   160,   123,    50,   307,   326,
     308,   173,   174,   175,   176,   177,   191,   353,   113,   328,
     327,   330,   331,   332,   333,   334,   -51,   -90,   156,   303,
     209,   210,   157,   -90,   158,   124,   393,   354,   211,   114,
     155,   346,   159,   -90,    49,   349,   350,   351,    51,   156,
     253,    76,   212,   157,   213,   158,   394,   208,   214,   215,
     329,   360,   360,   159,   -90,   155,   254,   362,   209,   210,
     363,   364,     9,   -90,   156,    77,   211,   252,   157,   -90,
     158,   160,    19,    32,   371,   372,   373,   374,   159,   -90,
     212,   255,   213,   306,    63,    86,   214,   215,   216,    33,
      64,    34,    22,   -53,   388,    15,   160,    20,    83,    21,
     328,    25,    16,   396,    88,   397,   398,   399,   400,   156,
      28,   209,   210,   157,    35,   158,   250,    84,   -23,   366,
    -139,   179,  -139,   159,   -90,  -139,    87,  -139,   297,   414,
     415,   208,  -139,   212,  -139,   213,   180,  -139,  -139,   214,
     215,   367,   209,   210,    29,    89,    90,   250,    93,   298,
     211,  -139,  -139,  -139,   307,  -139,  -139,    67,  -139,  -139,
    -139,   153,    72,  -139,   212,  -139,   213,   201,  -139,  -139,
     214,   215,   251,    68,   295,    69,   296,    32,    68,    40,
      69,    32,    54,    41,    55,   -48,   -48,    91,    42,    85,
     -48,   202,   -48,    33,    45,    34,   227,    33,    70,    34,
     -48,    59,   154,    70,   242,   208,   -62,   406,   407,   408,
     409,   410,   411,   412,   413,   303,   209,   210,    35,    60,
     228,    61,    35,   381,   211,  -138,  -138,  -138,   243,  -138,
    -138,   182,  -138,  -138,  -138,    26,   141,  -138,   212,  -138,
     213,   208,  -138,  -138,   214,   215,   304,   382,   148,    62,
     183,   303,   209,   210,   108,   108,   108,    74,    27,   142,
     211,  -112,  -112,  -112,   184,  -112,  -112,    85,  -112,  -112,
    -112,   149,   186,  -112,   212,  -112,   213,   208,  -112,  -112,
     214,   215,   304,   185,   299,   143,   144,   303,   209,   210,
      75,   187,    95,    96,    97,    98,   211,  -128,  -128,  -128,
     312,  -128,  -128,   300,  -128,  -128,  -128,   171,   172,  -128,
     212,  -128,   213,   155,  -128,  -128,   214,   215,   304,   313,
    -103,   -90,   156,  -104,   -31,    10,   157,   -90,   158,     2,
     110,   111,   112,  -136,  -136,  -136,   159,   -90,  -136,  -103,
    -136,   306,  -104,   417,   418,  -136,  -136,  -136,   328,    78,
    -136,  -136,    79,    80,   160,   115,    81,   156,   303,   209,
     210,   157,   -90,   158,    82,    92,   208,   211,   314,   315,
     316,   159,    94,   317,   -83,   116,   303,   209,   210,   117,
     -83,   212,   118,   213,   208,   211,   130,   214,   215,   329,
     -83,   119,   -89,   120,   303,   209,   210,   126,   -89,   212,
     127,   213,   208,   211,   131,   214,   215,   304,   -89,   134,
     135,   136,   303,   209,   210,   137,   138,   212,   139,   213,
     140,   211,   145,   214,   215,   304,   146,   147,   208,   192,
     324,   150,   151,   193,   194,   212,   155,   213,   303,   209,
     210,   214,   215,   304,   -90,   156,   208,   211,   152,   157,
     -90,   158,   244,   195,   196,   197,   303,   209,   210,   159,
     -90,   212,   198,   213,   336,   211,   199,   214,   215,   304,
     380,   220,   232,   233,   234,   155,   235,   160,   236,   212,
     237,   213,   238,   239,   156,   214,   215,   304,   157,   240,
     158,   208,   241,   245,   178,   246,   179,   247,   159,   200,
     257,   303,   209,   210,   169,   292,   322,   293,   323,   335,
     211,   180,   347,   156,   348,   352,   160,   157,   389,   158,
     356,   365,   368,   375,   212,   155,   213,   159,   -90,   376,
     214,   215,   304,   -90,   156,   377,   378,   155,   157,   379,
     158,    18,   361,   259,     5,   160,   156,    73,   159,     0,
     157,   -90,   158,     0,   102,   103,   104,   105,   106,   107,
     159,     0,   259,   294,   261,  -135,   160,  -135,  -107,     0,
     262,  -135,  -135,     0,     0,  -105,  -105,  -105,   160,     0,
    -105,  -107,  -134,   261,  -134,   259,  -134,  -107,     0,   262,
    -134,  -134,     0,     0,  -105,  -105,  -105,     0,     0,  -105,
    -107,     0,     0,     0,   259,  -109,   261,   355,     0,  -109,
    -107,     0,   262,  -109,  -109,     0,     0,  -105,  -105,  -105,
       0,     0,  -105,  -107,  -106,   261,  -106,   259,  -106,  -106,
       0,   262,  -106,  -106,     0,     0,  -105,  -105,  -105,     0,
       0,  -105,  -106,     0,     0,     0,     0,  -108,   261,  -108,
     189,  -108,  -107,     0,   262,  -108,  -108,     0,     0,  -105,
    -105,  -105,     0,     0,  -105,  -107,     0,     0,     0,  -103,
    -122,   190,  -122,   189,     0,  -122,     0,  -122,     0,     0,
       0,     0,  -122,  -122,  -122,     0,   191,  -122,  -122,     0,
       0,     0,   293,  -122,   190,  -122,   390,     0,  -122,     0,
    -122,     0,     0,     0,     0,  -122,  -122,  -122,     0,   191,
    -122,  -122,     0,     0,   259,     0,   -93,   261,   355,     0,
       0,  -107,     0,   262,     0,   391,     0,     0,  -105,  -105,
    -105,     0,     0,  -105,  -107,   261,   280,   390,     0,  -107,
       0,   262,   281,     0,     0,     0,  -105,  -105,  -105,     0,
       0,  -105,  -107,     0,     0,     0,   259,   -93,   261,     0,
       0,     0,  -107,     0,   262,     0,   391,     0,     0,  -105,
    -105,  -105,     0,     0,  -105,  -107,   260,   261,   259,     0,
       0,  -107,     0,   262,     0,     0,     0,     0,  -105,  -105,
    -105,     0,   259,  -105,  -107,     0,     0,     0,     0,   261,
     266,     0,     0,  -107,     0,   262,     0,   259,     0,     0,
    -105,  -105,  -105,   261,     0,  -105,  -107,  -107,     0,   262,
     267,     0,   270,     0,  -105,  -105,  -105,   269,   261,  -105,
    -107,     0,  -107,     0,   262,     0,     0,   259,     0,  -105,
    -105,  -105,   271,   261,  -105,  -107,     0,  -107,     0,   262,
       0,     0,   273,     0,  -105,  -105,  -105,   272,   261,  -105,
    -107,     0,  -107,     0,   262,     0,     0,   259,     0,  -105,
    -105,  -105,   274,   261,  -105,  -107,     0,  -107,     0,   262,
       0,     0,   276,     0,  -105,  -105,  -105,   275,   261,  -105,
    -107,     0,  -107,     0,   262,     0,   282,     0,     0,  -105,
    -105,  -105,   277,   261,  -105,  -107,     0,  -107,     0,   262,
     284,     0,     0,     0,  -105,  -105,  -105,   261,   283,  -105,
    -107,  -107,     0,   262,     0,   301,     0,     0,  -105,  -105,
    -105,   261,     0,  -105,  -107,  -107,     0,   262,   285,   259,
       0,     0,  -105,  -105,  -105,   302,   261,  -105,  -107,     0,
    -107,     0,   262,   259,     0,     0,     0,  -105,  -105,  -105,
     261,     0,  -105,  -107,  -107,     0,   262,   339,   259,     0,
       0,  -105,  -105,  -105,   261,     0,  -105,  -107,  -107,     0,
     262,   340,   259,     0,     0,  -105,  -105,  -105,     0,   261,
    -105,  -107,     0,  -107,     0,   262,   341,   259,     0,     0,
    -105,  -105,  -105,   261,     0,  -105,  -107,  -107,     0,   262,
     342,   344,     0,     0,  -105,  -105,  -105,     0,   261,  -105,
    -107,     0,  -107,     0,   262,   343,     0,     0,     0,  -105,
    -105,  -105,   261,   357,  -105,  -107,  -107,     0,   262,   345,
       0,     0,     0,  -105,  -105,  -105,     0,     0,  -105,  -107,
       0,   259,     0,     0,   261,   358,     0,     0,  -107,     0,
     262,     0,     0,     0,     0,  -105,  -105,  -105,     0,   259,
    -105,  -107,   261,     0,     0,   383,  -107,     0,   262,     0,
       0,     0,     0,  -105,  -105,  -105,     0,   259,  -105,  -107,
     261,     0,     0,   384,  -107,     0,   262,     0,     0,     0,
       0,  -105,  -105,  -105,     0,   386,  -105,  -107,   261,     0,
       0,   385,  -107,     0,   262,     0,     0,     0,     0,  -105,
    -105,  -105,     0,   259,  -105,  -107,   261,     0,     0,   387,
    -107,     0,   262,     0,     0,     0,     0,  -105,  -105,  -105,
       0,   259,  -105,  -107,   261,     0,     0,     0,  -107,     0,
     262,   395,     0,     0,     0,  -105,  -105,  -105,     0,   259,
    -105,  -107,   261,     0,     0,     0,  -107,     0,   262,   401,
       0,     0,     0,  -105,  -105,  -105,     0,   259,  -105,  -107,
     261,     0,     0,     0,  -107,     0,   262,   402,     0,     0,
       0,  -105,  -105,  -105,     0,   404,  -105,  -107,   261,     0,
       0,     0,  -107,     0,   262,   403,     0,     0,     0,  -105,
    -105,  -105,     0,     0,  -105,  -107,   261,   301,     0,     0,
    -107,     0,   262,   405,     0,     0,     0,  -105,  -105,  -105,
       0,     0,  -105,  -107,     0,     0,     0,   416,   261,     0,
       0,     0,  -107,     0,   262,     0,     0,     0,     0,  -105,
    -105,  -105,     0,     0,  -105,  -107
};

static const yytype_int16 yycheck[] =
{
      38,    39,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     1,    26,    27,     1,     1,     1,     1,     3,    42,
       1,     1,     6,     1,     4,     1,     1,   159,     9,    15,
       8,    21,    17,     1,    19,    11,    23,     1,    52,    53,
      25,   173,   174,   175,   176,   177,    24,   178,   179,   180,
       1,   182,   183,   184,   185,   186,   187,    42,   189,   190,
     191,    12,    13,     1,    42,     3,    42,    42,     1,    20,
      21,     9,    10,    37,    42,     1,    14,   208,    16,    17,
     211,    19,   213,    34,     1,    36,    24,    25,   220,    40,
      41,    42,     1,    10,     1,   227,   228,    14,    24,    16,
       1,     1,     1,    20,    42,    22,     1,    24,    25,    42,
       5,    26,    21,   244,   245,   246,   247,   248,   249,    18,
      37,    22,    29,     1,    39,    42,     1,     1,   260,    29,
     261,   145,   146,   147,   148,   149,    37,     1,     1,     1,
     272,   273,   274,   275,   276,   277,    21,     9,    10,    11,
      12,    13,    14,    15,    16,    30,     1,    21,    20,    22,
       1,   292,    24,    25,    42,   296,   297,   298,    42,    10,
       1,     1,    34,    14,    36,    16,    21,     1,    40,    41,
      42,   312,   313,    24,    25,     1,    17,   318,    12,    13,
     321,   322,     0,     9,    10,    25,    20,   328,    14,    15,
      16,    42,     3,     1,   335,   336,   337,   338,    24,    25,
      34,    42,    36,    29,     1,     1,    40,    41,    42,    17,
       7,    19,    42,    21,   356,     1,    42,     1,     1,     3,
       1,    24,     8,   365,     1,   366,   368,   369,   370,    10,
       4,    12,    13,    14,    42,    16,    17,    20,    24,    20,
      21,    22,    23,    24,    25,    26,    42,    28,     1,   390,
     391,     1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    12,    13,     4,    42,     1,    17,     1,    22,
      20,    21,    22,    23,   416,    25,    26,     1,    28,    29,
      30,     1,     1,    33,    34,    35,    36,     1,    38,    39,
      40,    41,    42,    17,    20,    19,    22,     1,    17,     6,
      19,     1,     1,     6,     3,     9,    10,    42,     6,    42,
      14,    25,    16,    17,    42,    19,     1,    17,    42,    19,
      24,     7,    42,    42,     1,     1,    25,   375,   376,   377,
     378,   379,   380,   381,   382,    11,    12,    13,    42,     7,
      25,     7,    42,     1,    20,    21,    22,    23,    25,    25,
      26,     1,    28,    29,    30,     1,     1,    33,    34,    35,
      36,     1,    38,    39,    40,    41,    42,    25,     1,     7,
      20,    11,    12,    13,    92,    93,    94,    25,    24,    24,
      20,    21,    22,    23,     1,    25,    26,    42,    28,    29,
      30,    24,     1,    33,    34,    35,    36,     1,    38,    39,
      40,    41,    42,    20,     1,   123,   124,    11,    12,    13,
      25,    20,    74,    75,    76,    77,    20,    21,    22,    23,
       1,    25,    26,    20,    28,    29,    30,   143,   144,    33,
      34,    35,    36,     1,    38,    39,    40,    41,    42,    20,
       1,     9,    10,     1,     0,     1,    14,    15,    16,     5,
      93,    94,    22,    21,    22,    23,    24,    25,    26,    20,
      28,    29,    20,   414,   415,    33,    34,    35,     1,    20,
      38,    39,    20,    20,    42,    21,    20,    10,    11,    12,
      13,    14,    15,    16,    20,    20,     1,    20,    33,    34,
      35,    24,    20,    38,     9,    21,    11,    12,    13,    21,
      15,    34,    21,    36,     1,    20,    23,    40,    41,    42,
      25,    21,     9,    21,    11,    12,    13,    21,    15,    34,
      21,    36,     1,    20,    23,    40,    41,    42,    25,    24,
      24,    24,    11,    12,    13,    24,    24,    34,    24,    36,
      24,    20,    24,    40,    41,    42,    24,    24,     1,    25,
      29,    42,    42,    25,    25,    34,     1,    36,    11,    12,
      13,    40,    41,    42,     9,    10,     1,    20,    42,    14,
      15,    16,     9,    25,    25,    25,    11,    12,    13,    24,
      25,    34,    25,    36,    37,    20,    25,    40,    41,    42,
      25,    25,    25,    25,    25,     1,    25,    42,    25,    34,
      25,    36,    25,    25,    10,    40,    41,    42,    14,    25,
      16,     1,    25,     9,    20,     9,    22,     9,    24,    25,
      41,    11,    12,    13,     1,    22,    37,    20,    29,    37,
      20,    37,    21,    10,    21,    21,    42,    14,    21,    16,
      15,    15,    15,    25,    34,     1,    36,    24,    25,    25,
      40,    41,    42,     9,    10,    25,    25,     1,    14,    25,
      16,    11,   313,     1,     0,    42,    10,    55,    24,    -1,
      14,    15,    16,    -1,    79,    80,    81,    82,    83,    84,
      24,    -1,     1,    21,    22,    23,    42,    25,    26,    -1,
      28,    29,    30,    -1,    -1,    33,    34,    35,    42,    -1,
      38,    39,    21,    22,    23,     1,    25,    26,    -1,    28,
      29,    30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,     1,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    30,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,    39,    21,    22,    23,     1,    25,    26,
      -1,    28,    29,    30,    -1,    -1,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    21,    22,    23,
       1,    25,    26,    -1,    28,    29,    30,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,    20,
      21,    22,    23,     1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    -1,
      -1,    -1,    20,    21,    22,    23,     1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,    -1,    -1,     1,    -1,    21,    22,    23,    -1,
      -1,    26,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
      35,    -1,    -1,    38,    39,    22,    23,     1,    -1,    26,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    -1,    -1,     1,    21,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    21,    22,     1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,     1,    38,    39,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    28,    -1,     1,    -1,    -1,
      33,    34,    35,    22,    -1,    38,    39,    26,    -1,    28,
      29,    -1,     1,    -1,    33,    34,    35,    21,    22,    38,
      39,    -1,    26,    -1,    28,    -1,    -1,     1,    -1,    33,
      34,    35,    21,    22,    38,    39,    -1,    26,    -1,    28,
      -1,    -1,     1,    -1,    33,    34,    35,    21,    22,    38,
      39,    -1,    26,    -1,    28,    -1,    -1,     1,    -1,    33,
      34,    35,    21,    22,    38,    39,    -1,    26,    -1,    28,
      -1,    -1,     1,    -1,    33,    34,    35,    21,    22,    38,
      39,    -1,    26,    -1,    28,    -1,     1,    -1,    -1,    33,
      34,    35,    21,    22,    38,    39,    -1,    26,    -1,    28,
       1,    -1,    -1,    -1,    33,    34,    35,    22,    23,    38,
      39,    26,    -1,    28,    -1,     1,    -1,    -1,    33,    34,
      35,    22,    -1,    38,    39,    26,    -1,    28,    29,     1,
      -1,    -1,    33,    34,    35,    21,    22,    38,    39,    -1,
      26,    -1,    28,     1,    -1,    -1,    -1,    33,    34,    35,
      22,    -1,    38,    39,    26,    -1,    28,    29,     1,    -1,
      -1,    33,    34,    35,    22,    -1,    38,    39,    26,    -1,
      28,    29,     1,    -1,    -1,    33,    34,    35,    -1,    22,
      38,    39,    -1,    26,    -1,    28,    29,     1,    -1,    -1,
      33,    34,    35,    22,    -1,    38,    39,    26,    -1,    28,
      29,     1,    -1,    -1,    33,    34,    35,    -1,    22,    38,
      39,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    22,     1,    38,    39,    26,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      -1,     1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,     1,
      38,    39,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,    39,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,     1,    38,    39,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,     1,    38,    39,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,     1,    38,    39,    22,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    35,    -1,     1,
      38,    39,    22,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,    39,
      22,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    -1,     1,    38,    39,    22,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    22,     1,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,    39,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    44,    46,    48,    42,     1,    42,     0,
       1,    48,    49,     1,    24,     1,     8,    47,    47,     3,
       1,     3,    42,     1,    42,    24,     1,    24,     4,     4,
       1,     4,     1,    17,    19,    42,    50,    52,    52,    52,
       6,     6,     6,     1,     6,    42,     1,    42,     1,    42,
       1,    42,     1,    29,     1,     3,    55,    55,    55,     7,
       7,     7,     7,     1,     7,    52,    52,     1,    17,    19,
      42,    51,     1,    51,    25,    25,     1,    25,    20,    20,
      20,    20,    20,     1,    20,    42,     1,    42,     1,    42,
       1,    42,    20,     1,    20,    49,    49,    49,    49,     1,
      18,    45,    45,    45,    45,    45,    45,    45,    50,    54,
      54,    54,    22,     1,    22,    21,    21,    21,    21,    21,
      21,     1,    21,     1,    30,    53,    21,    21,     1,    21,
      23,    23,     1,    23,    24,    24,    24,    24,    24,    24,
      24,     1,    24,    50,    50,    24,    24,    24,     1,    24,
      42,    42,    42,     1,    42,     1,    10,    14,    16,    24,
      42,    56,    56,    56,    56,    56,    56,    56,    56,     1,
      56,    53,    53,    52,    52,    52,    52,    52,    20,    22,
      37,    56,     1,    20,     1,    20,     1,    20,    56,     1,
      22,    37,    25,    25,    25,    25,    25,    25,    25,    25,
      25,     1,    25,    56,    56,    56,    56,    56,     1,    12,
      13,    20,    34,    36,    40,    41,    42,    62,    62,    62,
      25,    62,    62,    62,    62,    62,    62,     1,    25,    62,
      62,    62,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,     1,    25,     9,     9,     9,     9,     1,     9,
      17,    42,    62,     1,    17,    42,    62,    41,    62,     1,
      21,    22,    28,    61,    63,    64,    23,    29,    56,    21,
       1,    21,    21,     1,    21,    21,     1,    21,    56,    56,
      23,    29,     1,    23,     1,    29,    62,    62,    62,    62,
      62,    62,    22,    20,    21,    20,    22,     1,    22,     1,
      20,     1,    21,    11,    42,    62,    29,    56,    62,     1,
      11,    42,     1,    20,    33,    34,    35,    38,    59,    26,
      39,    58,    37,    29,    29,     1,    29,    56,     1,    42,
      56,    56,    56,    56,    56,    37,    37,     1,    37,    29,
      29,    29,    29,    29,     1,    29,    62,    21,    21,    62,
      62,    62,    21,     1,    21,    23,    15,     1,    23,    60,
      62,    60,    62,    62,    62,    15,    20,    42,    15,     1,
      15,    62,    62,    62,    62,    25,    25,    25,    25,    25,
      25,     1,    25,    25,    25,    25,     1,    25,    56,    21,
       1,    30,    57,     1,    21,    29,    56,    62,    56,    56,
      56,    29,    29,    29,     1,    29,    55,    55,    55,    55,
      55,    55,    55,    55,    62,    62,    21,    57,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 75 "SyntaxAnalyzer.y"
    { print_symtab();check_main(); printf("Analyze finished with success \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 79 "SyntaxAnalyzer.y"
    { 
                            insert_symbol("main","DECLARATION","METHOD","void",0,class_id);
                            set_param((yyvsp[(4) - (4)]),strcat((yyvsp[(1) - (4)]),"[]"));   
                        ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 83 "SyntaxAnalyzer.y"
    { yyerror (" String is needed  "); YYABORT;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 84 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 85 "SyntaxAnalyzer.y"
    { yyerror (" CLose brackets is needed  "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 86 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 90 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 91 "SyntaxAnalyzer.y"
    { yyerror (" Public is needed  "); YYABORT;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 92 "SyntaxAnalyzer.y"
    { yyerror (" Static is needed  "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 93 "SyntaxAnalyzer.y"
    { yyerror (" Void is needed  "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 94 "SyntaxAnalyzer.y"
    { yyerror (" Main is needed  "); YYABORT;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 95 "SyntaxAnalyzer.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 96 "SyntaxAnalyzer.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 97 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 98 "SyntaxAnalyzer.y"
    { yyerror (" Statement is needed  "); YYABORT;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 99 "SyntaxAnalyzer.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 100 "SyntaxAnalyzer.y"
    { yyerror (" close brackets is needed  "); YYABORT;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 104 "SyntaxAnalyzer.y"
    {
                            insert_symbol((yyvsp[(2) - (2)]),"EXTENSION","CLASS","IDENT",0,class_id);
                            level = 0;
                        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 108 "SyntaxAnalyzer.y"
    { yyerror (" Extends is needed  "); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 110 "SyntaxAnalyzer.y"
    {level = 0;;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 114 "SyntaxAnalyzer.y"
    {   
                            class_id +=1; 
                            lookup_class((yyvsp[(2) - (2)]),class_id);
                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxAnalyzer.y"
    { yyerror (" Class is needed  "); YYABORT;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 119 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 124 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxAnalyzer.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 130 "SyntaxAnalyzer.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                lookup_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,class_id);
                                
                        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 138 "SyntaxAnalyzer.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                lookup_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,class_id);
                        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 145 "SyntaxAnalyzer.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                lookup_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,class_id);
                        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 151 "SyntaxAnalyzer.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 152 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 153 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 154 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 158 "SyntaxAnalyzer.y"
    {
                            lookup_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),class_id);
                            isParam = true;
                        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 163 "SyntaxAnalyzer.y"
    {
                            lookup_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),class_id);
                            isParam = true;
                        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 168 "SyntaxAnalyzer.y"
    {
                            lookup_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),class_id);
                            isParam = true;
                        ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 172 "SyntaxAnalyzer.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 173 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 174 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 175 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 179 "SyntaxAnalyzer.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 184 "SyntaxAnalyzer.y"
    { yyerror (" Comma is needed  "); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 188 "SyntaxAnalyzer.y"
    { isParam = false; level = 1;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 189 "SyntaxAnalyzer.y"
    { isParam = false; level = 1;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 193 "SyntaxAnalyzer.y"
    { yyerror (" Public is needed  "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 194 "SyntaxAnalyzer.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 195 "SyntaxAnalyzer.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 196 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 197 "SyntaxAnalyzer.y"
    { yyerror (" Return is needed  "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 198 "SyntaxAnalyzer.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 199 "SyntaxAnalyzer.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 204 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 205 "SyntaxAnalyzer.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 207 "SyntaxAnalyzer.y"
    { yyerror (" If brackets is needed  "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 208 "SyntaxAnalyzer.y"
    { yyerror (" Open parentheses brackets is needed  "); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 209 "SyntaxAnalyzer.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 210 "SyntaxAnalyzer.y"
    { yyerror (" Else is needed  "); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 212 "SyntaxAnalyzer.y"
    { yyerror (" While is needed  "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 213 "SyntaxAnalyzer.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 214 "SyntaxAnalyzer.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 216 "SyntaxAnalyzer.y"
    { yyerror (" System.out.println is needed  "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 217 "SyntaxAnalyzer.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 218 "SyntaxAnalyzer.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 219 "SyntaxAnalyzer.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 221 "SyntaxAnalyzer.y"
    {
                            lookup_declarations((yyvsp[(1) - (4)]),"ASSIGNMENT","VARIABLE",level,class_id)
                        ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 224 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 225 "SyntaxAnalyzer.y"
    { yyerror (" Equal operator is needed  "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 226 "SyntaxAnalyzer.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 228 "SyntaxAnalyzer.y"
    {
                            lookup_declarations((yyvsp[(1) - (7)]),"ASSIGNMENT","VARIABLE",level,class_id)
                            
                        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 232 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 233 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 234 "SyntaxAnalyzer.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 235 "SyntaxAnalyzer.y"
    { yyerror (" Equal operator is needed  "); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 236 "SyntaxAnalyzer.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 241 "SyntaxAnalyzer.y"
    { yyerror (" Comma is needed  "); YYABORT;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 256 "SyntaxAnalyzer.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 261 "SyntaxAnalyzer.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 268 "SyntaxAnalyzer.y"
    { 
                            method_call_index = insert_symbol((yyvsp[(2) - (2)]),"USE","METHOD","DOT_IDENT",0,class_id);
                        ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 271 "SyntaxAnalyzer.y"
    { yyerror (" Dot is needed  "); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 272 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 276 "SyntaxAnalyzer.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 282 "SyntaxAnalyzer.y"
    {
                            if(method_call_index != -1){
                                remove_param(method_call_index);
                                insert_call_param(method_call_index,"EXP","int");
                            }                              
                        ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 289 "SyntaxAnalyzer.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 295 "SyntaxAnalyzer.y"
    {
                          
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                                insert_call_param(method_call_index,"EXP","bool");
                            }
                                
                        ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 303 "SyntaxAnalyzer.y"
    { yyerror (" Comparison operator is needed  "); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 305 "SyntaxAnalyzer.y"
    {
                            
                            if(method_call_index != -1) {
                                insert_call_param(method_call_index,"EXP","int[]");
                            }
      
                        ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 312 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 313 "SyntaxAnalyzer.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 315 "SyntaxAnalyzer.y"
    {
                            if(method_call_index != -1) {
                                insert_call_param(method_call_index,"EXP","int");
                            }
                
                        ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 321 "SyntaxAnalyzer.y"
    { yyerror (" Dot is needed  "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 322 "SyntaxAnalyzer.y"
    { yyerror (" Length is needed  "); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 324 "SyntaxAnalyzer.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 325 "SyntaxAnalyzer.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 327 "SyntaxAnalyzer.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_call_param(method_call_index,(yyvsp[(1) - (1)]),"int");
                        ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 332 "SyntaxAnalyzer.y"
    {
                            
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_call_param(method_call_index,strcat("-",(yyvsp[(2) - (2)])),"int");
                        ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 338 "SyntaxAnalyzer.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_call_param(method_call_index,(yyvsp[(1) - (1)]),"bool");
                        ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 343 "SyntaxAnalyzer.y"
    {

                            if(method_call_index != -1 && expression_level < 1) 
                              insert_call_param(method_call_index,(yyvsp[(1) - (1)]),"IDENT");

                            lookup_declarations((yyvsp[(1) - (1)]),"USE","VARIABLE",level,class_id)
                        ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 352 "SyntaxAnalyzer.y"
    { yyerror (" New is needed  "); YYABORT;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 353 "SyntaxAnalyzer.y"
    { yyerror (" Integer type is needed  "); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 354 "SyntaxAnalyzer.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 355 "SyntaxAnalyzer.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 357 "SyntaxAnalyzer.y"
    {
                            insert_symbol((yyvsp[(2) - (4)]),"INSTANTIATION","VARIABLE","NEW_IDENT",0,class_id);                          
                        ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 360 "SyntaxAnalyzer.y"
    { yyerror (" New is needed  "); YYABORT;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 361 "SyntaxAnalyzer.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 362 "SyntaxAnalyzer.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 363 "SyntaxAnalyzer.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 365 "SyntaxAnalyzer.y"
    { yyerror (" Not operator is needed  "); YYABORT;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 367 "SyntaxAnalyzer.y"
    { yyerror (" open parentheses is needed  "); YYABORT;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 368 "SyntaxAnalyzer.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 369 "SyntaxAnalyzer.y"
    { yyerror (" Integer Value or boolean value or identifier or this   is needed  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2780 "SyntaxAnalyzer.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 372 "SyntaxAnalyzer.y"
 

    int yyerror(char const *msg) {
        
        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }
