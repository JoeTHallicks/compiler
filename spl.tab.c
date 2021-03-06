
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
#line 1 "spl.y"


/* declare some standard headers to be used to import declarations
   and libraries into the parser. */

#include <stdio.h>
#include <stdlib.h>

/* make forward declarations to avoid compiler warnings */
int yylex (void);
void yyerror (char *);

  /* These constants are used later in the code */
#define SYMTABSIZE     50
#define IDLENGTH       15
#define NOTHING        -1
#define INDENTOFFSET    2

  enum ParseTreeNodeType { PROGRAM, BLOCK, DECLARATION, DECLARATION_BLOCK, TYPE_Node, STATEMENT_LIST, STATEMENT, ASSIGNMENT_STATEMENT, IF_STATEMENT, DO_STATEMENT, WHILE_STATEMENT, FOR_STATEMENT,  NEWLINE_STATEMENT, WRITE_STATEMENT, READ_STATEMENT, OUTPUT_LIST, CONDITIONAL, AND_CONDITIONAL, OR_CONDITIONAL, NOT_CONDITIONAL,  COMPARATOR, EXPRESSION, TERM, Con_VALUE, Exp_VALUE, CONSTANT, CHARACTER_CONSTANT, NUMBER_CONSTANT, MINUS_NUMBER_CONSTANT, FLOAT_CONSTANT, MINUS_FLOAT_CONSTANT, IDENTIFIER_LIST, IDENTIFIER_VALUE} ; 
							
							
                      
  char *NodeName[] = 	{"PROGRAM", "BLOCK", "DECLARATION", "DECLARATION_BLOCK", "TYPE_Node", "STATEMENT_LIST", "STATEMENT",  "ASSIGNMENT_STATEMENT",  "IF_STATEMENT", "DO_STATEMENT", "WHILE_STATEMENT", "FOR_STATEMENT",  "NEWLINE_STATEMENT",  "WRITE_STATEMENT", "READ_STATEMENT", "OUTPUT_LIST", "CONDITIONAL", "AND_CONDITIONAL", "OR_CONDITIONAL", "NOT_CONDITIONAL", "COMPARATOR", "EXPRESSION", "TERM", "Con_VALUE", "Exp_VALUE", "CONSTANT", "CHARACTER_CONSTANT", "NUMBER_CONSTANT",  "MINUS_NUMBER_CONSTANT", "FLOAT_CONSTANT", "MINUS_FLOAT_CONSTANT",  "IDENTIFIER_LIST", "IDENTIFIER_VALUE"};
    
						

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif

/* ------------- parse tree definition --------------------------- */

struct treeNode {
    int  item;
    int  nodeIdentifier;
    struct treeNode *first;
    struct treeNode *second;
    struct treeNode *third;
  };

typedef  struct treeNode TREE_NODE;
typedef  TREE_NODE        *TERNARY_TREE;

/* ------------- forward declarations --------------------------- */

TERNARY_TREE create_node(int,int,TERNARY_TREE,TERNARY_TREE,TERNARY_TREE);

#ifdef DEBUG
	void PrintTree(TERNARY_TREE, int);
#endif
	void getType(TERNARY_TREE);
	void writeCode(TERNARY_TREE);
/* ------------- symbol table definition --------------------------- */

struct symTabNode {
    char identifier[IDLENGTH];
	char tempType;
};
char tempType2;
int writing = 0;
int forLoop = 0;
typedef  struct symTabNode SYMTABNODE;
typedef  SYMTABNODE        *SYMTABNODEPTR;

SYMTABNODEPTR  symTab[SYMTABSIZE]; 

int currentSymTabSize = 0;



/* Line 189 of yacc.c  */
#line 152 "spl.tab.c"

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
     NUMBER = 258,
     FLOAT = 259,
     CHARCON = 260,
     IDENTIFIER = 261,
     SEMICOLON = 262,
     ELSE = 263,
     NOT = 264,
     NOT_EQUAL_TO = 265,
     GREATER_THAN = 266,
     GREATER_THAN_OR_EQUAL_TO = 267,
     IF = 268,
     INTEGER = 269,
     IS = 270,
     CHARACTER = 271,
     COLON = 272,
     COMMA = 273,
     READ = 274,
     REAL = 275,
     DECLARATIONS = 276,
     DIVIDE = 277,
     DO = 278,
     WHILE = 279,
     WRITE = 280,
     BRA = 281,
     BY = 282,
     KET = 283,
     ENDIF = 284,
     ENDFOR = 285,
     LESS_THAN = 286,
     LESS_THAN_OR_EQUAL_TO = 287,
     MULTIPLY = 288,
     STOP = 289,
     FOR = 290,
     AND = 291,
     ASSIGN = 292,
     CODE = 293,
     TYPE = 294,
     PLUS = 295,
     ENDDO = 296,
     ENDP = 297,
     OF = 298,
     TO = 299,
     NEWLINE = 300,
     OR = 301,
     THEN = 302,
     ENDWHILE = 303,
     SUBTRACT = 304,
     EQUAL = 305,
     END = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 89 "spl.y"

    int iVal;
    TERNARY_TREE  tVal;



/* Line 214 of yacc.c  */
#line 246 "spl.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 258 "spl.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNRULES -- Number of states.  */
#define YYNSTATES  119

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    15,    18,    24,    26,    29,    31,
      33,    35,    37,    41,    43,    45,    47,    49,    51,    53,
      55,    59,    65,    73,    79,    85,    97,    99,   104,   109,
     111,   115,   119,   125,   131,   134,   136,   138,   140,   142,
     144,   146,   148,   152,   156,   158,   162,   166,   168,   170,
     174,   176,   178,   180,   183,   185,   188,   190
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,     6,    17,    54,    42,     6,    34,    -1,
      21,    56,    38,    58,    -1,    38,    58,    -1,    75,    43,
      39,    57,     7,    -1,    55,    -1,    55,    56,    -1,    16,
      -1,    14,    -1,    20,    -1,    59,    -1,    59,     7,    58,
      -1,    60,    -1,    61,    -1,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    70,    37,     6,    -1,    13,
      68,    47,    58,    29,    -1,    13,    68,    47,    58,     8,
      58,    29,    -1,    23,    58,    24,    68,    41,    -1,    24,
      68,    23,    58,    48,    -1,    35,     6,    15,    70,    27,
      70,    44,    70,    23,    58,    30,    -1,    45,    -1,    25,
      26,    67,    28,    -1,    19,    26,     6,    28,    -1,    72,
      -1,    67,    18,    72,    -1,    70,    69,    70,    -1,    70,
      69,    70,    36,    68,    -1,    70,    69,    70,    46,    68,
      -1,     9,    68,    -1,    50,    -1,    10,    -1,    31,    -1,
      11,    -1,    32,    -1,    12,    -1,    71,    -1,    71,    40,
      70,    -1,    71,    49,    70,    -1,    72,    -1,    72,    33,
      71,    -1,    72,    22,    71,    -1,     6,    -1,    73,    -1,
      26,    70,    28,    -1,    74,    -1,     5,    -1,     3,    -1,
      49,     3,    -1,     4,    -1,    49,     4,    -1,     6,    -1,
       6,    18,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   131,   135,   142,   147,   151,   157,   161,
     165,   170,   174,   179,   183,   187,   191,   195,   199,   203,
     208,   213,   218,   223,   228,   233,   240,   244,   249,   254,
     258,   263,   267,   272,   277,   282,   286,   290,   294,   298,
     302,   307,   311,   315,   320,   324,   328,   334,   338,   344,
     349,   353,   358,   362,   366,   370,   375,   379
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "FLOAT", "CHARCON",
  "IDENTIFIER", "SEMICOLON", "ELSE", "NOT", "NOT_EQUAL_TO", "GREATER_THAN",
  "GREATER_THAN_OR_EQUAL_TO", "IF", "INTEGER", "IS", "CHARACTER", "COLON",
  "COMMA", "READ", "REAL", "DECLARATIONS", "DIVIDE", "DO", "WHILE",
  "WRITE", "BRA", "BY", "KET", "ENDIF", "ENDFOR", "LESS_THAN",
  "LESS_THAN_OR_EQUAL_TO", "MULTIPLY", "STOP", "FOR", "AND", "ASSIGN",
  "CODE", "TYPE", "PLUS", "ENDDO", "ENDP", "OF", "TO", "NEWLINE", "OR",
  "THEN", "ENDWHILE", "SUBTRACT", "EQUAL", "END", "$accept", "program",
  "block", "declaration", "declaration_block", "type", "statement_list",
  "statement", "assignment_statement", "if_statement", "do_statement",
  "while_statement", "for_statement", "write_statement", "read_statement",
  "output_list", "conditional", "comparator", "expression", "term",
  "value", "constant", "number_constant", "identifier_list", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    56,    57,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      60,    61,    61,    62,    63,    64,    65,    65,    66,    67,
      67,    68,    68,    68,    68,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     2,     5,     1,     2,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     7,     5,     5,    11,     1,     4,     4,     1,
       3,     3,     5,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     1,     1,     3,
       1,     1,     1,     2,     1,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,    56,     6,
       0,     0,    52,    54,    51,    47,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     4,    11,    13,    14,    15,
      16,    17,    18,    19,     0,    41,    44,    48,    50,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    55,     0,     0,     0,     0,     0,
       0,     0,    57,     3,     0,    34,     0,    36,    38,    40,
      37,    39,    35,     0,     0,     0,     0,     0,    29,    49,
       0,    12,    20,    42,    43,    46,    45,     2,     9,     8,
      10,     0,     0,    31,    28,     0,     0,     0,    27,     0,
       5,     0,    21,     0,     0,    23,    24,    30,     0,     0,
      32,    33,     0,    22,     0,     0,     0,     0,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    91,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    77,    45,    73,    34,    35,
      36,    37,    38,    11
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -50
static const yytype_int8 yypact[] =
{
       6,    13,    33,   -19,   -50,    37,    48,     4,    29,    37,
      12,    15,   -50,   -50,   -50,   -50,    11,    23,    48,    11,
      30,    19,    56,   -50,     5,   -50,    62,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,    26,   -36,    -4,   -50,   -50,    64,
      37,   -50,    48,    36,    11,    34,    68,    70,    53,    59,
      19,    57,    69,   -50,   -50,    48,    80,    19,    19,    19,
      19,    55,   -50,   -50,    18,   -50,    48,   -50,   -50,   -50,
     -50,   -50,   -50,    19,    63,    11,    48,    -7,   -50,   -50,
      19,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,    89,    -2,   -10,   -50,    60,    54,    19,   -50,    76,
     -50,    48,   -50,    11,    11,   -50,   -50,   -50,    19,    75,
     -50,   -50,    65,   -50,    19,    83,    48,    77,   -50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -50,   -50,   -50,   -50,    99,   -50,   -11,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,    -9,   -50,   -16,   -20,
     -49,   -50,   -50,    71
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      46,    78,     5,    46,    57,    51,   101,    48,    53,    54,
      49,    97,     1,    58,    12,    13,    14,    15,    59,     6,
      44,    98,    12,    13,    14,    15,   103,   102,    46,    60,
       3,    63,    88,     4,    89,    65,   104,    21,    90,    85,
      86,    83,    84,     8,    81,    21,    39,    40,   107,    47,
      42,    12,    13,    14,    15,    92,    50,    93,    43,    46,
      24,    16,    52,    56,    99,    96,    95,    17,    24,    55,
      61,    18,    19,    20,    21,    64,    74,    75,    67,    68,
      69,    66,    76,    22,    80,    79,    82,    46,    46,    87,
     109,    94,   112,    23,   110,   111,   100,    24,   115,    70,
      71,   105,   106,   108,   113,   117,   116,   118,    41,   114,
       0,    62,     0,     0,     0,     0,     0,     0,    72
};

static const yytype_int8 yycheck[] =
{
      16,    50,    21,    19,    40,    21,     8,    18,     3,     4,
      19,    18,     6,    49,     3,     4,     5,     6,    22,    38,
       9,    28,     3,     4,     5,     6,    36,    29,    44,    33,
      17,    42,    14,     0,    16,    44,    46,    26,    20,    59,
      60,    57,    58,     6,    55,    26,    42,    18,    97,    26,
      38,     3,     4,     5,     6,    66,    26,    73,    43,    75,
      49,    13,     6,    37,    80,    76,    75,    19,    49,     7,
       6,    23,    24,    25,    26,    39,     6,    24,    10,    11,
      12,    47,    23,    35,    15,    28,     6,   103,   104,    34,
     101,    28,   108,    45,   103,   104,     7,    49,   114,    31,
      32,    41,    48,    27,    29,   116,    23,    30,     9,    44,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    53,    17,     0,    21,    38,    54,     6,    55,
      56,    75,     3,     4,     5,     6,    13,    19,    23,    24,
      25,    26,    35,    45,    49,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    70,    71,    72,    73,    74,    42,
      18,    56,    38,    43,     9,    68,    70,    26,    58,    68,
      26,    70,     6,     3,     4,     7,    37,    40,    49,    22,
      33,     6,    75,    58,    39,    68,    47,    10,    11,    12,
      31,    32,    50,    69,     6,    24,    23,    67,    72,    28,
      15,    58,     6,    70,    70,    71,    71,    34,    14,    16,
      20,    57,    58,    70,    28,    68,    58,    18,    28,    70,
       7,     8,    29,    36,    46,    41,    48,    72,    27,    58,
      68,    68,    70,    29,    44,    70,    23,    58,    30
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
#line 120 "spl.y"
    { TERNARY_TREE ParseTree;
			ParseTree = create_node((yyvsp[(1) - (6)].iVal), PROGRAM, (yyvsp[(3) - (6)].tVal) ,NULL, NULL);
		#ifdef DEBUG	
			PrintTree (ParseTree ,0);
		#else
		writeCode(ParseTree);
		#endif
		
		;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 132 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, BLOCK, (yyvsp[(2) - (4)].tVal), (yyvsp[(4) - (4)].tVal), NULL);
			;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 136 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, BLOCK, (yyvsp[(2) - (2)].tVal), NULL, NULL)
			;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 143 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, DECLARATION, (yyvsp[(1) - (5)].tVal), (yyvsp[(4) - (5)].tVal), NULL);
			;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 148 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, DECLARATION_BLOCK, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 152 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, DECLARATION_BLOCK, (yyvsp[(1) - (2)].tVal), (yyvsp[(2) - (2)].tVal), NULL);
			;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 158 "spl.y"
    {
				(yyval.tVal) = create_node(CHARACTER, TYPE_Node, NULL, NULL, NULL);
			;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 162 "spl.y"
    {
				(yyval.tVal) = create_node(INTEGER, TYPE_Node, NULL, NULL, NULL);
			;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 166 "spl.y"
    {
				(yyval.tVal) = create_node(REAL, TYPE_Node, NULL, NULL, NULL);
			;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 171 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT_LIST, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 175 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT_LIST, (yyvsp[(1) - (3)].tVal), (yyvsp[(3) - (3)].tVal), NULL);
			;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 180 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 184 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 188 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 192 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 196 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 200 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 204 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, STATEMENT, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 209 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(3) - (3)].iVal), ASSIGNMENT_STATEMENT, (yyvsp[(1) - (3)].tVal), NULL, NULL);
			;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 214 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, IF_STATEMENT, (yyvsp[(2) - (5)].tVal), (yyvsp[(4) - (5)].tVal), NULL);
			;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 219 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, IF_STATEMENT, (yyvsp[(2) - (7)].tVal), (yyvsp[(4) - (7)].tVal), (yyvsp[(6) - (7)].tVal));
			;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 224 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, DO_STATEMENT, (yyvsp[(2) - (5)].tVal), (yyvsp[(4) - (5)].tVal), NULL)
			;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 229 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, WHILE_STATEMENT, (yyvsp[(2) - (5)].tVal), (yyvsp[(4) - (5)].tVal), NULL)
			;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 235 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(2) - (11)].iVal), FOR_STATEMENT, (yyvsp[(4) - (11)].tVal), (yyvsp[(6) - (11)].tVal),
					 create_node(NOTHING, FOR_STATEMENT, (yyvsp[(8) - (11)].tVal), (yyvsp[(10) - (11)].tVal), NULL))
			;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 241 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, NEWLINE_STATEMENT,NULL,NULL,NULL);
			;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 245 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, WRITE_STATEMENT, (yyvsp[(3) - (4)].tVal), NULL, NULL);
			;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 250 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(3) - (4)].iVal), READ_STATEMENT, NULL,NULL,NULL);
			;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 255 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, OUTPUT_LIST, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 259 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, OUTPUT_LIST, (yyvsp[(1) - (3)].tVal), (yyvsp[(3) - (3)].tVal), NULL);
			;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 264 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, CONDITIONAL, (yyvsp[(1) - (3)].tVal), (yyvsp[(2) - (3)].tVal), (yyvsp[(3) - (3)].tVal));
			;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 268 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, AND_CONDITIONAL, (yyvsp[(1) - (5)].tVal), (yyvsp[(2) - (5)].tVal),
					 create_node(NOTHING, AND_CONDITIONAL, (yyvsp[(3) - (5)].tVal), (yyvsp[(5) - (5)].tVal), NULL));
			;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 273 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, OR_CONDITIONAL, (yyvsp[(1) - (5)].tVal), (yyvsp[(2) - (5)].tVal),
					 create_node(NOTHING, OR_CONDITIONAL, (yyvsp[(3) - (5)].tVal), (yyvsp[(5) - (5)].tVal), NULL));
			;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 278 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, NOT_CONDITIONAL, (yyvsp[(2) - (2)].tVal), NULL, NULL);
			;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 283 "spl.y"
    {
				(yyval.tVal) = create_node(EQUAL, COMPARATOR, NULL, NULL, NULL);
			;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 287 "spl.y"
    {
				(yyval.tVal) = create_node(NOT_EQUAL_TO, COMPARATOR, NULL, NULL, NULL);
			;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 291 "spl.y"
    {
				(yyval.tVal) = create_node(LESS_THAN, COMPARATOR, NULL, NULL, NULL);
			;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 295 "spl.y"
    {
				(yyval.tVal) = create_node(GREATER_THAN, COMPARATOR, NULL, NULL, NULL);
			;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 299 "spl.y"
    {
				(yyval.tVal) = create_node(LESS_THAN_OR_EQUAL_TO, COMPARATOR, NULL, NULL, NULL);
			;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 303 "spl.y"
    {
				(yyval.tVal) = create_node(GREATER_THAN_OR_EQUAL_TO, COMPARATOR, NULL, NULL, NULL);
			;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 308 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING,EXPRESSION, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 312 "spl.y"
    {
				(yyval.tVal) = create_node(PLUS ,EXPRESSION, (yyvsp[(1) - (3)].tVal), (yyvsp[(3) - (3)].tVal), NULL);
			;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 316 "spl.y"
    {
				(yyval.tVal) = create_node(SUBTRACT, EXPRESSION, (yyvsp[(1) - (3)].tVal), (yyvsp[(3) - (3)].tVal), NULL);
			;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 321 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, TERM, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 325 "spl.y"
    {
				(yyval.tVal) = create_node(MULTIPLY, TERM, (yyvsp[(1) - (3)].tVal), (yyvsp[(3) - (3)].tVal), NULL);
			;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 329 "spl.y"
    {
				(yyval.tVal) = create_node(DIVIDE, TERM, (yyvsp[(1) - (3)].tVal), (yyvsp[(3) - (3)].tVal), NULL);
			;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 335 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(1) - (1)].iVal), IDENTIFIER_VALUE, NULL, NULL, NULL);
			;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 341 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, Con_VALUE, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 345 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, Exp_VALUE, (yyvsp[(2) - (3)].tVal), NULL, NULL);
			;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 350 "spl.y"
    {
				(yyval.tVal) = create_node(NOTHING, CONSTANT, (yyvsp[(1) - (1)].tVal), NULL, NULL);
			;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 354 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(1) - (1)].iVal), CHARACTER_CONSTANT, NULL, NULL, NULL);
			;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 359 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(1) - (1)].iVal), NUMBER_CONSTANT, NULL, NULL, NULL);
			;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 363 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(2) - (2)].iVal), MINUS_NUMBER_CONSTANT, NULL, NULL, NULL);
			;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 367 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(1) - (1)].iVal), FLOAT_CONSTANT, NULL, NULL, NULL);
			;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 371 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(2) - (2)].iVal), MINUS_FLOAT_CONSTANT, NULL, NULL, NULL);
			;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 376 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(1) - (1)].iVal), IDENTIFIER_LIST, NULL, NULL, NULL);
			;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 380 "spl.y"
    {
				(yyval.tVal) = create_node((yyvsp[(1) - (3)].iVal),  IDENTIFIER_LIST, (yyvsp[(3) - (3)].tVal), NULL, NULL);
			;}
    break;



/* Line 1455 of yacc.c  */
#line 2067 "spl.tab.c"
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
#line 383 "spl.y"


/* Code for routines for managing the Parse Tree */




TERNARY_TREE create_node(int ival, int case_identifier, TERNARY_TREE p1, TERNARY_TREE  p2, TERNARY_TREE  p3)
{
    TERNARY_TREE t;
    t = (TERNARY_TREE)malloc(sizeof(TREE_NODE));
    t->item = ival;
    t->nodeIdentifier = case_identifier;
    t->first = p1;
    t->second = p2;
    t->third = p3;
    return (t);
}

void getType(TERNARY_TREE t)
{
	if (t == NULL)
	{
		return;
	}
	
	switch(t->nodeIdentifier)
	{
		case(CONSTANT):
			printf("");
			return;
		case(MINUS_FLOAT_CONSTANT):
			printf("minus float");
			return;
		
		case(FLOAT_CONSTANT):

			printf("%s ", symTab[t->item]->identifier);
			return;
		
		case(NUMBER_CONSTANT):
			printf("Number");
			return;
		
		case(MINUS_NUMBER_CONSTANT):
			printf("Minus NUMBER");
			return;		

	}
	getType(t->first);
	getType(t->second);
	getType(t->third);
}

void writeCode(TERNARY_TREE t)
{
			
	if (t == NULL)
	{
		return;
	}
	
	switch(t->nodeIdentifier)
	{
		case (PROGRAM):
			printf("#include <stdio.h>\n\n");
			printf("int main(void) \n{\n");
			writeCode(t->first);
			printf("\n}\n");
			return;
		
		case (BLOCK):

			writeCode(t->first);
			printf("\n");
			writeCode(t->second);
			return;
		
		
		case (IDENTIFIER_LIST):
			if(t->item >= 0 && t->item < SYMTABSIZE)
			{
				printf("%s", symTab[t->item]->identifier);
				symTab[t->item]->tempType = tempType2;
			}
			else
			{
				printf("Unknown IDENTIFIER: %d", t->item);
			}
			if (t->first) 
			{
				printf(",");
				writeCode(t->first);
			}
			return;
		
		case (DECLARATION):
			writeCode(t->second);
			writeCode(t->first);
			printf(";");
			return;
		
		case (DECLARATION_BLOCK):
			writeCode(t->first);
			writeCode(t->second);
			return;

		
		case (TYPE_Node):
			if (t->item == CHARACTER)
			{
				printf("\nchar ");
				tempType2 = 'C';
				break;
			}
			else if (t->item == INTEGER)
			{
				printf("\nint ");
				tempType2 = 'I';
				break;
			}
			else if (t->item == REAL)
			{
				printf("\nfloat ");
				tempType2 = 'R';
				break;
			}
			return;
			
		
		case (ASSIGNMENT_STATEMENT):
			if(t->item >= 0 && t->item < SYMTABSIZE)
			{
				printf("%s", symTab[t->item]->identifier);
			}
			else
			{
				printf("Unknown IDENTIFIER: %d", t->item);
			}
			printf(" = ");
			writeCode(t->first);
			printf(";");
			printf("\n");
			return;
		
		case (IF_STATEMENT):
			printf("if (");
			writeCode(t->first);
			printf(")\n{");
			writeCode(t->second);
			printf("}\n");
			if(t->third)
			{
				printf("else\n{");
				writeCode(t->third);
				printf("}\n");
			}
			return;
		
		case (DO_STATEMENT):
			printf("do\n{");
			writeCode(t->first);
			printf("} while(");
			writeCode(t->second);
			printf(");\n");
			return;
		
		case (WHILE_STATEMENT):
			printf("while (");
			writeCode(t->first);
			printf(") \n{\n");
			writeCode(t->second);
			printf("\n}\n");
			return;
		
		case (FOR_STATEMENT):
			if (forLoop == 0)
			{
				printf("register int _by, _sign;");
			}
			forLoop = 1;
			printf("for (");
			if(t->item >= 0 && t->item < SYMTABSIZE)
			{
				printf("%s", symTab[t->item]->identifier);
			}
			else
			{
				printf("Unknown IDENTIFIER: %d", t->item);
			}
			printf(" = ");
			writeCode(t->first);
			printf("; ");
			printf("_by = ");
			writeCode(t->second);
			printf(", ");
			printf("_sign=(_by == 0 ? 1 : _by/abs(_by)), ");
			printf("(%s-(", symTab[t->item]->identifier);
			writeCode(t->third->first);
			printf("))");
			printf("*_sign <= 0 ;");
			printf("%s", symTab[t->item]->identifier);
			printf("+= _by");
			printf(")\n{");
			writeCode(t->third->second);
			printf("\n}\n");
			return;
		
		case (WRITE_STATEMENT):	
			writing = 1;
			if(t->first)
			{			
				printf("\nprintf(");
				writeCode(t->first);
				printf(");\n");
			}
			writing = 0;
			return;
		
		case (NEWLINE_STATEMENT):
			printf("printf(\"\\n\");\n");
			return;
		
		case (READ_STATEMENT):
			/*printf("scanf(\"%%d\"");*/
			if(t->item >= 0 && t->item < SYMTABSIZE)
			{
				if(symTab[t->item]->tempType == 'C')
				{
					printf("\nscanf(\" %%c\"", symTab[t->item]->tempType);
					printf(",&%s", symTab[t->item]->identifier);
				}
				else if(symTab[t->item]->tempType == 'I')
				{
					printf("\nscanf(\" %%d\"", symTab[t->item]->tempType);
					printf(",&%s", symTab[t->item]->identifier);
				}
				else if(symTab[t->item]->tempType == 'R')
				{
					printf("\nscanf(\" %%f\"", symTab[t->item]->tempType);
					printf(",&%s", symTab[t->item]->identifier);
				}
			}
			else
			{
				printf("Unknown IDENTIFIER: %d", t->item);
			}
			printf(");\n");
			writeCode(t->first);
			return;
			
		case (CONDITIONAL):			
			writeCode(t->first);			
			writeCode(t->second);
			writeCode(t->third);
			return;
			
		case (AND_CONDITIONAL):
			writeCode(t->first);
			writeCode(t->second);
			writeCode(t->third->first);
			printf(" && ");
			writeCode(t->third->second);
			return;
		
		case (OR_CONDITIONAL):
			writeCode(t->first);
			writeCode(t->second);
			writeCode(t->third->first);
			printf(" || ");
			writeCode(t->third->second);
			return;
		
		case (NOT_CONDITIONAL):
			printf("!(");
			writeCode(t->first);
			printf(")");
			return;
		
		case (COMPARATOR):
			if(t->item == EQUAL)
				printf("==");
			else if(t->item == NOT_EQUAL_TO)
				printf("!=");
			else if(t->item == LESS_THAN)
				printf("<");
			else if(t->item == GREATER_THAN)
				printf(">");
			else if(t->item == LESS_THAN_OR_EQUAL_TO)
				printf("<=");
			else if(t->item == GREATER_THAN_OR_EQUAL_TO)
				printf(">=");
			return;

		case (EXPRESSION):
			writeCode(t->first);
			if(t->item == PLUS)
			{
				printf("+");
				writeCode(t->second);
			}
			else if(t->item == SUBTRACT)
			{
				printf("-");
				writeCode(t->second);
			}
			
			return;
		
		case(TERM):
			writeCode(t->first);
			if(t->item == MULTIPLY)
			{
				printf("*");
				writeCode(t->second);
			}
			else if(t->item == DIVIDE)
			{
				printf("/");
				writeCode(t->second);
			}
			return;
		
 

		case(IDENTIFIER_VALUE):
			if(writing == 1)
			{
				if(t->item >= 0 && t->item < SYMTABSIZE)
				{
					if(symTab[t->item]->tempType == 'C')
					{
						printf("\"%%c\",", symTab[t->item]->tempType);
						
					}
					else if(symTab[t->item]->tempType == 'I')
					{
						
						printf("\"%%d\",", symTab[t->item]->tempType);
					}
					else if(symTab[t->item]->tempType == 'R')
					{
						printf("\"%%.2f\",", symTab[t->item]->tempType);
					}
					printf("%s ",symTab[t->item]->identifier);
				}
				else
				{
					printf("Unknown IDENTIFIER: %d", t->item);
				}
			}
			else
			{
				if(t->item >= 0 && t->item < SYMTABSIZE)
				{
					printf("%s ",symTab[t->item]->identifier);
				}
				else
				{
					printf("Unknown IDENTIFIER: %d", t->item);
				}
			}
		
		case(Con_VALUE):
			writeCode(t->first);

			return;
		
		case(Exp_VALUE):
		if (writing == 1)
		{
			printf("\"%%d\",");
			writeCode(t->first);
		}
		else
		{
			printf("(");
			writeCode(t->first);
			printf(")");
		}
			return;

		case CHARACTER_CONSTANT:
			printf("\"%c\"", t->item);
			return;
		
		case NUMBER_CONSTANT:

			printf("%d", t->item);
			return;
			
		case MINUS_NUMBER_CONSTANT:

			printf("-%d ", t->item);
			return;
			
		case FLOAT_CONSTANT:

			printf("%s ", symTab[t->item]->identifier);
			return;
			
		case MINUS_FLOAT_CONSTANT:

			printf("-%s ", symTab[t->item]->identifier);
			return;

			writing = 0;
			return;		
			
	}
	
	writeCode(t->first);
	writeCode(t->second);
	writeCode(t->third);

}
void PrintTree(TERNARY_TREE t, int indent)
{
int i;
	if (t == NULL) 
	{
		return;
	}
		
	
	for(i = indent; i; i--)
	{
		printf(" ");
	}

	switch(t->nodeIdentifier)
	{
		case PROGRAM:
			printf("Identifier: %s ", symTab[t->item]->identifier);
			break;


		case IDENTIFIER_VALUE:
			printf("Identifier: %s ", symTab[t->item]->identifier);
			break;
		
		case IDENTIFIER_LIST:
			printf("Identifier: %s ", symTab[t->item]->identifier);
			break;

		case TYPE_Node:
			if (t->item == CHARACTER)
			{
				printf("Character\n");
				break;
			}
			else if (t->item == INTEGER)
			{
				printf("Integer\n");
				break;
			}
			else if (t->item == REAL)
			{
				printf("Real\n");
				break;
			}
			break;
		
		case ASSIGNMENT_STATEMENT:
			printf("nodeIdentifier: %s ", symTab[t->item]->identifier);	
			break;
		
		case READ_STATEMENT:
			printf("Read: %s ", symTab[t->item]->identifier);
			break;
			
		case CHARACTER_CONSTANT:
			printf("Character: %c ", t->item);
			break;
		
		case NUMBER_CONSTANT:
			printf("Number: %d ", t->item);
			break;
		
		case MINUS_NUMBER_CONSTANT:
			printf("Minus Number: %d ", t->item);
			break;
		
		case FLOAT_CONSTANT:
			printf("Float: %s ", symTab[t->item]->identifier);
			break;
		
		case MINUS_FLOAT_CONSTANT:
			printf("Minus Float: %s ", symTab[t->item]->identifier);
			break;
		
		
	}

	
	if (t->nodeIdentifier < 0 || t->nodeIdentifier > sizeof(NodeName))
	{
		printf("Unknown nodeIdentifier: %d\n", t->nodeIdentifier);
	}
	
	else
	{
		printf("%s\n", NodeName[t->nodeIdentifier]);
	}

	PrintTree(t->first, indent+3);
	PrintTree(t->second, indent+3);
	PrintTree(t->third, indent+3);

}

#include "lex.yy.c"


