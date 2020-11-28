/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "c.y"

#include <stdio.h>
#include "ast.h"

void yyerror(char * s);
extern int yylex(void);
Node* astRoot = NULL;

#line 80 "c.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "c.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_END = 3,                        /* END  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_VOID = 5,                       /* VOID  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_CONSTANT = 10,                  /* CONSTANT  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_ADD = 12,                       /* ADD  */
  YYSYMBOL_SUBSTRACT = 13,                 /* SUBSTRACT  */
  YYSYMBOL_IDENTIFIER = 14,                /* IDENTIFIER  */
  YYSYMBOL_SEMICOLON = 15,                 /* SEMICOLON  */
  YYSYMBOL_ID = 16,                        /* ID  */
  YYSYMBOL_NUM = 17,                       /* NUM  */
  YYSYMBOL_MULTIPLY = 18,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 19,                    /* DIVIDE  */
  YYSYMBOL_LESS_THAN = 20,                 /* LESS_THAN  */
  YYSYMBOL_LESS_OR_EQUAL = 21,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_THAN = 22,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_OR_EQUAL = 23,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_EQUAL = 24,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 25,                 /* NOT_EQUAL  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_LPAR = 27,                      /* LPAR  */
  YYSYMBOL_RPAR = 28,                      /* RPAR  */
  YYSYMBOL_SLPAR = 29,                     /* SLPAR  */
  YYSYMBOL_SRPAR = 30,                     /* SRPAR  */
  YYSYMBOL_CLPAR = 31,                     /* CLPAR  */
  YYSYMBOL_CRPAR = 32,                     /* CRPAR  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_declaration_list = 35,          /* declaration_list  */
  YYSYMBOL_declaration = 36,               /* declaration  */
  YYSYMBOL_var_declaration = 37,           /* var_declaration  */
  YYSYMBOL_type_specifier = 38,            /* type_specifier  */
  YYSYMBOL_fun_declaration = 39,           /* fun_declaration  */
  YYSYMBOL_params = 40,                    /* params  */
  YYSYMBOL_param_list = 41,                /* param_list  */
  YYSYMBOL_param = 42,                     /* param  */
  YYSYMBOL_compound_stmt = 43,             /* compound_stmt  */
  YYSYMBOL_local_declarations = 44,        /* local_declarations  */
  YYSYMBOL_statement_list = 45,            /* statement_list  */
  YYSYMBOL_statement = 46,                 /* statement  */
  YYSYMBOL_expression_stmt = 47,           /* expression_stmt  */
  YYSYMBOL_selection_stmt = 48,            /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 49,            /* iteration_stmt  */
  YYSYMBOL_return_stmt = 50,               /* return_stmt  */
  YYSYMBOL_expression = 51,                /* expression  */
  YYSYMBOL_var = 52,                       /* var  */
  YYSYMBOL_simple_expression = 53,         /* simple_expression  */
  YYSYMBOL_relop = 54,                     /* relop  */
  YYSYMBOL_addtivie_expression = 55,       /* addtivie_expression  */
  YYSYMBOL_addop = 56,                     /* addop  */
  YYSYMBOL_term = 57,                      /* term  */
  YYSYMBOL_mulop = 58,                     /* mulop  */
  YYSYMBOL_factor = 59,                    /* factor  */
  YYSYMBOL_call = 60,                      /* call  */
  YYSYMBOL_args = 61,                      /* args  */
  YYSYMBOL_arg_list = 62                   /* arg_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   96

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  102

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    85,    86,    90,    91,    95,    96,   100,
     101,   105,   109,   110,   114,   115,   119,   120,   124,   128,
     130,   134,   136,   140,   141,   142,   143,   144,   148,   149,
     153,   154,   158,   162,   163,   167,   168,   172,   173,   177,
     178,   182,   183,   184,   185,   186,   187,   191,   192,   196,
     197,   201,   202,   206,   207,   211,   212,   213,   214,   218,
     222,   223,   227,   228
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "END", "INT", "VOID",
  "WHILE", "IF", "ELSE", "RETURN", "CONSTANT", "ASSIGN", "ADD",
  "SUBSTRACT", "IDENTIFIER", "SEMICOLON", "ID", "NUM", "MULTIPLY",
  "DIVIDE", "LESS_THAN", "LESS_OR_EQUAL", "GREATER_THAN",
  "GREATER_OR_EQUAL", "EQUAL", "NOT_EQUAL", "COMMA", "LPAR", "RPAR",
  "SLPAR", "SRPAR", "CLPAR", "CRPAR", "$accept", "program",
  "declaration_list", "declaration", "var_declaration", "type_specifier",
  "fun_declaration", "params", "param_list", "param", "compound_stmt",
  "local_declarations", "statement_list", "statement", "expression_stmt",
  "selection_stmt", "iteration_stmt", "return_stmt", "expression", "var",
  "simple_expression", "relop", "addtivie_expression", "addop", "term",
  "mulop", "factor", "call", "args", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-14)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       4,   -51,   -51,    13,     4,   -51,   -51,     1,   -51,   -51,
     -51,     9,   -51,    53,     3,    11,    31,    21,    45,   -51,
      42,    25,    43,     4,    70,    46,   -51,   -51,   -51,   -51,
     -51,     4,   -51,    59,    -2,    -1,   -51,    50,    51,    24,
      19,   -51,    -6,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
      76,    69,   -51,    40,    14,   -51,   -51,    -6,    -6,   -51,
      78,    -6,    -6,    54,   -51,    -6,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,    -6,    -6,   -51,   -51,    -6,    55,
      57,   -51,   -51,    58,    61,    60,   -51,   -51,   -51,    56,
      14,   -51,    28,    28,   -51,    -6,   -51,   -51,    80,   -51,
      28,   -51
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    10,     0,     2,     4,     5,     0,     6,     1,
       3,     0,     7,     0,     0,    10,     0,     0,    12,    15,
       0,    16,     0,     0,     0,     0,    20,    11,    14,     8,
      17,    22,    19,     0,     0,     0,    29,     0,     0,     0,
      37,    58,     0,    18,    24,    21,    23,    25,    26,    27,
       0,    56,    36,    40,    48,    52,    57,     0,     0,    33,
       0,    61,     0,     0,    28,     0,    49,    50,    42,    41,
      43,    44,    45,    46,     0,     0,    53,    54,     0,     0,
       0,    34,    63,     0,    60,     0,    55,    35,    56,    39,
      47,    51,     0,     0,    59,     0,    38,    32,    30,    62,
       0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,   -51,    85,    62,    -7,   -51,   -51,   -51,    68,
      72,   -51,   -51,   -50,   -51,   -51,   -51,   -51,   -39,    -8,
     -51,   -51,    10,   -51,    17,   -51,    18,   -51,   -51,   -51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    17,    18,    19,
      44,    31,    34,    45,    46,    47,    48,    49,    50,    51,
      52,    74,    53,    75,    54,    78,    55,    56,    83,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      60,    36,    12,    63,    37,    38,    16,    39,     1,     2,
      40,    41,    12,     9,    40,    41,    16,    11,    79,    80,
      20,    42,    82,    85,    33,    42,    87,    59,    14,    26,
      43,    36,    76,    77,    37,    38,    13,    39,    14,   -13,
      40,    41,    97,    98,    40,    41,    61,    21,    62,    22,
     101,    42,    66,    67,    25,    42,    99,     1,    15,    26,
      68,    69,    70,    71,    72,    73,    88,    88,    66,    67,
      88,    23,    24,    29,    26,    35,    30,    57,    58,    64,
      65,    81,    86,    92,    89,    93,    94,    95,   100,    10,
      96,    28,    90,    32,    27,     0,    91
};

static const yytype_int8 yycheck[] =
{
      39,     3,     3,    42,     6,     7,    13,     9,     4,     5,
      16,    17,     3,     0,    16,    17,    23,    16,    57,    58,
      17,    27,    61,    62,    31,    27,    65,     3,    29,    31,
      32,     3,    18,    19,     6,     7,    27,     9,    29,    28,
      16,    17,    92,    93,    16,    17,    27,    16,    29,    28,
     100,    27,    12,    13,    29,    27,    95,     4,     5,    31,
      20,    21,    22,    23,    24,    25,    74,    75,    12,    13,
      78,    26,    30,     3,    31,    16,    30,    27,    27,     3,
      11,     3,    28,    28,    74,    28,    28,    26,     8,     4,
      30,    23,    75,    31,    22,    -1,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,    34,    35,    36,    37,    38,    39,     0,
      36,    16,     3,    27,    29,     5,    38,    40,    41,    42,
      17,    16,    28,    26,    30,    29,    31,    43,    42,     3,
      30,    44,    37,    38,    45,    16,     3,     6,     7,     9,
      16,    17,    27,    32,    43,    46,    47,    48,    49,    50,
      51,    52,    53,    55,    57,    59,    60,    27,    27,     3,
      51,    27,    29,    51,     3,    11,    12,    13,    20,    21,
      22,    23,    24,    25,    54,    56,    18,    19,    58,    51,
      51,     3,    51,    61,    62,    51,    28,    51,    52,    55,
      57,    59,    28,    28,    28,    26,    30,    46,    46,    51,
       8,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    37,    37,    38,
      38,    39,    40,    40,    41,    41,    42,    42,    43,    44,
      44,    45,    45,    46,    46,    46,    46,    46,    47,    47,
      48,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    60,
      61,    61,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     6,     1,     1,     3,     1,     2,     4,     4,     2,
       0,     2,     0,     1,     1,     1,     1,     1,     2,     1,
       5,     7,     5,     2,     3,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     4,
       1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: declaration_list  */
#line 81 "c.y"
                                                                                                                { (yyval.node) = createProgramNode((yyvsp[0].node), 0); astRoot = (yyval.node);}
#line 1196 "c.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 85 "c.y"
                                                                                                { (yyval.node) = createDeclarationNode((yyvsp[-1].node), (yyvsp[0].node));}
#line 1202 "c.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 86 "c.y"
                                                                                                                { (yyval.node) = createDeclarationNode((yyvsp[0].node), 0);}
#line 1208 "c.tab.c"
    break;

  case 5: /* declaration: var_declaration  */
#line 90 "c.y"
                                                                                                                { (yyval.node) = createDeclarationNode((yyvsp[0].node), 0);}
#line 1214 "c.tab.c"
    break;

  case 6: /* declaration: fun_declaration  */
#line 91 "c.y"
                                                                                                                { (yyval.node) = createDeclarationNode((yyvsp[0].node), 0);}
#line 1220 "c.tab.c"
    break;

  case 7: /* var_declaration: type_specifier ID END  */
#line 95 "c.y"
                                                                                                        { (yyval.node) = createVarDeclaration((yyvsp[-2].node), (yyvsp[-1].strings), 0);}
#line 1226 "c.tab.c"
    break;

  case 8: /* var_declaration: type_specifier ID SLPAR NUM SRPAR END  */
#line 96 "c.y"
                                                                                        { (yyval.node) = createVarDeclaration((yyvsp[-5].node), (yyvsp[-4].strings), (yyvsp[-2].intVal));}
#line 1232 "c.tab.c"
    break;

  case 9: /* type_specifier: INT  */
#line 100 "c.y"
                                                                                                                        { (yyval.node) = createTypeSpecifier("INT");}
#line 1238 "c.tab.c"
    break;

  case 10: /* type_specifier: VOID  */
#line 101 "c.y"
                                                                                                                        { (yyval.node) = createTypeSpecifier("VOID");}
#line 1244 "c.tab.c"
    break;

  case 11: /* fun_declaration: type_specifier ID LPAR params RPAR compound_stmt  */
#line 105 "c.y"
                                                                                { (yyval.node) = createFunctionDeclaration((yyvsp[-5].node), (yyvsp[-4].strings), (yyvsp[-2].node), (yyvsp[0].node));}
#line 1250 "c.tab.c"
    break;

  case 12: /* params: param_list  */
#line 109 "c.y"
                                                                                                                { (yyval.node) = createParam((yyvsp[0].node));}
#line 1256 "c.tab.c"
    break;

  case 13: /* params: VOID  */
#line 110 "c.y"
                                                                                                                        { (yyval.node) = createParam("VOID");}
#line 1262 "c.tab.c"
    break;

  case 14: /* param_list: param_list COMMA param  */
#line 114 "c.y"
                                                                                                        { (yyval.node) = (yyvsp[-2].node); addLinkToList((yyval.node), (yyvsp[0].node));}
#line 1268 "c.tab.c"
    break;

  case 15: /* param_list: param  */
#line 115 "c.y"
                                                                                                                        { (yyval.node) = createListNode("ParametersList", (yyvsp[0].node));}
#line 1274 "c.tab.c"
    break;

  case 16: /* param: type_specifier ID  */
#line 119 "c.y"
                                                                                                                { (yyval.node) = createVarDeclaration((yyvsp[-1].node), (yyvsp[0].strings), 0);}
#line 1280 "c.tab.c"
    break;

  case 17: /* param: type_specifier ID SLPAR SRPAR  */
#line 120 "c.y"
                                                                                                { (yyval.node) = createVarDeclaration((yyvsp[-3].node), (yyvsp[-2].strings), 0);}
#line 1286 "c.tab.c"
    break;

  case 18: /* compound_stmt: CLPAR local_declarations statement_list CRPAR  */
#line 124 "c.y"
                                                                                { (yyval.node) = createCompoundStatement((yyvsp[-2].node), (yyvsp[-1].node));}
#line 1292 "c.tab.c"
    break;

  case 19: /* local_declarations: local_declarations var_declaration  */
#line 128 "c.y"
                                                                                        { (yyval.node) = createListNode("LocalDeclarations", (yyvsp[-1].node)); 
																	addLinkToList((yyval.node), (yyvsp[0].node));}
#line 1299 "c.tab.c"
    break;

  case 20: /* local_declarations: %empty  */
#line 130 "c.y"
                                                                                                                                { (yyval.node) = NULL;}
#line 1305 "c.tab.c"
    break;

  case 21: /* statement_list: statement_list statement  */
#line 134 "c.y"
                                                                                                        { (yyval.node) = createListNode("StatementList", (yyvsp[-1].node)); 
																	addLinkToList((yyval.node), (yyvsp[0].node));}
#line 1312 "c.tab.c"
    break;

  case 22: /* statement_list: %empty  */
#line 136 "c.y"
                                                                                                                                { (yyval.node) = NULL;}
#line 1318 "c.tab.c"
    break;

  case 23: /* statement: expression_stmt  */
#line 140 "c.y"
                                                                                                                { (yyval.node) = createExpressionStatement(NULL);}
#line 1324 "c.tab.c"
    break;

  case 24: /* statement: compound_stmt  */
#line 141 "c.y"
                                                                                                                { (yyval.node) = createCompoundStatement(NULL, NULL);}
#line 1330 "c.tab.c"
    break;

  case 25: /* statement: selection_stmt  */
#line 142 "c.y"
                                                                                                                { (yyval.node) = createIfStatement(NULL, NULL, NULL);}
#line 1336 "c.tab.c"
    break;

  case 26: /* statement: iteration_stmt  */
#line 143 "c.y"
                                                                                                                { (yyval.node) = createWhileStatement(NULL, NULL);}
#line 1342 "c.tab.c"
    break;

  case 27: /* statement: return_stmt  */
#line 144 "c.y"
                                                                                                                { (yyval.node) = createReturnStatement(NULL);}
#line 1348 "c.tab.c"
    break;

  case 28: /* expression_stmt: expression END  */
#line 148 "c.y"
                                                                                                                { (yyval.node) = createExpressionStatement((yyvsp[-1].node));}
#line 1354 "c.tab.c"
    break;

  case 29: /* expression_stmt: END  */
#line 149 "c.y"
                                                                                                                        { (yyval.node) = createExpressionStatement(NULL);}
#line 1360 "c.tab.c"
    break;

  case 30: /* selection_stmt: IF LPAR expression RPAR statement  */
#line 153 "c.y"
                                                                                                { (yyval.node) = createIfStatement((yyvsp[-2].node), (yyvsp[0].node), NULL);}
#line 1366 "c.tab.c"
    break;

  case 31: /* selection_stmt: IF LPAR expression RPAR statement ELSE statement  */
#line 154 "c.y"
                                                                                { (yyval.node) = createIfStatement((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 1372 "c.tab.c"
    break;

  case 32: /* iteration_stmt: WHILE LPAR expression RPAR statement  */
#line 158 "c.y"
                                                                                        { (yyval.node) = createWhileStatement((yyvsp[-2].node), (yyvsp[0].node));}
#line 1378 "c.tab.c"
    break;

  case 33: /* return_stmt: RETURN END  */
#line 162 "c.y"
                                                                                                                { (yyval.node) = createReturnStatement(NULL);}
#line 1384 "c.tab.c"
    break;

  case 34: /* return_stmt: RETURN expression END  */
#line 163 "c.y"
                                                                                                        { (yyval.node) = createReturnStatement((yyvsp[-1].node));}
#line 1390 "c.tab.c"
    break;

  case 35: /* expression: var ASSIGN expression  */
#line 167 "c.y"
                                                                                                        { (yyval.node) = createExpression((yyvsp[-2].node), (yyvsp[0].node));}
#line 1396 "c.tab.c"
    break;

  case 36: /* expression: simple_expression  */
#line 168 "c.y"
                                                                                                                { (yyval.node) = createExpression(NULL, (yyvsp[0].node));}
#line 1402 "c.tab.c"
    break;

  case 37: /* var: ID  */
#line 172 "c.y"
                                                                                                                        { (yyval.node) = createVar((yyvsp[0].strings), NULL);}
#line 1408 "c.tab.c"
    break;

  case 38: /* var: ID SLPAR expression SRPAR  */
#line 173 "c.y"
                                                                                                        { (yyval.node) = createVar((yyvsp[-3].strings), (yyvsp[-1].node));}
#line 1414 "c.tab.c"
    break;

  case 39: /* simple_expression: addtivie_expression relop addtivie_expression  */
#line 177 "c.y"
                                                                                { (yyval.node) = createSimpleExpression((yyvsp[-2].node), (yyvsp[0].node));}
#line 1420 "c.tab.c"
    break;

  case 40: /* simple_expression: addtivie_expression  */
#line 178 "c.y"
                                                                                                        { (yyval.node) = createSimpleExpression((yyvsp[0].node), NULL);}
#line 1426 "c.tab.c"
    break;

  case 41: /* relop: LESS_OR_EQUAL  */
#line 182 "c.y"
                                                                                                                { (yyval.node) = createRelationalOperator("LESS_OR_EQUAL");}
#line 1432 "c.tab.c"
    break;

  case 42: /* relop: LESS_THAN  */
#line 183 "c.y"
                                                                                                                        { (yyval.node) = createRelationalOperator("LESS_THAN");}
#line 1438 "c.tab.c"
    break;

  case 43: /* relop: GREATER_THAN  */
#line 184 "c.y"
                                                                                                                { (yyval.node) = createRelationalOperator("GREATER_THAN");}
#line 1444 "c.tab.c"
    break;

  case 44: /* relop: GREATER_OR_EQUAL  */
#line 185 "c.y"
                                                                                                                { (yyval.node) = createRelationalOperator("GREATER_OR_EQUAL");}
#line 1450 "c.tab.c"
    break;

  case 45: /* relop: EQUAL  */
#line 186 "c.y"
                                                                                                                        { (yyval.node) = createRelationalOperator("EQUAL");}
#line 1456 "c.tab.c"
    break;

  case 46: /* relop: NOT_EQUAL  */
#line 187 "c.y"
                                                                                                                        { (yyval.node) = createRelationalOperator("NOT_EQUAL");}
#line 1462 "c.tab.c"
    break;

  case 47: /* addtivie_expression: addtivie_expression addop term  */
#line 191 "c.y"
                                                                                                { (yyval.node) = createAdditiveExpression((yyvsp[-2].node), (yyvsp[0].node));}
#line 1468 "c.tab.c"
    break;

  case 48: /* addtivie_expression: term  */
#line 192 "c.y"
                                                                                                                        { (yyval.node) = createAdditiveExpression((yyvsp[0].node), NULL);}
#line 1474 "c.tab.c"
    break;

  case 49: /* addop: ADD  */
#line 196 "c.y"
                                                                                                                        { (yyval.node) = createAddOperator("ADD");}
#line 1480 "c.tab.c"
    break;

  case 50: /* addop: SUBSTRACT  */
#line 197 "c.y"
                                                                                                                        { (yyval.node) = createAddOperator("SUBSTRACT");}
#line 1486 "c.tab.c"
    break;

  case 51: /* term: term mulop factor  */
#line 201 "c.y"
                                                                                                                { (yyval.node) = createMultiplier((yyvsp[-2].node), (yyvsp[0].node));}
#line 1492 "c.tab.c"
    break;

  case 52: /* term: factor  */
#line 202 "c.y"
                                                                                                                        { (yyval.node) = createMultiplier((yyvsp[0].node), NULL);}
#line 1498 "c.tab.c"
    break;

  case 53: /* mulop: MULTIPLY  */
#line 206 "c.y"
                                                                                                                        { (yyval.node) = createMulOperator("MULTIPLY");}
#line 1504 "c.tab.c"
    break;

  case 54: /* mulop: DIVIDE  */
#line 207 "c.y"
                                                                                                                        { (yyval.node) = createMulOperator("DIVIDE");}
#line 1510 "c.tab.c"
    break;

  case 55: /* factor: LPAR expression RPAR  */
#line 211 "c.y"
                                                                                                        { (yyval.node) = createFactor((yyvsp[-1].node));}
#line 1516 "c.tab.c"
    break;

  case 56: /* factor: var  */
#line 212 "c.y"
                                                                                                                        { (yyval.node) = createFactor((yyvsp[0].node));}
#line 1522 "c.tab.c"
    break;

  case 57: /* factor: call  */
#line 213 "c.y"
                                                                                                                        { (yyval.node) = createFactor((yyvsp[0].node));}
#line 1528 "c.tab.c"
    break;

  case 58: /* factor: NUM  */
#line 214 "c.y"
                                                                                                                        { (yyval.node) = createFactor((yyvsp[0].intVal));}
#line 1534 "c.tab.c"
    break;

  case 59: /* call: ID LPAR args RPAR  */
#line 218 "c.y"
                                                                                                                { (yyval.node) = createCall((yyvsp[-3].strings), (yyvsp[-1].node));}
#line 1540 "c.tab.c"
    break;

  case 60: /* args: arg_list  */
#line 222 "c.y"
                                                                                                                        { (yyval.node) = createArgs((yyvsp[0].node));}
#line 1546 "c.tab.c"
    break;

  case 61: /* args: %empty  */
#line 223 "c.y"
                                                                                                                                { (yyval.node) = NULL;}
#line 1552 "c.tab.c"
    break;

  case 62: /* arg_list: arg_list COMMA expression  */
#line 227 "c.y"
                                                                                                        { (yyval.node) = (yyvsp[-2].node); addLinkToList((yyval.node), (yyvsp[0].node));}
#line 1558 "c.tab.c"
    break;

  case 63: /* arg_list: expression  */
#line 228 "c.y"
                                                                                                                { (yyval.node) = createListNode("ArgumentsList", (yyvsp[0].node));}
#line 1564 "c.tab.c"
    break;


#line 1568 "c.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 231 "c.y"


void yyerror(char * s)
{
	printf("%s\n", s);
}
