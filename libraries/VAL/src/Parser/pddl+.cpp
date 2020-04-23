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
#line 10 "pddl+.y" /* yacc.c:339  */

/*
Error reporting:
Intention is to provide error token on most bracket expressions,
so synchronisation can occur on next CLOSE_BRAC.
Hence error should be generated for innermost expression containing error.
Expressions which cause errors return a NULL values, and parser
always attempts to carry on.
This won't behave so well if CLOSE_BRAC is missing.

Naming conventions:
Generally, the names should be similar to the PDDL2.1 spec.
During development, they have also been based on older PDDL specs,
older PDDL+ and TIM parsers, and this shows in places.

All the names of fields in the semantic value type begin with t_
Corresponding categories in the grammar begin with c_
Corresponding classes have no prefix.

PDDL grammar       yacc grammar      type of corresponding semantic val.

thing+             c_things          thing_list
(thing+)           c_thing_list      thing_list

*/

#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <ctype.h>

// This is now copied locally to avoid relying on installation
// of flex++.

//#include "FlexLexer.h"
//#include <FlexLexer.h>

#include "ptree.h"
#include "parse_error.h"

#define YYDEBUG 1

int yyerror(char *);

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", ((char *)msgid))
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) ((char *) msgid)
# endif
#endif

extern int yylex();

using namespace VAL;


#line 128 "pddl+.cpp" /* yacc.c:339  */

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
    OPEN_BRAC = 258,
    CLOSE_BRAC = 259,
    MODULES = 260,
    OPEN_SQ = 261,
    CLOSE_SQ = 262,
    DOT = 263,
    CLASSES = 264,
    CLASS = 265,
    DEFINE = 266,
    PDDLDOMAIN = 267,
    REQS = 268,
    EQUALITY = 269,
    STRIPS = 270,
    ADL = 271,
    NEGATIVE_PRECONDITIONS = 272,
    TYPING = 273,
    DISJUNCTIVE_PRECONDS = 274,
    EXT_PRECS = 275,
    UNIV_PRECS = 276,
    QUANT_PRECS = 277,
    COND_EFFS = 278,
    FLUENTS = 279,
    OBJECTFLUENTS = 280,
    NUMERICFLUENTS = 281,
    ACTIONCOSTS = 282,
    TIME = 283,
    DURATIVE_ACTIONS = 284,
    DURATION_INEQUALITIES = 285,
    CONTINUOUS_EFFECTS = 286,
    DERIVED_PREDICATES = 287,
    TIMED_INITIAL_LITERALS = 288,
    PREFERENCES = 289,
    CONSTRAINTS = 290,
    ACTION = 291,
    PROCESS = 292,
    EVENT = 293,
    DURATIVE_ACTION = 294,
    DERIVED = 295,
    CONSTANTS = 296,
    PREDS = 297,
    FUNCTIONS = 298,
    TYPES = 299,
    ARGS = 300,
    PRE = 301,
    CONDITION = 302,
    PREFERENCE = 303,
    START_PRE = 304,
    END_PRE = 305,
    EFFECTS = 306,
    INITIAL_EFFECT = 307,
    FINAL_EFFECT = 308,
    INVARIANT = 309,
    DURATION = 310,
    AT_START = 311,
    AT_END = 312,
    OVER_ALL = 313,
    AND = 314,
    OR = 315,
    EXISTS = 316,
    FORALL = 317,
    IMPLY = 318,
    NOT = 319,
    WHEN = 320,
    WHENEVER = 321,
    EITHER = 322,
    PROBLEM = 323,
    FORDOMAIN = 324,
    INITIALLY = 325,
    OBJECTS = 326,
    GOALS = 327,
    EQ = 328,
    LENGTH = 329,
    SERIAL = 330,
    PARALLEL = 331,
    METRIC = 332,
    MINIMIZE = 333,
    MAXIMIZE = 334,
    HASHT = 335,
    DURATION_VAR = 336,
    TOTAL_TIME = 337,
    INCREASE = 338,
    DECREASE = 339,
    SCALE_UP = 340,
    SCALE_DOWN = 341,
    ASSIGN = 342,
    GREATER = 343,
    GREATEQ = 344,
    LESS = 345,
    LESSEQ = 346,
    Q = 347,
    COLON = 348,
    NUMBER = 349,
    ALWAYS = 350,
    SOMETIME = 351,
    WITHIN = 352,
    ATMOSTONCE = 353,
    SOMETIMEAFTER = 354,
    SOMETIMEBEFORE = 355,
    ALWAYSWITHIN = 356,
    HOLDDURING = 357,
    HOLDAFTER = 358,
    ISVIOLATED = 359,
    AFTER = 360,
    BOGUS = 361,
    CONTROL = 362,
    SUPPLYDEMAND = 363,
    SUPPLYDEMAND_REQ = 364,
    NAMETAG = 365,
    AXIOM = 366,
    DOMAIN_AXIOMS = 367,
    NAME = 368,
    FUNCTION_SYMBOL = 369,
    INTVAL = 370,
    FLOATVAL = 371,
    AT_TIME = 372,
    HYPHEN = 373,
    PLUS = 374,
    MUL = 375,
    DIV = 376,
    UMINUS = 377
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 72 "pddl+.y" /* yacc.c:355  */

    parse_category* t_parse_category;

    effect_lists* t_effect_lists;
    effect* t_effect;
    simple_effect* t_simple_effect;
    cond_effect*   t_cond_effect;
    forall_effect* t_forall_effect;
    timed_effect* t_timed_effect;
	supplied_effect* t_supplied_effect;

    quantifier t_quantifier;
    metric_spec*  t_metric;
    optimization t_optimization;

    symbol* t_symbol;
    var_symbol*   t_var_symbol;
    pddl_type*    t_type;
    pred_symbol*  t_pred_symbol;
    func_symbol*  t_func_symbol;
    const_symbol* t_const_symbol;
    class_symbol* t_class;

    parameter_symbol_list* t_parameter_symbol_list;
    var_symbol_list* t_var_symbol_list;
    const_symbol_list* t_const_symbol_list;
    pddl_type_list* t_type_list;

    proposition* t_proposition;
    pred_decl* t_pred_decl;
    pred_decl_list* t_pred_decl_list;
    func_decl* t_func_decl;
    func_decl_list* t_func_decl_list;

    goal* t_goal;
    con_goal * t_con_goal;
    goal_list* t_goal_list;

    func_term* t_func_term;
    assignment* t_assignment;
    expression* t_expression;
    num_expression* t_num_expression;
    assign_op t_assign_op;
    comparison_op t_comparison_op;

    structure_def* t_structure_def;
    structure_store* t_structure_store;

    action* t_action_def;
    axiom* t_axiom_def;
    event* t_event_def;
    process* t_process_def;
    durative_action* t_durative_action_def;
    derivation_rule* t_derivation_rule;

    problem* t_problem;
    length_spec* t_length_spec;

    domain* t_domain;

    pddl_req_flag t_pddl_req_flag;

    plan* t_plan;
    plan_step* t_step;

    int ival;
    double fval;

    char* cp;
    int t_dummy;

    var_symbol_table * vtab;

  class_def * t_class_def;
  //  classes_list* t_classes;


#line 366 "pddl+.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 383 "pddl+.cpp" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1027

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  123
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  369
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  858

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   258,   258,   259,   260,   264,   270,   277,   278,   279,
     280,   282,   284,   286,   287,   290,   294,   297,   299,   301,
     302,   306,   313,   320,   321,   326,   328,   333,   335,   343,
     351,   353,   361,   366,   368,   372,   374,   381,   381,   384,
     397,   406,   415,   422,   428,   435,   437,   443,   452,   462,
     467,   468,   472,   473,   481,   488,   497,   503,   505,   507,
     514,   520,   524,   528,   532,   537,   544,   549,   551,   555,
     557,   561,   574,   576,   578,   580,   583,   587,   593,   595,
     601,   607,   608,   610,   612,   621,   622,   623,   624,   625,
     629,   630,   634,   636,   638,   645,   646,   647,   649,   653,
     655,   663,   665,   673,   678,   683,   686,   693,   694,   699,
     701,   703,   707,   711,   717,   721,   725,   731,   733,   741,
     746,   752,   753,   757,   758,   762,   764,   766,   773,   774,
     775,   777,   782,   784,   786,   788,   790,   795,   801,   807,
     812,   813,   817,   818,   820,   821,   822,   826,   828,   830,
     832,   837,   839,   842,   845,   851,   852,   853,   861,   865,
     868,   872,   877,   884,   889,   894,   899,   904,   906,   908,
     910,   912,   917,   919,   921,   923,   925,   927,   928,   929,
     933,   935,   937,   943,   944,   947,   950,   952,   955,   972,
     974,   976,   982,   983,   984,   985,   986,   998,  1005,  1007,
    1011,  1012,  1016,  1018,  1020,  1022,  1026,  1031,  1033,  1035,
    1037,  1044,  1046,  1051,  1053,  1057,  1062,  1064,  1069,  1071,
    1074,  1076,  1078,  1080,  1082,  1084,  1086,  1088,  1090,  1092,
    1094,  1096,  1103,  1105,  1110,  1112,  1116,  1118,  1121,  1124,
    1127,  1130,  1136,  1138,  1143,  1145,  1155,  1162,  1169,  1174,
    1179,  1184,  1186,  1193,  1195,  1202,  1204,  1211,  1213,  1220,
    1221,  1225,  1226,  1227,  1228,  1229,  1230,  1231,  1234,  1243,
    1249,  1258,  1269,  1276,  1286,  1293,  1304,  1310,  1320,  1326,
    1328,  1331,  1349,  1356,  1358,  1360,  1364,  1366,  1371,  1374,
    1378,  1380,  1382,  1384,  1389,  1394,  1399,  1400,  1402,  1403,
    1405,  1407,  1408,  1409,  1410,  1411,  1413,  1416,  1419,  1420,
    1421,  1423,  1432,  1434,  1436,  1439,  1441,  1443,  1445,  1447,
    1449,  1450,  1456,  1460,  1465,  1477,  1484,  1485,  1486,  1487,
    1488,  1490,  1492,  1493,  1496,  1499,  1502,  1505,  1509,  1511,
    1518,  1521,  1525,  1532,  1533,  1538,  1539,  1540,  1541,  1542,
    1544,  1548,  1549,  1550,  1551,  1555,  1556,  1561,  1562,  1568,
    1571,  1573,  1576,  1580,  1584,  1590,  1594,  1600,  1608,  1609
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPEN_BRAC", "CLOSE_BRAC", "MODULES",
  "OPEN_SQ", "CLOSE_SQ", "DOT", "CLASSES", "CLASS", "DEFINE", "PDDLDOMAIN",
  "REQS", "EQUALITY", "STRIPS", "ADL", "NEGATIVE_PRECONDITIONS", "TYPING",
  "DISJUNCTIVE_PRECONDS", "EXT_PRECS", "UNIV_PRECS", "QUANT_PRECS",
  "COND_EFFS", "FLUENTS", "OBJECTFLUENTS", "NUMERICFLUENTS", "ACTIONCOSTS",
  "TIME", "DURATIVE_ACTIONS", "DURATION_INEQUALITIES",
  "CONTINUOUS_EFFECTS", "DERIVED_PREDICATES", "TIMED_INITIAL_LITERALS",
  "PREFERENCES", "CONSTRAINTS", "ACTION", "PROCESS", "EVENT",
  "DURATIVE_ACTION", "DERIVED", "CONSTANTS", "PREDS", "FUNCTIONS", "TYPES",
  "ARGS", "PRE", "CONDITION", "PREFERENCE", "START_PRE", "END_PRE",
  "EFFECTS", "INITIAL_EFFECT", "FINAL_EFFECT", "INVARIANT", "DURATION",
  "AT_START", "AT_END", "OVER_ALL", "AND", "OR", "EXISTS", "FORALL",
  "IMPLY", "NOT", "WHEN", "WHENEVER", "EITHER", "PROBLEM", "FORDOMAIN",
  "INITIALLY", "OBJECTS", "GOALS", "EQ", "LENGTH", "SERIAL", "PARALLEL",
  "METRIC", "MINIMIZE", "MAXIMIZE", "HASHT", "DURATION_VAR", "TOTAL_TIME",
  "INCREASE", "DECREASE", "SCALE_UP", "SCALE_DOWN", "ASSIGN", "GREATER",
  "GREATEQ", "LESS", "LESSEQ", "Q", "COLON", "NUMBER", "ALWAYS",
  "SOMETIME", "WITHIN", "ATMOSTONCE", "SOMETIMEAFTER", "SOMETIMEBEFORE",
  "ALWAYSWITHIN", "HOLDDURING", "HOLDAFTER", "ISVIOLATED", "AFTER",
  "BOGUS", "CONTROL", "SUPPLYDEMAND", "SUPPLYDEMAND_REQ", "NAMETAG",
  "AXIOM", "DOMAIN_AXIOMS", "NAME", "FUNCTION_SYMBOL", "INTVAL",
  "FLOATVAL", "AT_TIME", "HYPHEN", "PLUS", "MUL", "DIV", "UMINUS",
  "$accept", "mystartsymbol", "c_domain", "c_preamble", "c_domain_name",
  "c_new_class", "c_class", "c_classes", "c_class_seq",
  "c_domain_require_def", "c_reqs", "c_pred_decls", "c_pred_decl",
  "c_new_pred_symbol", "c_pred_symbol", "c_init_pred_symbol",
  "c_func_decls", "c_func_decl", "c_ntype", "c_new_func_symbol",
  "c_typed_var_list", "c_control_params_list", "c_var_symbol_list",
  "c_typed_consts", "c_const_symbols", "c_new_const_symbols",
  "c_typed_types", "c_parameter_symbols", "c_declaration_var_symbol",
  "c_var_symbol", "c_const_symbol", "c_new_const_symbol", "c_either_type",
  "c_new_primitive_type", "c_primitive_type", "c_new_primitive_types",
  "c_primitive_types", "c_init_els", "c_supply_demand", "c_demand",
  "c_timed_initial_literal", "c_effects", "c_effect", "c_a_effect",
  "c_p_effect", "c_p_effects", "c_conj_effect", "c_da_effect",
  "c_da_effects", "c_timed_effect", "c_cts_only_timed_effect",
  "c_da_cts_only_effect", "c_da_cts_only_effects", "c_a_effect_da",
  "c_p_effect_da", "c_p_effects_da", "c_f_assign_da", "c_proc_effect",
  "c_proc_effects", "c_f_exp_da", "c_binary_expr_da",
  "c_duration_constraint", "c_d_op", "c_d_value", "c_duration_constraints",
  "c_neg_simple_effect", "c_pos_simple_effect", "c_init_neg_simple_effect",
  "c_init_pos_simple_effect", "c_forall_effect", "c_cond_effect",
  "c_assignment", "c_f_exp", "c_f_exp_t", "c_number", "c_f_head",
  "c_ground_f_head", "c_comparison_op", "c_pre_goal_descriptor",
  "c_pref_con_goal", "c_pref_goal", "c_pref_con_goal_list",
  "c_pref_goal_descriptor", "c_constraint_goal_list", "c_constraint_goal",
  "c_name_or_goal_descriptor", "c_goal_descriptor",
  "c_pre_goal_descriptor_list", "c_goal_list", "c_forall", "c_exists",
  "c_proposition", "c_derived_proposition", "c_init_proposition",
  "c_predicates", "c_functions_def", "c_constraints_def",
  "c_constraints_probdef", "c_structure_defs", "c_structure_def",
  "c_class_def", "c_rule_head", "c_derivation_rule", "c_action_def",
  "c_axiom_def", "c_event_def", "c_process_def", "c_control",
  "c_durative_action_def", "c_da_def_body", "c_da_gd", "c_da_gds",
  "c_timed_gd", "c_args_head", "c_require_key", "c_domain_constants",
  "c_type_names", "c_problem", "c_problem_body", "c_objects",
  "c_initial_state", "c_goals", "c_goal_spec", "c_metric_spec",
  "c_length_spec", "c_optimization", "c_ground_f_exp",
  "c_binary_ground_f_exp", "c_binary_ground_f_pexps",
  "c_binary_ground_f_mexps", "c_plan", "c_step_t_d", "c_step_d", "c_step",
  "c_float", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377
};
# endif

#define YYPACT_NINF -610

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-610)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,    32,   220,    31,  -610,  -610,    24,    46,    30,    30,
    -610,   -68,  -610,  -610,  -610,  -610,   101,   -21,     2,   393,
      24,    24,    35,   241,   174,    80,    22,  -610,   396,   225,
     259,   259,   259,   259,   259,   276,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,   259,   259,  -610,   255,    35,   263,
    -610,   272,  -610,   295,   193,   197,   544,   409,    53,    60,
      73,    81,  -610,   207,   450,   487,  -610,    93,   321,  -610,
    -610,  -610,  -610,  -610,  -610,   251,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,   329,  -610,   193,   339,  -610,   343,   363,
     690,   384,   541,   407,   410,   379,   413,   379,   426,   379,
     438,   379,  -610,   443,   346,   207,   464,    86,   466,   474,
     475,   367,   483,   246,   488,  -610,   503,   153,   505,   403,
    -610,  -610,   454,   519,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,   505,   524,  -610,   505,   505,   267,
     505,   505,   505,   267,   267,   267,     9,   419,   543,  -610,
    -610,   548,  -610,   554,  -610,   577,  -610,   589,  -610,    34,
    -610,  -610,   540,  -610,   510,  -610,  -610,  -610,    87,  -610,
    -610,  -610,  -610,    34,  -610,  -610,   510,  -610,  -610,   510,
     747,   621,  -610,   515,  -610,   641,   501,  -610,   648,   654,
    -610,  -610,   505,   657,   505,   505,   505,   267,   505,  -610,
       9,  -610,   505,   510,   510,   510,   510,   510,   599,  -610,
     207,   207,  -610,   557,   693,   581,   724,  -610,   510,  -610,
    -610,   746,   749,   505,   505,  -610,   505,   505,   142,  -610,
    -610,  -610,  -610,  -610,   117,   700,   753,  -610,   758,  -610,
    -610,  -610,  -610,  -610,   765,  -610,   766,   767,   505,   505,
     769,   775,   776,   777,   783,   784,   785,   797,  -610,  -610,
    -610,  -610,   510,  -610,    34,  -610,   809,  -610,  -610,   768,
    -610,  -610,   527,   531,   505,   811,   158,   513,   705,  -610,
     117,  -610,  -610,   510,   510,   816,  -610,  -610,  -610,   823,
     824,  -610,  -610,  -610,   524,   788,   795,   801,   722,    97,
    -610,   510,   510,   730,   846,  -610,  -610,  -610,   847,  -610,
    -610,   737,  -610,   844,  -610,   117,   117,   117,   117,   845,
    -610,   850,   851,   852,   378,   816,   816,   853,   816,   816,
     816,   816,   816,  -610,  -610,   854,   846,   505,   505,   856,
     806,  -610,  -610,  -610,  -610,   770,  -610,   290,   812,  -610,
    -610,  -610,  -610,  -610,   168,   171,    75,   117,   117,   117,
     748,  -610,   505,   505,   455,  -610,   207,  -610,   324,    21,
     846,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
     814,   815,   817,   190,   864,  -610,  -610,    38,   533,   866,
     867,  -610,  -610,  -610,   868,   869,   870,   871,  -610,   872,
     873,   874,   639,   875,  -610,   580,   876,   756,   771,   877,
    -610,  -610,   106,   878,   867,   880,   867,   881,   772,   269,
    -610,   505,   883,  -610,  -610,  -610,   606,   510,   192,   884,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
     204,  -610,  -610,  -610,    65,   886,   888,  -610,   194,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,    20,   889,  -610,   647,
    -610,  -610,  -610,  -610,   890,  -610,   891,   209,   892,   893,
    -610,   790,   895,   896,  -610,  -610,  -610,  -610,   800,    42,
     897,  -610,  -610,  -610,   898,   516,   900,   505,   901,  -610,
    -610,   524,   902,  -610,   613,  -610,   510,   904,    17,   787,
    -610,  -610,  -610,  -610,   793,  -610,   905,   792,  -610,  -610,
     106,   106,   106,   106,   906,  -610,  -610,  -610,    17,    17,
    -610,  -610,   190,   256,   256,   644,   830,  -610,   909,   910,
    -610,   846,   911,   416,   912,   914,  -610,  -610,  -610,   914,
     914,  -610,   153,   915,   914,   510,   916,  -610,  -610,  -610,
     917,   805,   918,   536,   267,   505,   665,   221,   919,  -610,
     920,   226,   248,   106,   106,   106,   106,  -610,   672,   147,
     147,  -610,   822,   833,  -610,  -610,   117,   328,  -610,  -610,
     336,  -610,  -610,  -610,   922,   872,  -610,  -610,    17,    17,
      17,    17,    17,  -610,  -610,  -610,  -610,  -610,   923,   924,
    -610,   926,  -610,   927,    29,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,   106,  -610,   106,  -610,  -610,  -610,  -610,   810,
    -610,   928,   929,   855,   857,   930,  -610,    66,   505,   505,
     505,  -610,   931,   934,   934,  -610,   909,   505,    17,    17,
     936,  -610,   674,   117,   117,   117,   117,   117,  -610,   867,
     695,   937,  -610,   468,  -610,   914,   267,  -610,  -610,    89,
    -610,  -610,   117,   117,  -610,   939,   940,   941,   942,   943,
     676,  -610,   469,   944,  -610,  -610,  -610,  -610,   945,   682,
     910,   947,   100,   100,   510,   691,  -610,  -610,  -610,  -610,
     948,   949,   950,   951,   952,   953,    72,   886,   955,  -610,
     956,   914,   117,   860,   957,   958,   959,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,    17,    17,    17,    17,    17,  -610,
    -610,  -610,  -610,   960,   282,  -610,   961,   703,   962,   963,
     964,  -610,  -610,  -610,  -610,  -610,  -610,   524,   965,   685,
     510,  -610,   966,   967,   968,   969,   970,  -610,   723,   126,
     126,   126,   126,   126,  -610,   971,  -610,   505,    17,    17,
     973,  -610,    89,  -610,  -610,   910,   974,  -610,  -610,   975,
    -610,  -610,  -610,  -610,  -610,   699,  -610,  -610,  -610,  -610,
     712,   172,   976,  -610,  -610,  -610,   977,   978,   979,   980,
    -610,   727,   947,   147,   147,   510,   121,   981,  -610,   926,
     126,   126,   126,   126,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,   982,   983,   984,   985,  -610,   986,   126,
     126,   126,   126,  -610,  -610,  -610,   947,  -610,   987,   988,
     989,   990,   991,  -610,  -610,  -610,  -610,  -610
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     362,     0,     0,     0,     2,     3,     4,     0,   362,   362,
       1,     0,   369,   368,   359,   364,   366,     0,     0,     0,
     361,   360,    51,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    14,   260,   267,   266,   261,
     262,   263,   264,   265,     0,     0,    62,     0,    51,     0,
     363,     0,   325,     0,    20,     0,     0,     0,     0,     0,
       0,     0,   269,    53,     0,     0,    68,     0,     0,     5,
      13,     7,    10,    11,    12,     0,   259,     9,     8,   367,
      50,   365,    15,     0,    16,    20,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,     0,    49,    53,     0,     0,     0,    26,
       0,     0,     0,    56,     0,   295,     0,     0,     0,     0,
      19,    18,     0,     0,    22,    21,   310,   296,   297,   311,
     299,   298,   300,   301,   302,   312,   303,   304,   308,   309,
     307,   306,   305,   314,   315,   316,   317,   318,   319,   320,
     313,   321,    23,   256,     0,     0,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
     272,     0,   278,     0,   276,     0,   282,     0,   322,     0,
      52,   252,     0,    29,    46,   251,    25,   254,     0,   253,
      33,   323,    65,     0,    67,   274,    46,    30,    31,    46,
       0,     0,   234,     0,   268,     0,     0,   217,     0,     0,
     183,   184,     0,     0,     0,     0,     0,     0,     0,   233,
       0,   232,     0,    46,    46,    46,    46,    46,     0,    66,
      53,    53,    28,     0,     0,    42,     0,    39,    46,    68,
      68,     0,     0,     0,     0,   247,     0,     0,   196,   192,
     193,   194,   195,    59,     0,     0,     0,   270,     0,   220,
     218,   216,   221,   222,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    48,
      47,    60,    46,    27,     0,    36,     0,    55,    54,     0,
     249,   245,     0,     0,     0,     0,     0,     0,     0,   187,
       0,   177,   179,    46,    46,   333,   223,   225,   226,     0,
       0,   229,   230,   231,     0,     0,     0,     0,   280,     0,
      45,    46,    46,    38,     0,   236,   244,   237,     0,   235,
     248,     0,    57,    59,    59,     0,     0,     0,     0,     0,
     178,     0,     0,     0,     0,   333,   333,     0,   333,   333,
     333,   333,   333,   227,   228,     0,     0,     0,     0,     0,
       0,    64,    69,    41,    40,     0,    35,     0,     0,   197,
     215,   238,    61,    58,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,    76,    53,   336,     0,     0,
       0,   326,   330,   324,   327,   328,   329,   331,   332,   219,
       0,     0,     0,    44,     0,    37,   201,     0,     0,     0,
       0,   186,   185,   172,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
     343,   344,     0,     0,     0,     0,     0,     0,     0,     0,
     285,     0,     0,   200,   243,   215,     0,    46,     0,     0,
      85,    87,    86,    89,    88,   162,   174,   173,   175,   176,
       0,   239,   240,   258,     0,     0,     0,   257,     0,   335,
      75,    74,    73,    72,   164,   334,     0,     0,   339,     0,
     348,   191,   347,   346,     0,   337,     0,     0,     0,     0,
     279,     0,     0,     0,   160,   157,   156,   155,     0,     0,
       0,   213,   198,   242,     0,     0,     0,     0,     0,   273,
     188,     0,     0,   212,     0,   206,    46,     0,     0,     0,
      32,    76,    59,   341,     0,   342,     0,     0,    59,    59,
       0,     0,     0,     0,     0,   338,   271,   141,     0,     0,
     277,   275,    44,     0,     0,     0,     0,   281,     0,     0,
     214,     0,     0,     0,     0,    84,    91,    92,    93,    84,
      84,    94,     0,     0,    84,    46,     0,   202,   204,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   350,
       0,     0,     0,     0,     0,     0,     0,   345,     0,     0,
       0,    43,     0,     0,   151,   159,     0,     0,   284,   286,
       0,   283,   105,   106,     0,     0,   100,    98,     0,     0,
       0,     0,     0,    99,    81,    83,    82,   161,     0,     0,
     203,     0,   163,     0,     0,    80,   250,   340,   349,   190,
     189,   352,   355,   351,   357,   353,   354,   139,   140,     0,
     182,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   289,     0,     0,     0,   108,     0,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,     0,   166,     0,
       0,     0,    71,     0,    77,    84,     0,   356,   358,     0,
     137,   138,     0,     0,   152,     0,     0,     0,     0,     0,
       0,   113,     0,     0,   124,   127,   125,   126,     0,     0,
       0,     0,     0,     0,    46,     0,    90,    95,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,    84,     0,     0,     0,     0,     0,   294,   290,   291,
     292,   287,   288,   131,     0,     0,     0,     0,     0,   109,
     110,   101,   107,     0,     0,   120,     0,     0,     0,     0,
       0,   168,   169,   170,   171,   167,   165,     0,     0,     0,
      46,    79,     0,     0,     0,     0,     0,   293,     0,     0,
       0,     0,     0,     0,   103,     0,   122,     0,     0,     0,
       0,   104,     0,   111,   112,     0,     0,   207,   209,     0,
      78,   180,   181,   153,   154,     0,   123,   130,   128,   129,
       0,     0,     0,   142,   144,   145,     0,     0,     0,     0,
     116,     0,     0,     0,     0,    46,     0,     0,   208,     0,
       0,     0,     0,     0,   143,   146,   133,   134,   135,   136,
     132,   117,   121,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,   119,   114,   115,     0,   210,     0,     0,
       0,     0,     0,   148,   147,   149,   150,   118
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -610,  -610,  -610,   574,  -610,  -610,   946,  -610,   858,   245,
    -610,   842,  -610,  -610,   879,  -610,  -610,  -610,  -610,  -610,
    -161,   417,  -278,  -212,   954,   894,   493,  -305,  -610,  -610,
     273,  -610,   -72,  -610,  -154,  -610,  -610,   456,  -610,  -610,
    -610,  -534,  -425,  -610,  -610,  -610,  -610,  -609,  -610,  -610,
    -610,  -566,  -610,   344,  -610,  -610,   229,   412,  -610,  -327,
    -610,   458,   202,    76,  -610,  -350,  -339,  -610,  -610,  -400,
    -394,  -536,  -181,  -575,  -158,  -149,  -610,  -610,  -323,  -382,
     185,   288,  -610,  -610,   -57,   786,  -110,  -610,   763,   -89,
    -610,  -353,  -610,   491,  -610,   921,  -610,  -610,  -610,   992,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -413,  -610,  -571,   372,  -610,  -610,  -610,  -610,   494,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -415,  -610,   380,   376,
     739,  -610,   993,  -610,   995
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    29,    19,    85,   339,    30,    86,    31,
      90,   108,   109,   184,   253,   522,   111,   190,   366,   238,
     234,   437,   235,   103,    47,   104,   112,   296,   282,   373,
     332,   105,   230,   194,   231,   113,   319,   425,   470,   674,
     471,   554,   449,   555,   556,   662,   450,   601,   699,   602,
     745,   746,   811,   693,   694,   768,   695,   488,   588,   802,
     803,   440,   498,   645,   545,   557,   558,   472,   473,   559,
     560,   561,   646,   641,   301,   302,   483,   254,   368,   513,
     671,   514,   369,   206,   355,   220,   370,   446,   292,   508,
     256,   202,   118,   474,    32,    33,    34,   346,    35,    36,
      37,    68,    38,    39,    40,    41,    42,   360,    43,   499,
     598,   690,   599,   116,   152,    44,    45,     5,   347,   348,
     349,   390,   350,   351,   352,   432,   632,   534,   633,   635,
       6,    14,    15,    16,    17
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,   212,   423,   168,   320,   216,   217,   218,   201,   486,
     453,   489,   200,   603,    25,   642,   454,   484,   279,   280,
     573,   614,   429,    52,   523,   615,   616,    11,   374,   375,
     618,    10,   673,   400,   453,   241,   453,   228,   242,   240,
     454,   200,   454,     7,   205,    22,   547,   208,   209,    18,
     213,   214,   215,   676,    94,     1,   221,   455,     2,   269,
     451,    96,   273,   274,   275,   276,   277,   433,    92,   673,
      26,   452,    24,   300,    98,    92,   686,   286,   297,   413,
       2,   455,   100,   455,   451,   444,   451,   182,   236,   548,
     742,   743,   297,   549,   114,   452,   524,   452,   207,   430,
     431,   361,   264,   747,   266,   267,   268,    23,   270,   479,
     221,   255,   272,   460,   726,   583,   584,   585,   586,   341,
     297,   239,   219,   503,   297,   438,   709,   748,   749,   800,
     322,   299,   569,   291,   291,    53,   294,   295,   115,    12,
      13,   720,   342,   343,   210,   211,   -30,   229,    46,   261,
     639,   441,   455,   563,   376,   377,   378,   379,   309,   310,
     363,   364,   330,   603,   603,   362,    95,   298,   631,   722,
     634,   636,   411,    97,   426,   412,   817,    11,   511,   685,
     640,   298,   326,   326,   328,   757,    99,   762,   480,   299,
     210,   211,   298,    51,   101,   414,   415,   416,   417,   183,
     237,   764,   455,   299,   210,   211,   455,   455,   510,   298,
     229,   455,   321,   298,   299,   210,   211,   577,   801,   634,
     481,   210,   211,   581,   582,   626,   197,   640,   604,    69,
     629,   299,   210,   211,   -30,   299,   210,   211,   834,   835,
     299,   210,   211,   700,   715,   832,   833,   401,   402,   603,
     331,   505,   630,   824,   156,   -30,   506,   507,   517,    79,
     331,    55,    28,   331,   438,   197,   198,   518,   537,   453,
      81,    46,   419,   420,   482,   454,    82,   732,   409,    75,
     852,    46,   233,   775,    46,   825,   504,    58,    59,    60,
      61,    62,   538,   539,   406,    48,   331,   442,   445,    83,
     455,   455,   519,   696,   696,   198,    84,   520,   -46,   455,
      87,   521,   707,   331,   697,   697,   455,    46,   331,   451,
     102,    48,   455,   708,   117,   492,   493,   424,   494,   495,
     452,   500,   119,   466,    46,     8,     9,   652,   407,    46,
     331,   776,   495,   121,   156,   496,   122,   497,   777,   408,
     244,   245,   156,   246,   247,   570,    12,    13,   496,   192,
     497,    46,    67,   248,   193,   778,   779,   124,   455,   574,
     188,   189,   482,   482,   482,   482,   647,   569,   249,   250,
     251,   252,   210,   211,   648,   649,   650,   651,   153,   589,
     590,    56,   653,   654,    27,   655,    28,   564,   156,   427,
     428,   656,   657,   198,   619,    54,    55,   512,   515,    56,
      91,   169,    92,   384,   170,   455,   623,   172,   798,   658,
     659,   610,   611,   612,   115,   482,   482,   482,   482,   799,
     174,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,   605,   176,   806,   807,   808,   809,   178,   385,   386,
     387,   106,   388,   107,   566,   389,   421,   424,   422,   663,
     664,   665,   666,   667,   179,   624,   675,   171,   181,   173,
     185,   175,   203,   177,   482,   607,   482,   107,   156,   187,
     506,   507,   710,   711,   712,   713,   714,   191,   110,   197,
     -34,   -34,   195,   839,   840,   841,   842,    65,   723,   608,
     609,   610,   611,   612,    92,   260,   196,    67,   200,   702,
     703,   660,   848,   849,   850,   851,   647,   552,   721,   553,
     -84,   710,   711,   204,   648,   649,   650,    92,   733,   198,
     200,   325,   222,   506,   200,   327,   367,   443,   687,   688,
     689,   763,   197,   750,   232,    89,   223,   701,   -24,   -24,
     345,   224,   734,   735,   736,   737,   738,   225,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     226,   718,   198,   468,   469,   769,   770,   771,   772,   773,
     345,   345,   227,   345,   345,   345,   345,   345,   154,   789,
     155,   816,   233,   156,    70,    71,    72,    73,    74,   367,
     502,   804,   804,   804,   804,   804,   422,   568,    77,    78,
     805,   805,   805,   805,   805,   257,   333,   334,   258,   813,
     814,   335,   336,   337,   338,   416,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   259,   166,   439,   594,   333,
     334,   167,   262,   -24,   836,   780,   -24,   -24,   263,   758,
     515,   265,   804,   804,   804,   804,   278,   812,   468,   625,
     281,   805,   805,   805,   805,   487,   637,   705,   706,   597,
     731,   804,   804,   804,   804,   600,   741,   464,   422,   788,
     805,   805,   805,   805,   125,   126,   154,   283,   465,   284,
     786,   156,   424,   303,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   795,   796,   285,   526,
     744,   831,   287,   288,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   716,   166,   592,   593,    20,    21,   167,
     289,   527,   154,   290,   717,   506,   304,   156,   724,   725,
     528,   529,   305,   506,   197,   530,   531,   532,   533,   306,
     307,   308,   197,   311,   608,   609,   610,   611,   612,   312,
     313,   314,   734,   735,   736,   737,   738,   315,   316,   317,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   149,
     166,   318,   150,   151,   198,   167,   243,   244,   245,   156,
     246,   247,   198,   323,   324,   329,   333,   334,   340,   344,
     248,   335,   336,   782,   338,   333,   334,   353,   354,   359,
     820,   821,   822,   823,   356,   249,   250,   251,   252,   391,
     392,   357,   394,   395,   396,   397,   398,   358,   365,   367,
     372,   371,   -17,   380,   381,   382,   383,   393,   399,   403,
     198,   404,   418,   410,   405,   434,   435,   439,   436,   447,
     448,   476,   456,   457,   458,   459,   461,   462,   463,   467,
     475,   478,   485,   487,   542,   490,   477,   501,   509,   422,
     491,   516,   546,   525,   535,   536,   540,   541,   543,   544,
     575,   550,   551,   562,   565,   580,   567,   571,   578,   579,
     587,   596,   597,   600,   643,   606,   613,   553,   520,   617,
     620,   621,   622,   627,   628,   644,   661,   668,   669,   670,
     679,   672,   680,   681,   684,   691,   682,   692,   683,   704,
     764,   719,   673,   120,   727,   728,   729,   730,   739,   740,
     744,   186,   751,   752,   753,   754,   755,   756,   760,   591,
     761,   765,   766,   767,   774,   781,   783,   784,   785,   787,
     790,   791,   792,   793,   794,   810,   815,   576,   818,   819,
     826,   827,   828,   829,   830,   837,   843,   844,   845,   846,
     847,   853,   854,   855,   856,   857,   199,   797,   698,   180,
     638,    88,    80,   595,   838,   759,   271,   293,   572,   123,
     678,     0,   677,     0,     0,     0,     0,    50,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      57,   159,   384,    92,   282,   163,   164,   165,   118,   434,
     410,   436,     3,   549,    12,   590,   410,   432,   230,   231,
       3,   555,     1,     1,     4,   559,   560,     3,   333,   334,
     564,     0,     3,   356,   434,   196,   436,     3,   199,   193,
     434,     3,   436,    11,   154,   113,     4,   157,   158,     3,
     160,   161,   162,   624,     1,     3,   166,   410,    28,   217,
     410,     1,   223,   224,   225,   226,   227,   390,     3,     3,
      68,   410,    93,   254,     1,     3,   647,   238,     3,     4,
      28,   434,     1,   436,   434,   408,   436,     1,     1,    47,
     699,   700,     3,    51,     1,   434,    76,   436,   155,    78,
      79,     4,   212,     3,   214,   215,   216,     6,   218,     3,
     220,   200,   222,   418,   685,   530,   531,   532,   533,   300,
       3,   193,   113,   446,     3,   403,   662,   702,   703,     3,
     284,   114,   514,   243,   244,   113,   246,   247,    45,   115,
     116,   675,   303,   304,   115,   116,     4,   113,   113,   206,
       3,   113,   505,   506,   335,   336,   337,   338,   268,   269,
     321,   322,     4,   699,   700,   319,   113,    92,   583,    80,
     585,   586,     4,   113,   386,     4,   785,     3,   113,   113,
      80,    92,   292,   293,   294,   113,   113,   721,    82,   114,
     115,   116,    92,   113,   113,   376,   377,   378,   379,   113,
     113,    80,   555,   114,   115,   116,   559,   560,     4,    92,
     113,   564,   284,    92,   114,   115,   116,   522,    92,   634,
     114,   115,   116,   528,   529,     4,    73,    80,   551,     4,
       4,   114,   115,   116,    92,   114,   115,   116,   813,   814,
     114,   115,   116,   656,   669,   811,   812,   357,   358,   785,
      92,    59,     4,    81,    62,   113,    64,    65,    64,     4,
      92,    10,     3,    92,   542,    73,   113,    73,    59,   669,
       7,   113,   382,   383,   432,   669,     4,   690,   367,     3,
     846,   113,    92,     1,   113,   113,   447,    36,    37,    38,
      39,    40,    83,    84,     4,    22,    92,   407,   408,     4,
     653,   654,   108,   653,   654,   113,   113,   113,   118,   662,
     113,   117,   662,    92,   653,   654,   669,   113,    92,   669,
     113,    48,   675,   662,     3,    56,    57,   384,    59,    73,
     669,   441,     3,   422,   113,   115,   116,     1,    48,   113,
      92,    59,    73,     4,    62,    89,     3,    91,    66,    59,
      60,    61,    62,    63,    64,   516,   115,   116,    89,   113,
      91,   113,   111,    73,   118,    83,    84,     4,   721,   518,
       3,     4,   530,   531,   532,   533,    48,   759,    88,    89,
      90,    91,   115,   116,    56,    57,    58,    59,     4,   538,
     539,    13,    56,    57,     1,    59,     3,   507,    62,    75,
      76,    65,    66,   113,   565,     9,    10,   464,   465,    13,
       1,     4,     3,    35,     4,   768,   574,     4,   768,    83,
      84,    85,    86,    87,    45,   583,   584,   585,   586,   768,
       4,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   551,     4,   770,   771,   772,   773,     4,    70,    71,
      72,     1,    74,     3,   511,    77,     1,   514,     3,   608,
     609,   610,   611,   612,   118,   575,   624,    95,     4,    97,
       4,    99,    69,   101,   632,    59,   634,     3,    62,     4,
      64,    65,   663,   664,   665,   666,   667,     4,     1,    73,
       3,     4,     4,   820,   821,   822,   823,    43,   679,    83,
      84,    85,    86,    87,     3,     4,     3,   111,     3,   658,
     659,   600,   839,   840,   841,   842,    48,     1,   676,     3,
       4,   702,   703,     4,    56,    57,    58,     3,    59,   113,
       3,     4,   113,    64,     3,     4,     3,     4,   648,   649,
     650,   722,    73,   704,     4,     1,     3,   657,     4,     5,
     305,     3,    83,    84,    85,    86,    87,     3,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       3,   670,   113,     3,     4,   734,   735,   736,   737,   738,
     345,   346,     3,   348,   349,   350,   351,   352,    57,   760,
      59,   782,    92,    62,    30,    31,    32,    33,    34,     3,
       4,   769,   770,   771,   772,   773,     3,     4,    44,    45,
     769,   770,   771,   772,   773,     4,   113,   114,   113,   778,
     779,   118,   119,   120,   121,   816,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     4,   105,     3,     4,   113,
     114,   110,     4,   109,   815,   744,   112,   113,     4,   716,
     717,     4,   820,   821,   822,   823,    67,   777,     3,     4,
     113,   820,   821,   822,   823,     3,     4,     3,     4,     3,
       4,   839,   840,   841,   842,     3,     4,    48,     3,     4,
     839,   840,   841,   842,     4,     5,    57,     4,    59,   118,
     757,    62,   759,     3,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,     3,     4,     4,    82,
       3,     4,   239,   240,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    48,   105,   543,   544,     8,     9,   110,
       4,   104,    57,     4,    59,    64,     3,    62,   682,   683,
     113,   114,     4,    64,    73,   118,   119,   120,   121,     4,
       4,     4,    73,     4,    83,    84,    85,    86,    87,     4,
       4,     4,    83,    84,    85,    86,    87,     4,     4,     4,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   109,
     105,     4,   112,   113,   113,   110,    59,    60,    61,    62,
      63,    64,   113,     4,    46,     4,   113,   114,   113,     3,
      73,   118,   119,   120,   121,   113,   114,     4,     4,   107,
     118,   119,   120,   121,    46,    88,    89,    90,    91,   345,
     346,    46,   348,   349,   350,   351,   352,    46,   118,     3,
     113,     4,     8,     8,     4,     4,     4,     4,     4,     3,
     113,    55,   114,    51,    94,    51,    51,     3,    51,     3,
       3,   115,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,    94,     4,   115,     4,     4,     3,
     118,     3,    92,     4,     4,     4,     4,     4,     3,     3,
     113,     4,     4,     3,     3,   113,     4,     3,   115,     4,
       4,    81,     3,     3,    92,     4,     4,     3,   113,     4,
       4,     4,     4,     4,     4,    92,     4,     4,     4,     3,
     120,     4,     4,     4,     4,     4,    81,     3,    81,     3,
      80,     4,     3,    85,     4,     4,     4,     4,     4,     4,
       3,   109,     4,     4,     4,     4,     4,     4,     3,   542,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,   521,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   117,   768,   654,   105,
     588,    55,    48,   545,   819,   717,   220,   244,   517,    88,
     634,    -1,   632,    -1,    -1,    -1,    -1,    24,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,    28,   124,   125,   240,   253,    11,   115,   116,
       0,     3,   115,   116,   254,   255,   256,   257,     3,   127,
     253,   253,   113,     6,    93,    12,    68,     1,     3,   126,
     130,   132,   217,   218,   219,   221,   222,   223,   225,   226,
     227,   228,   229,   231,   238,   239,   113,   147,   153,   257,
     255,   113,     1,   113,     9,    10,    13,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   111,   224,     4,
     126,   126,   126,   126,   126,     3,   222,   126,   126,     4,
     147,     7,     4,     4,   113,   128,   131,   113,   129,     1,
     133,     1,     3,   207,     1,   113,     1,   113,     1,   113,
       1,   113,   113,   146,   148,   154,     1,     3,   134,   135,
       1,   139,   149,   158,     1,    45,   236,     3,   215,     3,
     131,     4,     3,   218,     4,     4,     5,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   109,
     112,   113,   237,     4,    57,    59,    62,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   105,   110,   212,     4,
       4,   236,     4,   236,     4,   236,     4,   236,     4,   118,
     148,     4,     1,   113,   136,     4,   134,     4,     3,     4,
     140,     4,   113,   118,   156,     4,     3,    73,   113,   137,
       3,   209,   214,    69,     4,   209,   206,   207,   209,   209,
     115,   116,   197,   209,   209,   209,   197,   197,   197,   113,
     208,   209,   113,     3,     3,     3,     3,     3,     3,   113,
     155,   157,     4,    92,   143,   145,     1,   113,   142,   155,
     157,   143,   143,    59,    60,    61,    63,    64,    73,    88,
      89,    90,    91,   137,   200,   212,   213,     4,   113,     4,
       4,   207,     4,     4,   209,     4,   209,   209,   209,   197,
     209,   208,   209,   143,   143,   143,   143,   143,    67,   146,
     146,   113,   151,     4,   118,     4,   143,   149,   149,     4,
       4,   209,   211,   211,   209,   209,   150,     3,    92,   114,
     195,   197,   198,     3,     3,     4,     4,     4,     4,   209,
     209,     4,     4,     4,     4,     4,     4,     4,     4,   159,
     145,   155,   157,     4,    46,     4,   209,     4,   209,     4,
       4,    92,   153,   113,   114,   118,   119,   120,   121,   129,
     113,   195,   143,   143,     3,   132,   220,   241,   242,   243,
     245,   246,   247,     4,     4,   207,    46,    46,    46,   107,
     230,     4,   157,   143,   143,   118,   141,     3,   201,   205,
     209,     4,   113,   152,   150,   150,   195,   195,   195,   195,
       8,     4,     4,     4,    35,    70,    71,    72,    74,    77,
     244,   241,   241,     4,   241,   241,   241,   241,   241,     4,
     201,   209,   209,     3,    55,    94,     4,    48,    59,   212,
      51,     4,     4,     4,   195,   195,   195,   195,   114,   209,
     209,     1,     3,   202,   207,   160,   146,    75,    76,     1,
      78,    79,   248,   201,    51,    51,    51,   144,   145,     3,
     184,   113,   209,     4,   201,   209,   210,     3,     3,   165,
     169,   188,   189,   192,   193,   214,     4,     4,     4,     4,
     150,     4,     4,     4,    48,    59,   212,     4,     3,     4,
     161,   163,   190,   191,   216,     4,   115,   115,     4,     3,
      82,   114,   197,   199,   249,     4,   165,     3,   180,   165,
       4,   118,    56,    57,    59,    73,    89,    91,   185,   232,
     209,     4,     4,   201,   143,    59,    64,    65,   212,     4,
       4,   113,   207,   202,   204,   207,     3,    64,    73,   108,
     113,   117,   138,     4,    76,     4,    82,   104,   113,   114,
     118,   119,   120,   121,   250,     4,     4,    59,    83,    84,
       4,     4,    94,     3,     3,   187,    92,     4,    47,    51,
       4,     4,     1,     3,   164,   166,   167,   188,   189,   192,
     193,   194,     3,   214,   209,     3,   207,     4,     4,   202,
     143,     3,   216,     3,   198,   113,   160,   150,   115,     4,
     113,   150,   150,   249,   249,   249,   249,     4,   181,   198,
     198,   144,   185,   185,     4,   184,    81,     3,   233,   235,
       3,   170,   172,   194,   201,   209,     4,    59,    83,    84,
      85,    86,    87,     4,   164,   164,   164,     4,   164,   143,
       4,     4,     4,   197,   209,     4,     4,     4,     4,     4,
       4,   249,   249,   251,   249,   252,   249,     4,   180,     3,
      80,   196,   196,    92,    92,   186,   195,    48,    56,    57,
      58,    59,     1,    56,    57,    59,    65,    66,    83,    84,
     212,     4,   168,   198,   198,   198,   198,   198,     4,     4,
       3,   203,     4,     3,   162,   197,   235,   251,   252,   120,
       4,     4,    81,    81,     4,   113,   235,   209,   209,   209,
     234,     4,     3,   176,   177,   179,   188,   189,   176,   171,
     233,   209,   198,   198,     3,     3,     4,   188,   189,   194,
     195,   195,   195,   195,   195,   165,    48,    59,   212,     4,
     164,   197,    80,   195,   186,   186,   235,     4,     4,     4,
       4,     4,   233,    59,    83,    84,    85,    86,    87,     4,
       4,     4,   170,   170,     3,   173,   174,     3,   196,   196,
     143,     4,     4,     4,     4,     4,     4,   113,   207,   204,
       3,     4,   164,   195,    80,     4,     4,     4,   178,   198,
     198,   198,   198,   198,     4,     1,    59,    66,    83,    84,
     212,     4,   120,     4,     4,     4,   207,     4,     4,   143,
       4,     4,     4,     4,     4,     3,     4,   179,   188,   189,
       3,    92,   182,   183,   197,   198,   182,   182,   182,   182,
       4,   175,   209,   198,   198,     3,   195,   170,     4,     4,
     118,   119,   120,   121,    81,   113,     4,     4,     4,     4,
       4,     4,   174,   174,   196,   196,   143,     4,   203,   182,
     182,   182,   182,     4,     4,     4,     4,     4,   182,   182,
     182,   182,   174,     4,     4,     4,     4,     4
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   123,   124,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   128,   129,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     137,   137,   138,   139,   139,   140,   140,   141,   141,   142,
     143,   143,   143,   144,   144,   145,   145,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   149,   150,   150,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   158,   159,
     159,   160,   160,   160,   160,   160,   160,   161,   162,   162,
     163,   164,   164,   164,   164,   165,   165,   165,   165,   165,
     166,   166,   167,   167,   167,   168,   168,   168,   168,   169,
     169,   170,   170,   170,   170,   170,   170,   171,   171,   172,
     172,   172,   172,   172,   173,   173,   173,   174,   174,   174,
     174,   175,   175,   176,   176,   177,   177,   177,   178,   178,
     178,   178,   179,   179,   179,   179,   179,   180,   180,   180,
     181,   181,   182,   182,   182,   182,   182,   183,   183,   183,
     183,   184,   184,   184,   184,   185,   185,   185,   186,   187,
     187,   188,   189,   190,   191,   192,   193,   194,   194,   194,
     194,   194,   195,   195,   195,   195,   195,   195,   195,   195,
     196,   196,   196,   197,   197,   198,   198,   198,   198,   199,
     199,   199,   200,   200,   200,   200,   200,   201,   201,   201,
     201,   201,   202,   202,   202,   202,   202,   203,   203,   203,
     203,   204,   204,   205,   205,   205,   206,   206,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   208,   208,   209,   209,   209,   209,   209,   209,
     209,   209,   210,   210,   211,   211,   212,   213,   214,   215,
     216,   217,   217,   218,   218,   219,   219,   220,   220,   221,
     221,   222,   222,   222,   222,   222,   222,   222,   223,   224,
     225,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   232,   233,   233,   234,   234,
     235,   235,   235,   235,   235,   236,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   238,   239,   240,   240,   241,   241,   241,   241,
     241,   241,   241,   241,   242,   243,   244,   245,   246,   246,
     247,   247,   247,   248,   248,   249,   249,   249,   249,   249,
     249,   250,   250,   250,   250,   251,   251,   252,   252,   253,
     253,   253,   253,   254,   254,   255,   255,   256,   257,   257
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     1,     1,     4,     2,
       0,     4,     4,     2,     0,     2,     1,     4,     3,     1,
       1,     1,     1,     2,     0,     5,     3,     2,     0,     1,
       4,     4,     1,     4,     0,     3,     0,     4,     4,     1,
       2,     0,     2,     0,     4,     4,     1,     2,     3,     0,
       1,     1,     1,     1,     4,     1,     1,     2,     0,     2,
       0,     6,     2,     2,     2,     2,     0,     5,     4,     3,
       4,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     2,     2,     2,     0,     4,
       4,     4,     7,     5,     5,     1,     1,     2,     0,     4,
       4,     5,     5,     3,     5,     5,     3,     4,     7,     5,
       1,     2,     0,     4,     1,     1,     1,     1,     2,     2,
       2,     0,     5,     5,     5,     5,     5,     5,     5,     4,
       2,     0,     1,     2,     1,     1,     2,     5,     5,     5,
       5,     4,     6,     9,     9,     1,     1,     1,     1,     2,
       0,     4,     1,     4,     1,     7,     5,     5,     5,     5,
       5,     5,     4,     5,     5,     5,     5,     1,     2,     1,
       5,     5,     1,     1,     1,     4,     4,     1,     6,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     7,
       3,     2,     4,     5,     4,     7,     1,     4,     5,     4,
       7,     2,     1,     4,     5,     1,     2,     1,     4,     7,
       4,     4,     4,     5,     4,     5,     5,     6,     6,     5,
       5,     5,     1,     1,     1,     4,     4,     4,     5,     7,
       7,     5,     2,     1,     2,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       5,    12,     4,    11,     4,    12,     4,    12,     4,     4,
       0,    12,     4,     3,     3,     0,     1,     4,     2,     0,
       4,     4,     4,     5,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,    12,     5,     2,     2,     2,     2,
       2,     2,     2,     0,     4,     4,     1,     4,     5,     4,
       7,     5,     5,     1,     1,     3,     1,     1,     1,     4,
       3,     3,     3,     3,     3,     1,     2,     1,     2,     2,
       3,     3,     0,     3,     1,     4,     1,     4,     1,     1
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
#line 258 "pddl+.y" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_domain); current_analysis->the_domain= (yyvsp[0].t_domain);}
#line 2124 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 259 "pddl+.y" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_problem); current_analysis->the_problem= (yyvsp[0].t_problem);}
#line 2130 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 260 "pddl+.y" /* yacc.c:1646  */
    {top_thing= (yyvsp[0].t_plan); }
#line 2136 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 265 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[-1].t_domain); (yyval.t_domain)->name= (yyvsp[-2].cp);delete [] (yyvsp[-2].cp);
	if (types_used && !types_defined) {
		yyerrok; log_error(E_FATAL,"Syntax error in domain - no :types section, but types used in definitions.");
	}
	}
#line 2146 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 271 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_domain)=static_cast<domain*>(NULL);
       	log_error(E_FATAL,"Syntax error in domain"); }
#line 2153 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 277 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->req= (yyvsp[-1].t_pddl_req_flag);}
#line 2159 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 278 "pddl+.y" /* yacc.c:1646  */
    {types_defined = true; (yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->types= (yyvsp[-1].t_type_list);}
#line 2165 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 279 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->constants= (yyvsp[-1].t_const_symbol_list);}
#line 2171 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 280 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
                                       (yyval.t_domain)->predicates= (yyvsp[-1].t_pred_decl_list); }
#line 2178 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 282 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
                                       (yyval.t_domain)->functions= (yyvsp[-1].t_func_decl_list); }
#line 2185 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 284 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_domain)= (yyvsp[0].t_domain);
   				       (yyval.t_domain)->constraints = (yyvsp[-1].t_con_goal);}
#line 2192 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 286 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_domain) = (yyvsp[0].t_domain);}
#line 2198 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 287 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_domain)= new domain((yyvsp[0].t_structure_store)); }
#line 2204 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 290 "pddl+.y" /* yacc.c:1646  */
    {(yyval.cp)=(yyvsp[-1].cp);}
#line 2210 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 294 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_class)=current_analysis->classes_tab.new_symbol_put((yyvsp[0].cp));
       delete [] (yyvsp[0].cp); }
#line 2217 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 297 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_class) = current_analysis->classes_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2223 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 299 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2229 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 301 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2235 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 302 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_dummy) = 0;}
#line 2241 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 307 "pddl+.y" /* yacc.c:1646  */
    {
	// Stash in analysis object --- we need to refer to it during parse
	//   but domain object is not created yet,
	current_analysis->req |= (yyvsp[-1].t_pddl_req_flag);
	(yyval.t_pddl_req_flag)=(yyvsp[-1].t_pddl_req_flag);
    }
#line 2252 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 314 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
       log_error(E_FATAL,"Syntax error in requirements declaration.");
       (yyval.t_pddl_req_flag)= 0; }
#line 2260 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 320 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_pddl_req_flag)= (yyvsp[-1].t_pddl_req_flag) | (yyvsp[0].t_pddl_req_flag); }
#line 2266 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 321 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_pddl_req_flag)= 0; }
#line 2272 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 327 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pred_decl_list)=(yyvsp[0].t_pred_decl_list); (yyval.t_pred_decl_list)->push_front((yyvsp[-1].t_pred_decl));}
#line 2278 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 329 "pddl+.y" /* yacc.c:1646  */
    {  (yyval.t_pred_decl_list)=new pred_decl_list;
           (yyval.t_pred_decl_list)->push_front((yyvsp[0].t_pred_decl)); }
#line 2285 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 334 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pred_decl)= new pred_decl((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_var_symbol_list),current_analysis->var_tab_stack.pop());}
#line 2291 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 336 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
        // hope someone makes this error someday
        log_error(E_FATAL,"Syntax error in predicate declaration.");
	(yyval.t_pred_decl)= static_cast<pred_decl*>(NULL); }
#line 2300 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 344 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.new_symbol_put((yyvsp[0].cp));
           current_analysis->var_tab_stack.push(
           				current_analysis->buildPredTab());
           delete [] (yyvsp[0].cp); }
#line 2309 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 351 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_ref("=");
	      requires(E_EQUALITY); }
#line 2316 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 353 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2322 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 361 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2328 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 367 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_func_decl_list)=(yyvsp[-1].t_func_decl_list); (yyval.t_func_decl_list)->push_back((yyvsp[0].t_func_decl));}
#line 2334 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 368 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_decl_list)=new func_decl_list; }
#line 2340 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 373 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_func_decl)= new func_decl((yyvsp[-3].t_func_symbol),(yyvsp[-2].t_var_symbol_list),current_analysis->var_tab_stack.pop());}
#line 2346 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 375 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in functor declaration.");
	 (yyval.t_func_decl)= NULL; }
#line 2354 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 381 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_dummy) = (int) NULL;}
#line 2360 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 381 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_dummy)= (int) NULL;}
#line 2366 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 385 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_symbol)=current_analysis->func_tab.new_symbol_put((yyvsp[0].cp));
           current_analysis->var_tab_stack.push(
           		current_analysis->buildFuncTab());
           delete [] (yyvsp[0].cp); }
#line 2375 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 398 "pddl+.y" /* yacc.c:1646  */
    {
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types((yyvsp[-1].t_type));           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2388 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 407 "pddl+.y" /* yacc.c:1646  */
    {
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_either_types((yyvsp[-1].t_type_list));    /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2401 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 416 "pddl+.y" /* yacc.c:1646  */
    {
       (yyval.t_var_symbol_list)= (yyvsp[0].t_var_symbol_list);
   }
#line 2409 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 423 "pddl+.y" /* yacc.c:1646  */
    {
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types(0);           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
   }
#line 2420 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 428 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list) = new var_symbol_list;}
#line 2426 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 436 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list)=(yyvsp[0].t_var_symbol_list); (yyvsp[0].t_var_symbol_list)->push_front((yyvsp[-1].t_var_symbol)); }
#line 2432 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 437 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list)= new var_symbol_list; }
#line 2438 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 444 "pddl+.y" /* yacc.c:1646  */
    {
      (yyval.t_const_symbol_list)= (yyvsp[-3].t_const_symbol_list);
      (yyvsp[-3].t_const_symbol_list)->set_types((yyvsp[-1].t_type));           /* Set types for constants */
      (yyvsp[-3].t_const_symbol_list)->splice((yyvsp[-3].t_const_symbol_list)->end(),*(yyvsp[0].t_const_symbol_list)); /* Join lists */
      delete (yyvsp[0].t_const_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2451 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 453 "pddl+.y" /* yacc.c:1646  */
    {
      (yyval.t_const_symbol_list)= (yyvsp[-3].t_const_symbol_list);
      (yyvsp[-3].t_const_symbol_list)->set_either_types((yyvsp[-1].t_type_list));
      (yyvsp[-3].t_const_symbol_list)->splice((yyvsp[-3].t_const_symbol_list)->end(),*(yyvsp[0].t_const_symbol_list));
      delete (yyvsp[0].t_const_symbol_list);
      requires(E_TYPING);
      types_used = true;
   }
#line 2464 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 462 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)= (yyvsp[0].t_const_symbol_list);}
#line 2470 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 467 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[0].t_const_symbol_list); (yyvsp[0].t_const_symbol_list)->push_front((yyvsp[-1].t_const_symbol));}
#line 2476 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 468 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=new const_symbol_list;}
#line 2482 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 472 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[0].t_const_symbol_list); (yyvsp[0].t_const_symbol_list)->push_front((yyvsp[-1].t_const_symbol));}
#line 2488 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 473 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=new const_symbol_list;}
#line 2494 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 482 "pddl+.y" /* yacc.c:1646  */
    {
       (yyval.t_type_list)= (yyvsp[-3].t_type_list);
       (yyval.t_type_list)->set_types((yyvsp[-1].t_type));           /* Set types for constants */
       (yyval.t_type_list)->splice((yyval.t_type_list)->end(),*(yyvsp[0].t_type_list)); /* Join lists */
       delete (yyvsp[0].t_type_list);                   /* Delete (now empty) list */
   }
#line 2505 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 489 "pddl+.y" /* yacc.c:1646  */
    {
   // This parse needs to be excluded, we think (DPL&MF: 6/9/01)
       (yyval.t_type_list)= (yyvsp[-3].t_type_list);
       (yyval.t_type_list)->set_either_types((yyvsp[-1].t_type_list));
       (yyval.t_type_list)->splice((yyvsp[-3].t_type_list)->end(),*(yyvsp[0].t_type_list));
       delete (yyvsp[0].t_type_list);
   }
#line 2517 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 498 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_type_list)= (yyvsp[0].t_type_list); }
#line 2523 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 504 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)=(yyvsp[-1].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[0].t_const_symbol)); }
#line 2529 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 506 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)=(yyvsp[-2].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[0].t_var_symbol)); }
#line 2535 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 507 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_parameter_symbol_list)= new parameter_symbol_list;}
#line 2541 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 514 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.top()->symbol_put((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2547 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 520 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2553 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 524 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_const_symbol)= current_analysis->const_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2559 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 528 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_const_symbol)= current_analysis->const_tab.new_symbol_put((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2565 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 533 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_type_list)= (yyvsp[-1].t_type_list); }
#line 2571 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 538 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2577 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 545 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2583 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 550 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_type_list)= (yyvsp[-1].t_type_list); (yyval.t_type_list)->push_back((yyvsp[0].t_type));}
#line 2589 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 551 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_type_list)= new pddl_type_list;}
#line 2595 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 556 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_type_list)= (yyvsp[-1].t_type_list); (yyval.t_type_list)->push_back((yyvsp[0].t_type));}
#line 2601 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 557 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_type_list)= new pddl_type_list;}
#line 2607 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 562 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-5].t_effect_lists);
	  (yyval.t_effect_lists)->assign_effects.push_back(new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_num_expression)));
          if((yyvsp[-2].t_func_term)->getFunction()->getName()=="total-cost")
          {
          	requires(E_ACTIONCOSTS);
          	// Should also check that $5 is 0...
		  }
          else
          {
          	requires(E_NFLUENTS);
          }
	}
#line 2624 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 575 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect)); }
#line 2630 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 577 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect)); }
#line 2636 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 579 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2642 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 581 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists) = (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->supplied_effects.push_back((yyvsp[0].t_supplied_effect)); }
#line 2648 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 583 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;}
#line 2654 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 588 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_supplied_effect) = (yyvsp[0].t_supplied_effect); (yyvsp[0].t_supplied_effect)->sup = (yyvsp[-1].t_goal); (yyvsp[0].t_supplied_effect)->name = current_analysis->op_tab.symbol_put((yyvsp[-2].cp));
	delete [] (yyvsp[-2].cp); requires(E_SUPPLYDEMAND);}
#line 2661 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 594 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_supplied_effect) = new supplied_effect(0,(yyvsp[-3].t_goal),(yyvsp[-2].t_num_expression)->double_value(),(yyvsp[-1].t_effect_lists)); delete (yyvsp[-2].t_num_expression);}
#line 2667 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 596 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_supplied_effect) = new supplied_effect(0,0,(yyvsp[-2].t_num_expression)->double_value(),(yyvsp[-1].t_effect_lists)); delete (yyvsp[-2].t_num_expression);}
#line 2673 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 602 "pddl+.y" /* yacc.c:1646  */
    { requires(E_TIMED_INITIAL_LITERALS);
   		(yyval.t_timed_effect)=new timed_initial_literal((yyvsp[-1].t_effect_lists),(yyvsp[-2].fval));}
#line 2680 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 607 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->append_effects((yyvsp[-1].t_effect_lists)); delete (yyvsp[-1].t_effect_lists);}
#line 2686 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 608 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[-1].t_cond_effect));
                                      requires(E_COND_EFFS);}
#line 2693 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 610 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[-1].t_forall_effect));
                                      requires(E_COND_EFFS);}
#line 2700 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 612 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists(); }
#line 2706 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 621 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2712 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 622 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2718 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 623 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2724 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 624 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[0].t_cond_effect));}
#line 2730 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 625 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[0].t_forall_effect));}
#line 2736 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 629 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists);}
#line 2742 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 630 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2748 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 635 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2754 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 637 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2760 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 639 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
         requires(E_NFLUENTS);}
#line 2767 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 645 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2773 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 646 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2779 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 647 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[0].t_assignment));
                                     requires(E_NFLUENTS); }
#line 2786 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 649 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2792 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 654 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2798 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 656 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_effect_lists)=NULL;
	 log_error(E_FATAL,"Syntax error in (and ...)");
	}
#line 2806 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 664 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2812 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 669 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop()));
          requires(E_COND_EFFS);}
#line 2821 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 674 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2830 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 679 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2839 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 684 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2846 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 687 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
          requires(E_NFLUENTS); }
#line 2854 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 693 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2860 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 694 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2866 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 700 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[-1].t_effect_lists),E_AT_START);}
#line 2872 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 702 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[-1].t_effect_lists),E_AT_END);}
#line 2878 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 704 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2886 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 708 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2894 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 712 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in timed effect"); }
#line 2901 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 718 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2909 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 722 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2917 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 726 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in conditional continuous effect"); }
#line 2924 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 732 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2930 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 737 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop()));
          requires(E_COND_EFFS);}
#line 2939 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 742 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2948 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 747 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2955 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 752 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2961 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 753 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 2967 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 757 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists);}
#line 2973 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 758 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2979 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 763 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2985 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 765 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2991 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 767 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
         requires(E_NFLUENTS);}
#line 2998 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 773 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect));}
#line 3004 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 774 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect));}
#line 3010 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 775 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[0].t_assignment));
                                     requires(E_NFLUENTS); }
#line 3017 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 777 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 3023 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 783 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_expression)); }
#line 3029 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 785 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression)); }
#line 3035 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 787 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression)); }
#line 3041 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 789 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_UP,(yyvsp[-1].t_expression)); }
#line 3047 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 791 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_DOWN,(yyvsp[-1].t_expression)); }
#line 3053 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 796 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists;
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 3063 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 802 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=new effect_lists;
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 3073 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 808 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists) = (yyvsp[-1].t_effect_lists);}
#line 3079 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 812 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 3085 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 813 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_effect_lists)= new effect_lists; }
#line 3091 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 817 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_expression);}
#line 3097 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 818 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression)= new special_val_expr(E_DURATION_VAR);
                    requires( E_DURATION_INEQUALITIES );}
#line 3104 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 820 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)=(yyvsp[0].t_num_expression); }
#line 3110 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 821 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= (yyvsp[0].t_func_term); }
#line 3116 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 822 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression) = current_analysis->getControlParam((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 3122 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 827 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3128 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 829 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3134 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 831 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3140 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 833 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3146 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 838 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list)); }
#line 3152 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 840 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal)= new timed_goal(new comparison((yyvsp[-4].t_comparison_op),
        			new special_val_expr(E_DURATION_VAR),(yyvsp[-1].t_expression)),E_AT_START); }
#line 3159 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 843 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[-5].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[-2].t_expression)),E_AT_START);}
#line 3166 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 846 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[-5].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[-2].t_expression)),E_AT_END);}
#line 3173 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 851 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_LESSEQ; requires(E_DURATION_INEQUALITIES);}
#line 3179 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 852 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_GREATEQ; requires(E_DURATION_INEQUALITIES);}
#line 3185 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 853 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_comparison_op)= E_EQUALS; }
#line 3191 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 861 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_expression); }
#line 3197 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 866 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_goal)); }
#line 3203 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 868 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal_list)= new goal_list; }
#line 3209 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 873 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[-1].t_proposition)); }
#line 3215 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 878 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[0].t_proposition)); }
#line 3221 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 885 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[-1].t_proposition)); }
#line 3227 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 890 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[0].t_proposition)); }
#line 3233 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 895 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_forall_effect)= new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop());}
#line 3239 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 900 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_cond_effect)= new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)); }
#line 3245 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 905 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_expression)); }
#line 3251 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 907 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression)); }
#line 3257 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 909 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression)); }
#line 3263 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 911 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_UP,(yyvsp[-1].t_expression)); }
#line 3269 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 913 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_DOWN,(yyvsp[-1].t_expression)); }
#line 3275 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 918 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new uminus_expression((yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3281 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 920 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3287 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 922 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3293 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 924 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3299 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 926 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3305 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 927 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)=(yyvsp[0].t_num_expression); }
#line 3311 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 928 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression) = current_analysis->getControlParam((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 3317 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 929 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= (yyvsp[0].t_func_term); requires(E_NFLUENTS); }
#line 3323 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 934 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression(new special_val_expr(E_HASHT),(yyvsp[-1].t_expression)); }
#line 3329 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 936 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression), new special_val_expr(E_HASHT)); }
#line 3335 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 938 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_HASHT); }
#line 3341 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 943 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_num_expression)=new int_expression((yyvsp[0].ival));   }
#line 3347 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 944 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_num_expression)=new float_expression((yyvsp[0].fval)); }
#line 3353 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 948 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3359 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 951 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3365 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 953 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[0].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[0].cp);}
#line 3372 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 956 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_term) = new class_func_term( (yyvsp[-4].t_class), current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp);}
#line 3378 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 973 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3384 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 975 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3390 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 977 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[0].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[0].cp);}
#line 3397 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 982 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_GREATER; }
#line 3403 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 983 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_GREATEQ; }
#line 3409 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 984 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_LESS; }
#line 3415 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 985 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_LESSEQ; }
#line 3421 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 986 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_comparison_op)= E_EQUALS; }
#line 3427 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 999 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= (yyvsp[0].t_goal);}
#line 3433 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1006 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3439 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1009 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);}
#line 3446 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1011 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal(new goal_list);}
#line 3452 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1012 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal) = new conj_goal(new goal_list);}
#line 3458 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1017 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3464 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1019 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-2].cp),(yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3470 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1021 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3476 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1024 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);}
#line 3483 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1027 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[0].t_con_goal);}
#line 3489 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1032 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3495 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1034 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new preference((yyvsp[-2].cp),(yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3501 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1036 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3507 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1039 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);}
#line 3514 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1045 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); if((yyvsp[0].t_con_goal)) {(yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_con_goal));};}
#line 3520 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1047 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; if((yyvsp[0].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));};}
#line 3526 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1052 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new preference((yyvsp[-1].t_goal)); requires(E_PREFERENCES);}
#line 3532 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1054 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new preference((yyvsp[-2].cp),(yyvsp[-1].t_goal)); requires(E_PREFERENCES);}
#line 3538 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1058 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)=(yyvsp[0].t_goal);}
#line 3544 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1063 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal_list) = (yyvsp[-1].t_goal_list); if((yyvsp[0].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}; }
#line 3550 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1065 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal_list) = new goal_list; if((yyvsp[0].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}}
#line 3556 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1070 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal)= new conj_goal((yyvsp[-1].t_goal_list));}
#line 3562 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1072 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);}
#line 3569 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1075 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ATEND,(yyvsp[-1].t_goal));}
#line 3575 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1077 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYS,(yyvsp[-1].t_goal));}
#line 3581 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1079 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIME,(yyvsp[-1].t_goal));}
#line 3587 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1081 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_WITHIN,(yyvsp[-1].t_goal),NULL,(yyvsp[-2].t_num_expression)->double_value(),0.0);delete (yyvsp[-2].t_num_expression);}
#line 3593 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1083 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ATMOSTONCE,(yyvsp[-1].t_goal));}
#line 3599 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1085 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEAFTER,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3605 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1087 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEBEFORE,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3611 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1089 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYSWITHIN,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal),(yyvsp[-3].t_num_expression)->double_value(),0.0);delete (yyvsp[-3].t_num_expression);}
#line 3617 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1091 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDDURING,(yyvsp[-1].t_goal),NULL,(yyvsp[-2].t_num_expression)->double_value(),(yyvsp[-3].t_num_expression)->double_value());delete (yyvsp[-3].t_num_expression);delete (yyvsp[-2].t_num_expression);}
#line 3623 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1093 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDAFTER,(yyvsp[-1].t_goal),NULL,0.0,(yyvsp[-2].t_num_expression)->double_value());delete (yyvsp[-2].t_num_expression);}
#line 3629 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1095 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = new constraint_goal(E_AFTER,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3635 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1097 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = 0;
		 current_analysis->goalnames[(yyvsp[-2].cp)] = (yyvsp[-1].t_goal);
		 delete [] (yyvsp[-2].cp);}
#line 3643 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1104 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal) = (yyvsp[0].t_goal);}
#line 3649 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1106 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal) = new named_goal(current_analysis->goalnames[(yyvsp[0].cp)]); delete [] (yyvsp[0].cp);}
#line 3655 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1111 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new simple_goal((yyvsp[0].t_proposition),E_POS);}
#line 3661 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1113 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new neg_goal((yyvsp[-1].t_goal));simple_goal * s = dynamic_cast<simple_goal *>((yyvsp[-1].t_goal));
       if(s && s->getProp()->head->getName()=="=") {requires(E_EQUALITY);}
       else{requires(E_NEGATIVE_PRECONDITIONS);};}
#line 3669 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1117 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list));}
#line 3675 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1119 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new disj_goal((yyvsp[-1].t_goal_list));
        requires(E_DISJUNCTIVE_PRECONDS);}
#line 3682 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1122 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new imply_goal((yyvsp[-2].t_goal),(yyvsp[-1].t_goal));
        requires(E_DISJUNCTIVE_PRECONDS);}
#line 3689 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1126 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal((yyvsp[-5].t_quantifier),(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3695 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1129 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new qfied_goal((yyvsp[-5].t_quantifier),(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3701 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1131 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new comparison((yyvsp[-3].t_comparison_op),(yyvsp[-2].t_expression),(yyvsp[-1].t_expression));
        requires(E_NFLUENTS);}
#line 3708 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1137 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3714 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1139 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3720 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1144 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3726 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1146 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3732 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1156 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_quantifier)=E_FORALL;
        current_analysis->var_tab_stack.push(
        		current_analysis->buildForallTab());}
#line 3740 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1163 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_quantifier)=E_EXISTS;
        current_analysis->var_tab_stack.push(
        	current_analysis->buildExistsTab());}
#line 3748 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1170 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_proposition)=new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_parameter_symbol_list));}
#line 3754 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1175 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_proposition) = new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_var_symbol_list));}
#line 3760 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1180 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_proposition)=new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_parameter_symbol_list));}
#line 3766 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1185 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pred_decl_list)= (yyvsp[-1].t_pred_decl_list);}
#line 3772 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1187 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_pred_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:predicates ...)");
	}
#line 3780 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1194 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_func_decl_list)= (yyvsp[-1].t_func_decl_list);}
#line 3786 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1196 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_func_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:functions ...)");
	}
#line 3794 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1203 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[-1].t_con_goal);}
#line 3800 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1205 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      }
#line 3808 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1212 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_con_goal) = (yyvsp[-1].t_con_goal);}
#line 3814 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1214 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      }
#line 3822 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1220 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_store)=(yyvsp[-1].t_structure_store); (yyval.t_structure_store)->push_back((yyvsp[0].t_structure_def)); }
#line 3828 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1221 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_store)= new structure_store; (yyval.t_structure_store)->push_back((yyvsp[0].t_structure_def)); }
#line 3834 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1225 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_action_def); }
#line 3840 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1226 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_axiom_def); requires(E_DOMAIN_AXIOMS); }
#line 3846 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1227 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_event_def); requires(E_TIME); }
#line 3852 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1228 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_process_def); requires(E_TIME); }
#line 3858 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1229 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_durative_action_def); requires(E_DURATIVE_ACTIONS); }
#line 3864 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1230 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_def)= (yyvsp[0].t_derivation_rule); requires(E_DERIVED_PREDICATES);}
#line 3870 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1231 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_structure_def) = (yyvsp[0].t_class_def); requires(E_MODULES);}
#line 3876 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1239 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_class_def) = new class_def((yyvsp[-2].t_class),(yyvsp[-1].t_func_decl_list));}
#line 3882 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1243 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_dummy)= 0;
    	current_analysis->var_tab_stack.push(
    					current_analysis->buildRuleTab());}
#line 3890 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1254 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_derivation_rule) = new derivation_rule((yyvsp[-2].t_proposition),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3896 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1266 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_action_def)= current_analysis->buildAction(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
			(yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
			current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp); }
#line 3904 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1270 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in action declaration.");
	 (yyval.t_action_def)= NULL; }
#line 3912 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1283 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_axiom_def)= current_analysis->buildAxiom(current_analysis->axiom_list.new_symbol(),
			(yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
			current_analysis->var_tab_stack.pop()); }
#line 3920 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1287 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in axiom declaration.");
	 (yyval.t_axiom_def)= NULL; }
#line 3928 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1300 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_event_def)= current_analysis->buildEvent(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
		   (yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
		   current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp);}
#line 3936 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1305 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in event declaration.");
	 (yyval.t_event_def)= NULL; }
#line 3944 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1317 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_process_def)= current_analysis->buildProcess(current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp)),
		     (yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
                     current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp);}
#line 3952 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1321 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in process declaration.");
	 (yyval.t_process_def)= NULL; }
#line 3960 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1327 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list) = (yyvsp[-1].t_var_symbol_list); current_analysis->setControlParams((yyval.t_var_symbol_list));}
#line 3966 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1328 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_var_symbol_list) = NULL; current_analysis->setControlParams((yyval.t_var_symbol_list));}
#line 3972 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1339 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_durative_action_def)= (yyvsp[-1].t_durative_action_def);
      (yyval.t_durative_action_def)->name= current_analysis->op_tab.new_symbol_put((yyvsp[-9].cp));
      (yyval.t_durative_action_def)->symtab= current_analysis->var_tab_stack.pop();
      (yyval.t_durative_action_def)->control_parameters = current_analysis->getControlParams();
      (yyval.t_durative_action_def)->parameters= (yyvsp[-6].t_var_symbol_list);
      (yyval.t_durative_action_def)->dur_constraint= (yyvsp[-2].t_goal);
      delete [] (yyvsp[-9].cp);
      delete (yyvsp[-4].t_var_symbol_list);
    }
#line 3986 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1350 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in durative-action declaration.");
	 (yyval.t_durative_action_def)= NULL; }
#line 3994 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1357 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)=(yyvsp[-2].t_durative_action_def); (yyval.t_durative_action_def)->effects=(yyvsp[0].t_effect_lists);}
#line 4000 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1359 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)=(yyvsp[-2].t_durative_action_def); (yyval.t_durative_action_def)->precondition=(yyvsp[0].t_goal);}
#line 4006 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1360 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_durative_action_def)= current_analysis->buildDurativeAction();}
#line 4012 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1365 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal)=(yyvsp[0].t_goal); }
#line 4018 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1367 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list)); }
#line 4024 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1372 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_goal)); }
#line 4030 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1374 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_goal_list)= new goal_list; }
#line 4036 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1379 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_AT_START);}
#line 4042 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1381 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_AT_END);}
#line 4048 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1383 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_OVER_ALL);}
#line 4054 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1385 "pddl+.y" /* yacc.c:1646  */
    {timed_goal * tg = dynamic_cast<timed_goal *>((yyvsp[-1].t_goal));
		(yyval.t_goal) = new timed_goal(new preference((yyvsp[-2].cp),tg->clearGoal()),tg->getTime());
			delete tg;
			requires(E_PREFERENCES);}
#line 4063 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1390 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal) = new preference((yyvsp[-1].t_goal));requires(E_PREFERENCES);}
#line 4069 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1394 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_dummy)= 0; current_analysis->var_tab_stack.push(
    				current_analysis->buildOpTab());}
#line 4076 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1399 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EQUALITY;}
#line 4082 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1400 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_STRIPS;}
#line 4088 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1402 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_TYPING;}
#line 4094 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1404 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_NEGATIVE_PRECONDITIONS;}
#line 4100 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1406 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DISJUNCTIVE_PRECONDS;}
#line 4106 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1407 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS;}
#line 4112 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1408 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_UNIV_PRECS;}
#line 4118 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1409 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_COND_EFFS;}
#line 4124 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1410 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_NFLUENTS | E_OFLUENTS;}
#line 4130 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1412 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DURATIVE_ACTIONS;}
#line 4136 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1413 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_TIME |
                      E_NFLUENTS |
                      E_DURATIVE_ACTIONS; }
#line 4144 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1416 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_ACTIONCOSTS | E_NFLUENTS;}
#line 4150 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1419 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_OFLUENTS;}
#line 4156 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1420 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_NFLUENTS;}
#line 4162 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1421 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)=E_MODULES;}
#line 4168 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1423 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_STRIPS |
		      E_TYPING |
		      E_NEGATIVE_PRECONDITIONS |
		      E_DISJUNCTIVE_PRECONDS |
		      E_EQUALITY |
		      E_EXT_PRECS |
		      E_UNIV_PRECS |
		      E_COND_EFFS;}
#line 4181 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1432 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS |
		      E_UNIV_PRECS;}
#line 4188 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1434 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_pddl_req_flag)= E_DOMAIN_AXIOMS; }
#line 4194 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1437 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_DURATION_INEQUALITIES;}
#line 4200 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1440 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag)= E_CONTINUOUS_EFFECTS;}
#line 4206 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1442 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_DERIVED_PREDICATES;}
#line 4212 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1444 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_TIMED_INITIAL_LITERALS;}
#line 4218 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1446 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_PREFERENCES;}
#line 4224 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1448 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_CONSTRAINTS;}
#line 4230 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1449 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_pddl_req_flag) = E_SUPPLYDEMAND;}
#line 4236 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1451 "pddl+.y" /* yacc.c:1646  */
    {log_error(E_WARNING,"Unrecognised requirements declaration ");
       (yyval.t_pddl_req_flag)= 0; delete [] (yyvsp[0].cp);}
#line 4243 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1457 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[-1].t_const_symbol_list);}
#line 4249 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1461 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_type_list)=(yyvsp[-1].t_type_list); requires(E_TYPING);}
#line 4255 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1471 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[-1].t_problem); (yyval.t_problem)->name = (yyvsp[-7].cp); (yyval.t_problem)->domain_name = (yyvsp[-3].cp);
		if (types_used && !types_defined) {
			yyerrok; log_error(E_FATAL,"Syntax error in problem file - types used, but no :types section in domain file.");
		}

	}
#line 4266 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1478 "pddl+.y" /* yacc.c:1646  */
    {yyerrok; (yyval.t_problem)=NULL;
       	log_error(E_FATAL,"Syntax error in problem definition."); }
#line 4273 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1484 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->req= (yyvsp[-1].t_pddl_req_flag);}
#line 4279 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1485 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->objects= (yyvsp[-1].t_const_symbol_list);}
#line 4285 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1486 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->initial_state= (yyvsp[-1].t_effect_lists);}
#line 4291 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1487 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->the_goal= (yyvsp[-1].t_goal);}
#line 4297 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1489 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->constraints = (yyvsp[-1].t_con_goal);}
#line 4303 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1490 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); if((yyval.t_problem)->metric == 0) {(yyval.t_problem)->metric= (yyvsp[-1].t_metric);}
											else {(yyval.t_problem)->metric->add((yyvsp[-1].t_metric));}}
#line 4310 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1492 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->length= (yyvsp[-1].t_length_spec);}
#line 4316 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1493 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_problem)=new problem;}
#line 4322 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1496 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_const_symbol_list)=(yyvsp[-1].t_const_symbol_list);}
#line 4328 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1499 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists);}
#line 4334 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1502 "pddl+.y" /* yacc.c:1646  */
    {(yyval.vtab) = current_analysis->buildOpTab();}
#line 4340 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1505 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_goal)=(yyvsp[-1].t_goal);delete (yyvsp[-2].vtab);}
#line 4346 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1510 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_metric)= new metric_spec((yyvsp[-2].t_optimization),(yyvsp[-1].t_expression)); }
#line 4352 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1512 "pddl+.y" /* yacc.c:1646  */
    {yyerrok;
        log_error(E_FATAL,"Syntax error in metric declaration.");
        (yyval.t_metric)= NULL; }
#line 4360 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1519 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_length_spec)= new length_spec(E_BOTH,(yyvsp[-3].ival),(yyvsp[-1].ival));}
#line 4366 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1522 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_length_spec) = new length_spec(E_SERIAL,(yyvsp[-1].ival));}
#line 4372 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1526 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_length_spec) = new length_spec(E_PARALLEL,(yyvsp[-1].ival));}
#line 4378 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1532 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_optimization)= E_MINIMIZE;}
#line 4384 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1533 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_optimization)= E_MAXIMIZE;}
#line 4390 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1538 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[-1].t_expression);}
#line 4396 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1539 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_func_term);}
#line 4402 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1540 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression)= (yyvsp[0].t_num_expression);}
#line 4408 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1541 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); }
#line 4414 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1543 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression) = new violation_term((yyvsp[-1].cp));}
#line 4420 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1544 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); }
#line 4426 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1548 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new plus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4432 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1549 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new minus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4438 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1550 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new mul_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4444 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1551 "pddl+.y" /* yacc.c:1646  */
    { (yyval.t_expression)= new div_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4450 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1555 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression) = (yyvsp[0].t_expression);}
#line 4456 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1557 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression) = new plus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression));}
#line 4462 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1561 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression) = (yyvsp[0].t_expression);}
#line 4468 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1563 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_expression) = new mul_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression));}
#line 4474 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1569 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_plan)= (yyvsp[-1].t_plan);
         (yyval.t_plan)->push_back((yyvsp[0].t_step)); }
#line 4481 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1572 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_plan) = (yyvsp[0].t_plan);(yyval.t_plan)->insertTime((yyvsp[-1].fval));}
#line 4487 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1574 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_plan) = (yyvsp[0].t_plan);(yyval.t_plan)->insertTime((yyvsp[-1].ival));}
#line 4493 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1576 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_plan)= new plan;}
#line 4499 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1581 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_step)=(yyvsp[0].t_step);
         (yyval.t_step)->start_time_given=1;
         (yyval.t_step)->start_time=(yyvsp[-2].fval);}
#line 4507 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1585 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_step)=(yyvsp[0].t_step);
	 (yyval.t_step)->start_time_given=0;}
#line 4514 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1591 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_step)= (yyvsp[-3].t_step);
	 (yyval.t_step)->duration_given=1;
         (yyval.t_step)->duration= (yyvsp[-1].fval);}
#line 4522 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1595 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_step)= (yyvsp[0].t_step);
         (yyval.t_step)->duration_given=0;}
#line 4529 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1601 "pddl+.y" /* yacc.c:1646  */
    {(yyval.t_step)= new plan_step(
              current_analysis->op_tab.symbol_get((yyvsp[-2].cp)),
	      (yyvsp[-1].t_const_symbol_list)); delete [] (yyvsp[-2].cp);
      }
#line 4538 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1608 "pddl+.y" /* yacc.c:1646  */
    {(yyval.fval)= (yyvsp[0].fval);}
#line 4544 "pddl+.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1609 "pddl+.y" /* yacc.c:1646  */
    {(yyval.fval)= (float) (yyvsp[0].ival);}
#line 4550 "pddl+.cpp" /* yacc.c:1646  */
    break;


#line 4554 "pddl+.cpp" /* yacc.c:1646  */
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
#line 1612 "pddl+.y" /* yacc.c:1906  */


#include <cstdio>
#include <iostream>
int line_no= 1;
using std::istream;
#include "pddl+.lex.yy.h"

namespace VAL {
extern yyFlexLexer* yfl;
};


int yyerror(char * s)
{
    return 0;
}

int yylex()
{
    return yfl->yylex();
}
