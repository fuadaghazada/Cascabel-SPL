#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0


#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define COMMENT 257
#define PLUS 258
#define MINUS 259
#define MULTIPLY 260
#define DIVIDE 261
#define MODULUS 262
#define SEMICOLON 263
#define GREATER 264
#define SMALLER 265
#define GREATER_OR_EQUAL 266
#define SMALLER_OR_EQUAL 267
#define NOT_EQUAL 268
#define COMMA 269
#define DOT 270
#define ASSIGNMENT_OP 271
#define EQUALITY_CHECK 272
#define LEFTBRACE 273
#define RIGHTBRACE 274
#define LEFT_PARANT 275
#define RIGHT_PARANT 276
#define LEFT_SQUARE_BRACE 277
#define RIGHT_SQUARE_BRACE 278
#define UNDERSCORE 279
#define SET_SYMBOL 280
#define NEW_LINE 281
#define PRINT 282
#define PRINTLN 283
#define BEGINC 284
#define END 285
#define IF 286
#define ELSE 287
#define FOR 288
#define WHILE 289
#define UNION_OP 290
#define INTERSECTION_OP 291
#define SET_DIFFERENCE_OP 292
#define CARTESIAN_PRODUCT_OP 293
#define SUBSET_RELATION 294
#define SUPERSET_RELATION 295
#define PROPER_SUBSET_RELATION 296
#define IMPROPER_SUBSET_RELATION 297
#define PROPER_SUPERSET_RELATION 298
#define IMPROPER_SUPERSET_RELATION 299
#define ELEMENT_OF 300
#define MAIN 301
#define EMPTY_SET 302
#define SET 303
#define ARRAY 304
#define VAR_IDENTIFIER 305
#define INTEGERC 306
#define VOID 307
#define READ 308
#define RETURN 309
#define RANGE 310
#define IN 311
#define FLOAT 312
#define STRING 313
#define SPECIAL 314
#define INTEGER_TYPE 315
#define FLOAT_TYPE 316
#define STRING_TYPE 317
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    3,    4,    4,    5,    5,    5,    5,    2,
    2,    2,    6,    6,    8,    8,    8,    8,    8,    8,
    8,   12,   13,   13,   14,   15,   15,   22,   22,   22,
   24,   16,   16,   16,   16,   25,   25,   26,   26,   17,
   17,   30,   30,   31,   31,   33,   33,   32,   32,   32,
   32,   11,   11,   11,   36,   36,   36,   36,   36,   36,
   36,   36,   36,   36,   39,   39,   37,   37,   23,   23,
   21,    9,    9,   42,   42,   43,   43,   44,   44,   45,
   45,   46,   46,   46,   46,   18,   18,   29,   29,   29,
   29,   29,   35,   35,   35,   47,   34,   40,   48,   48,
   49,   49,   49,   49,   27,   27,   27,   28,   28,   28,
   28,   50,   50,   50,   51,   51,   51,    7,    7,   53,
   52,   38,   38,   38,   38,   38,   38,   38,   10,   41,
   19,   20,
};
static const short yylen[] = {                            2,
    1,    5,    1,    2,    3,    1,    1,    1,    1,    1,
    1,    2,    8,   13,    1,    1,    1,    1,    1,    1,
    1,    2,    1,    1,    3,    2,    2,    1,    1,    1,
    3,    1,    1,    1,    1,    1,    3,    5,    3,    1,
    1,    1,    3,    5,    3,    4,    4,    1,    3,    1,
    3,    3,    3,    1,    3,    3,    3,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    3,
    1,    1,    1,    8,    9,    9,   10,    2,    4,    1,
    3,    1,    1,    1,    1,    3,    4,    1,    3,    1,
    3,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    3,    5,    5,    3,    3,    3,
    3,    1,    1,    1,    1,    1,    1,    1,    1,   13,
    8,    1,    1,    1,    1,    1,    1,    1,    2,    1,
    4,    4,
};
static const short yydefred[] = {                         0,
    0,    0,    1,    0,    0,    0,    0,   11,  129,   12,
    0,    0,    0,    0,    0,    0,    0,    0,   71,   99,
    0,    0,  100,  130,   28,   29,   30,    0,    3,    0,
    6,    7,    8,    9,   15,   16,   17,   18,   19,   20,
   21,   23,   24,    0,    0,   32,   33,   34,   35,   40,
   41,    0,    0,   93,   72,   73,   94,  118,  119,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  101,  102,
  103,  104,  112,  115,  113,  114,  116,  117,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   22,
    0,   60,   59,   64,    0,    0,    0,    0,    2,    0,
    0,    0,   27,    0,   26,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   37,    0,   39,    0,  105,
  108,  109,    0,   43,    0,   97,    0,    0,    0,   65,
   66,    0,    0,   67,   68,  124,  123,  126,  127,  128,
  122,  125,    0,    0,    0,    5,   25,   86,   98,   84,
   82,   83,   85,    0,    0,    0,    0,   45,  111,  110,
    0,  131,  132,    0,    0,    0,   96,    0,   95,    0,
    0,   92,    0,    0,    0,    0,   47,   46,    0,    0,
    0,   55,   56,   52,   53,   57,   87,    0,    0,   70,
    0,    0,  107,    0,    0,    0,    0,   38,    0,  106,
    0,   44,    0,    0,    0,    0,   81,    0,    0,    0,
    0,    0,   91,   89,   51,   49,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   79,    0,    0,    0,    0,
    0,  121,   74,    0,    0,    0,    0,    0,    0,   75,
    0,   76,    0,    0,    0,   31,   77,    0,    0,    0,
    0,   14,  120,
};
static const short yydgoto[] = {                          2,
    3,    7,   28,   29,   30,   31,   32,   33,   34,    8,
   90,   35,   36,   37,   38,   39,   40,   41,   42,   43,
   91,   45,  105,  236,   46,   47,   92,   93,  170,   50,
   51,  175,   94,   95,   53,   96,  143,  144,  132,   97,
   54,   55,   56,  181,  154,  155,  172,   57,   79,   80,
   81,   58,   59,
};
static const short yysindex[] = {                      -242,
 -231,    0,    0, -221, -221, -221,  176,    0,    0,    0,
 -273, -184, -183, -177, -233, -173,   86, -157,    0,    0,
 -233, -248,    0,    0,    0,    0,    0, -152,    0, -221,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -209, -233,    0,    0,    0,    0,    0,
    0, -163, -193,    0,    0,    0,    0,    0,    0, -106,
 -148, -248, -248, -248, -174, -248, -160, -264,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -260, -158,
 -156, -149, -118, -285, -114,   42, -111,    0,    0,    0,
 -229,    0,    0,    0, -229,  -89, -229,    0,    0,  176,
 -248, -232,    0, -115,    0, -248, -141, -131, -106, -105,
 -102,  -87, -130,  -85,  -76,    0,  -22,    0, -273,    0,
    0,    0,  -70,    0, -171,    0,  -72,  -67, -269,    0,
    0, -248, -248,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -248, -248, -248,    0,    0,    0,    0,    0,
    0,    0,    0,  -64,  -51, -233, -266,    0,    0,    0,
 -108,    0,    0,  -82,  -56,  -59,    0,  -42,    0,  -44,
  -40,    0,  -41,  -33,  -29,  -19,    0,    0,  -32, -233,
  -25,    0,    0,    0,    0,    0,    0, -155,  -16,    0,
  -27,  -18,    0,  -20, -155,  -13,  -22,    0,  -22,    0,
 -171,    0, -171,  -12,   10,    1,    0,    5,    4,  176,
   23,  176,    0,    0,    0,    0,  176,  -83,    8,  176,
   12,  -23, -155,    9,   13,    0,  176,  -14,  176,   14,
   21,    0,    0,   19, -248,   28,  -14,   15,   35,    0,
 -221,    0,   38,   24,   31,    0,    0,  176,  176,   39,
   40,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  140,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -205, -203,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -96,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    6,   50,    0,
   94,    0,    0,    0,  237, -241,  257,  138,    0, -224,
    0,    0,    0, -187,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -205,    0,    0,    0,    0,    0,
    0,    0, -203,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   44,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   22,    0,    0,
   53,    0,    0,   51,    0,   52,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -187,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   66,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -182,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    7,    0,  -81,    0,    0,    0,    0,    0,    0,
  -38,    0,    0,  283,    0,    0,    0,    0,    0,    0,
   -7, -128,  187,  108,  281,    0,   11,   -3,  -74,  267,
    0, -132,   27,  -79,  -84,  -45,    0,    0,   43,  -99,
   20,    0,    0, -151,  166, -178,    0,    0,  247,  310,
    0,    0,    0,
};
#define YYTABLESIZE 538
static const short yytable[] = {                         44,
  180,   11,  152,   49,  128,  192,  179,   65,  117,  191,
   11,    9,   10,   85,  119,   54,  211,   48,  146,   19,
  126,   61,  151,  110,  111,  112,   11,  114,  180,   60,
  130,  131,  171,   52,   54,    5,  100,  104,   60,   54,
  176,   98,  120,  148,  231,   25,   26,   27,   25,   26,
   27,   36,    4,   42,   86,   87,   19,   88,    1,    6,
    4,  101,  147,   89,   24,  102,  226,  158,  215,   69,
  216,   19,   19,  126,   13,   36,  127,   42,  118,  149,
   24,   98,   98,   98,    4,   98,  182,  183,  152,  180,
   62,   63,   44,   69,  150,  152,   49,   64,   13,  186,
   73,   66,   75,   76,  184,  185,  107,  106,  151,  169,
   48,   82,  171,   83,  171,  151,  176,  169,  176,   84,
   98,  153,  213,  152,  214,   98,   52,  109,  222,  173,
  224,  174,   99,   19,   20,  225,  113,  133,  228,  145,
   23,   24,  115,  151,  121,  234,  122,  237,  189,   19,
  126,   98,   98,  156,  123,  101,  149,   24,  125,  157,
  129,  159,   98,   98,   98,   84,  250,  251,  134,  135,
  162,  160,  205,  163,  136,  137,  138,  139,  140,  165,
  150,  141,  142,   69,   70,   71,   72,  150,  164,  169,
  166,  169,   67,  169,  193,  169,  241,   95,   82,   95,
   95,  194,   44,   95,   44,  177,   49,  153,   49,   44,
  178,  187,   44,   49,  153,  150,   49,  188,  195,   44,
   48,   44,   48,   49,  196,   49,  197,   48,  199,  198,
   48,   25,   26,   27,  200,  201,   52,   48,   52,   48,
   44,   44,  153,   52,   49,   49,   52,  246,  202,  203,
  206,  204,  156,   52,   98,   52,  208,  209,   48,   48,
  210,  230,   97,   97,   97,   97,   97,  212,  217,   97,
   97,   97,   97,   97,   52,   52,   97,   97,  218,  167,
  168,   97,   19,   20,  219,  220,   97,  221,  227,   23,
   24,  223,  229,  232,  235,   90,  239,  233,  244,   99,
  238,   99,   99,  240,  248,   99,   98,   98,   98,   98,
   98,  249,  242,   98,   98,   98,   98,   98,  245,   80,
   98,   98,  247,  252,  253,   98,   88,  103,   50,   48,
   98,   69,   70,   71,   72,   73,   74,   75,   76,   77,
   78,   78,  190,  100,  243,  100,  100,  116,  124,  100,
   58,   58,   58,  207,   67,  161,   68,   58,   58,   58,
   58,   58,  108,    0,   58,   58,    0,    0,    0,   58,
    0,    0,    0,    0,   58,   69,   70,   71,   72,   73,
   74,   75,   76,   77,   78,    0,    0,   95,    0,   95,
   95,    0,    0,   95,   63,   63,   63,    0,    0,    0,
    0,   63,   63,   63,   63,   63,    0,    0,   63,   63,
    0,    0,    0,   63,   10,    0,    0,    0,   63,    0,
    0,   10,   10,    0,   10,   10,    0,   10,   10,    0,
    0,   93,    0,   93,   93,    0,    0,   93,    0,    0,
    0,    0,   10,   10,   10,   10,   10,   10,   10,    0,
   11,   10,   10,    0,   10,   10,   10,   12,   13,    0,
    0,   14,    0,   15,   16,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   17,   18,
   19,   20,   21,   22,    0,    0,    0,   23,   24,    0,
   25,   26,   27,   61,   61,   61,    0,    0,    0,    0,
   61,   61,   61,   61,   61,    0,    0,   61,   61,    0,
    0,    0,   61,   62,   62,   62,    0,   61,    0,    0,
   62,   62,   62,   62,   62,    0,    0,   62,   62,    0,
    0,    0,   62,    0,    0,    0,    0,   62,
};
static const short yycheck[] = {                          7,
  129,  275,  102,    7,   84,  157,  276,   15,  273,  276,
  275,    5,    6,   21,  275,  257,  195,    7,  100,  305,
  306,   11,  102,   62,   63,   64,  275,   66,  157,  303,
  260,  261,  117,    7,  276,  257,   30,   45,  303,  281,
  125,   22,  303,  276,  223,  315,  316,  317,  315,  316,
  317,  257,  284,  257,  303,  304,  305,  306,  301,  281,
  285,  271,  101,  312,  313,  275,  218,  106,  201,  257,
  203,  305,  305,  306,  257,  281,   84,  281,   68,  312,
  313,   62,   63,   64,  309,   66,  132,  133,  188,  218,
  275,  275,  100,  281,  102,  195,  100,  275,  281,  145,
  294,  275,  296,  297,  143,  144,  300,  271,  188,  117,
  100,  269,  197,  271,  199,  195,  201,  125,  203,  277,
  101,  102,  197,  223,  199,  106,  100,  276,  210,  119,
  212,  303,  285,  305,  306,  217,  311,   95,  220,   97,
  312,  313,  303,  223,  303,  227,  303,  229,  156,  305,
  306,  132,  133,  269,  304,  271,  312,  313,  277,  275,
  275,  303,  143,  144,  145,  277,  248,  249,  258,  259,
  276,  303,  180,  276,  264,  265,  266,  267,  268,  310,
  188,  271,  272,  290,  291,  292,  293,  195,  276,  197,
  276,  199,  269,  201,  303,  203,  235,  294,  269,  296,
  297,  284,  210,  300,  212,  278,  210,  188,  212,  217,
  278,  276,  220,  217,  195,  223,  220,  269,  275,  227,
  210,  229,  212,  227,  284,  229,  269,  217,  269,  274,
  220,  315,  316,  317,  276,  269,  210,  227,  212,  229,
  248,  249,  223,  217,  248,  249,  220,  241,  278,  269,
  276,  284,  269,  227,  235,  229,  284,  276,  248,  249,
  281,  285,  257,  258,  259,  260,  261,  281,  281,  264,
  265,  266,  267,  268,  248,  249,  271,  272,  269,  302,
  303,  276,  305,  306,  284,  281,  281,  284,  281,  312,
  313,  269,  281,  285,  309,  274,  276,  285,  284,  294,
  287,  296,  297,  285,  281,  300,  257,  258,  259,  260,
  261,  281,  285,  264,  265,  266,  267,  268,  284,  276,
  271,  272,  285,  285,  285,  276,  274,   45,  278,  278,
  281,  290,  291,  292,  293,  294,  295,  296,  297,  298,
  299,  276,  156,  294,  237,  296,  297,   67,   82,  300,
  257,  258,  259,  188,  269,  109,  271,  264,  265,  266,
  267,  268,   53,   -1,  271,  272,   -1,   -1,   -1,  276,
   -1,   -1,   -1,   -1,  281,  290,  291,  292,  293,  294,
  295,  296,  297,  298,  299,   -1,   -1,  294,   -1,  296,
  297,   -1,   -1,  300,  257,  258,  259,   -1,   -1,   -1,
   -1,  264,  265,  266,  267,  268,   -1,   -1,  271,  272,
   -1,   -1,   -1,  276,  275,   -1,   -1,   -1,  281,   -1,
   -1,  282,  283,   -1,  285,  286,   -1,  288,  289,   -1,
   -1,  294,   -1,  296,  297,   -1,   -1,  300,   -1,   -1,
   -1,   -1,  303,  304,  305,  306,  307,  308,  309,   -1,
  275,  312,  313,   -1,  315,  316,  317,  282,  283,   -1,
   -1,  286,   -1,  288,  289,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  303,  304,
  305,  306,  307,  308,   -1,   -1,   -1,  312,  313,   -1,
  315,  316,  317,  257,  258,  259,   -1,   -1,   -1,   -1,
  264,  265,  266,  267,  268,   -1,   -1,  271,  272,   -1,
   -1,   -1,  276,  257,  258,  259,   -1,  281,   -1,   -1,
  264,  265,  266,  267,  268,   -1,   -1,  271,  272,   -1,
   -1,   -1,  276,   -1,   -1,   -1,   -1,  281,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 317
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"COMMENT","PLUS","MINUS",
"MULTIPLY","DIVIDE","MODULUS","SEMICOLON","GREATER","SMALLER",
"GREATER_OR_EQUAL","SMALLER_OR_EQUAL","NOT_EQUAL","COMMA","DOT","ASSIGNMENT_OP",
"EQUALITY_CHECK","LEFTBRACE","RIGHTBRACE","LEFT_PARANT","RIGHT_PARANT",
"LEFT_SQUARE_BRACE","RIGHT_SQUARE_BRACE","UNDERSCORE","SET_SYMBOL","NEW_LINE",
"PRINT","PRINTLN","BEGINC","END","IF","ELSE","FOR","WHILE","UNION_OP",
"INTERSECTION_OP","SET_DIFFERENCE_OP","CARTESIAN_PRODUCT_OP","SUBSET_RELATION",
"SUPERSET_RELATION","PROPER_SUBSET_RELATION","IMPROPER_SUBSET_RELATION",
"PROPER_SUPERSET_RELATION","IMPROPER_SUPERSET_RELATION","ELEMENT_OF","MAIN",
"EMPTY_SET","SET","ARRAY","VAR_IDENTIFIER","INTEGERC","VOID","READ","RETURN",
"RANGE","IN","FLOAT","STRING","SPECIAL","INTEGER_TYPE","FLOAT_TYPE",
"STRING_TYPE",
};
static const char *yyrule[] = {
"$accept : start",
"start : main_program",
"main_program : MAIN BEGINC new_line program END",
"program : statements",
"statements : statement new_line",
"statements : statement new_line statements",
"statement : if",
"statement : loop",
"statement : single_statement",
"statement : function_def",
"new_line : NEW_LINE",
"new_line : comment",
"new_line : NEW_LINE new_line",
"if : IF LEFT_PARANT expression RIGHT_PARANT BEGINC NEW_LINE statements END",
"if : IF LEFT_PARANT expression RIGHT_PARANT BEGINC NEW_LINE statements END ELSE BEGINC NEW_LINE statements END",
"single_statement : input_statement",
"single_statement : output_statement",
"single_statement : assignment_operation",
"single_statement : declaration_statement",
"single_statement : set_statement",
"single_statement : array_statement",
"single_statement : function_call",
"input_statement : READ expression",
"output_statement : print",
"output_statement : println",
"assignment_operation : variable_identifier ASSIGNMENT_OP expression",
"declaration_statement : type variable_identifier_list",
"declaration_statement : type assignment_operation",
"type : INTEGER_TYPE",
"type : FLOAT_TYPE",
"type : STRING_TYPE",
"return_statement : RETURN expression new_line",
"set_statement : set_declaration",
"set_statement : set_assignment",
"set_statement : set_operation",
"set_statement : set_relation",
"set_declaration : SET",
"set_declaration : SET COMMA set_declaration",
"set_assignment : SET ASSIGNMENT_OP LEFTBRACE set RIGHTBRACE",
"set_assignment : SET ASSIGNMENT_OP set_operation",
"array_statement : array_declaration",
"array_statement : array_assignment",
"array_declaration : ARRAY",
"array_declaration : ARRAY COMMA array_declaration",
"array_assignment : ARRAY ASSIGNMENT_OP LEFT_SQUARE_BRACE array RIGHT_SQUARE_BRACE",
"array_assignment : array_access ASSIGNMENT_OP expression",
"array_access : ARRAY LEFT_SQUARE_BRACE integer RIGHT_SQUARE_BRACE",
"array_access : ARRAY LEFT_SQUARE_BRACE variable_identifier RIGHT_SQUARE_BRACE",
"array : set_element",
"array : set_element COMMA array",
"array : SET",
"array : SET COMMA array",
"expression : term mid_prec_op expression",
"expression : term comparison_op expression",
"expression : term",
"term : variable_identifier high_prec_op term",
"term : integer high_prec_op term",
"term : float high_prec_op term",
"term : variable_identifier",
"term : set_relation",
"term : set_operation",
"term : integer",
"term : float",
"term : string",
"term : array_access",
"high_prec_op : MULTIPLY",
"high_prec_op : DIVIDE",
"mid_prec_op : PLUS",
"mid_prec_op : MINUS",
"variable_identifier_list : variable_identifier",
"variable_identifier_list : variable_identifier COMMA variable_identifier_list",
"variable_identifier : VAR_IDENTIFIER",
"function_def : void_func_def",
"function_def : non_void_func_def",
"void_func_def : VOID variable_identifier LEFT_PARANT RIGHT_PARANT BEGINC NEW_LINE statements END",
"void_func_def : VOID variable_identifier LEFT_PARANT parameters RIGHT_PARANT BEGINC NEW_LINE statements END",
"non_void_func_def : type variable_identifier LEFT_PARANT RIGHT_PARANT BEGINC NEW_LINE statements return_statement END",
"non_void_func_def : type variable_identifier LEFT_PARANT parameters RIGHT_PARANT BEGINC NEW_LINE statements return_statement END",
"parameters : type variable_identifier",
"parameters : type variable_identifier COMMA parameters",
"arguments : argument",
"arguments : argument COMMA arguments",
"argument : integer",
"argument : float",
"argument : variable_identifier",
"argument : string",
"function_call : variable_identifier LEFT_PARANT RIGHT_PARANT",
"function_call : variable_identifier LEFT_PARANT arguments RIGHT_PARANT",
"set : set_element",
"set : set_element COMMA set",
"set : SET",
"set : SET COMMA set",
"set : empty_set",
"set_element : string",
"set_element : numbers",
"set_element : variable_identifier",
"empty_set : EMPTY_SET",
"integer : INTEGERC",
"float : FLOAT",
"numbers : INTEGERC",
"numbers : FLOAT",
"set_operator : UNION_OP",
"set_operator : INTERSECTION_OP",
"set_operator : SET_DIFFERENCE_OP",
"set_operator : CARTESIAN_PRODUCT_OP",
"set_operation : SET set_operator SET",
"set_operation : SET set_operator LEFT_PARANT set_operation RIGHT_PARANT",
"set_operation : LEFT_PARANT set_operation RIGHT_PARANT set_operator SET",
"set_relation : SET sub_relation SET",
"set_relation : SET super_relation SET",
"set_relation : set_element sub_relation SET",
"set_relation : set_element ELEMENT_OF SET",
"sub_relation : SUBSET_RELATION",
"sub_relation : PROPER_SUBSET_RELATION",
"sub_relation : IMPROPER_SUBSET_RELATION",
"super_relation : SUPERSET_RELATION",
"super_relation : PROPER_SUPERSET_RELATION",
"super_relation : IMPROPER_SUPERSET_RELATION",
"loop : while",
"loop : for",
"for : FOR variable_identifier IN RANGE LEFT_PARANT argument COMMA argument RIGHT_PARANT BEGINC NEW_LINE statements END",
"while : WHILE LEFT_PARANT expression RIGHT_PARANT BEGINC NEW_LINE statements END",
"comparison_op : ASSIGNMENT_OP",
"comparison_op : SMALLER",
"comparison_op : GREATER",
"comparison_op : EQUALITY_CHECK",
"comparison_op : GREATER_OR_EQUAL",
"comparison_op : SMALLER_OR_EQUAL",
"comparison_op : NOT_EQUAL",
"comment : COMMENT new_line",
"string : STRING",
"print : PRINT LEFT_PARANT expression RIGHT_PARANT",
"println : PRINTLN LEFT_PARANT expression RIGHT_PARANT",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 227 "cs315s18_group01.y"
#include "lex.yy.c"

int lineNo;

int main()
{
   return yyparse();
}

yyerror(char *s)
{
   printf("%s, Error in line: %d\n", s, lineNo + 1);
}
#line 574 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 66 "cs315s18_group01.y"
	{
				printf("Input is valid!");
				return 0;
			}
break;
#line 787 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
