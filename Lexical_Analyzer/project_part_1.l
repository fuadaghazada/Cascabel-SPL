%option main

comment  \#.*
digit  [0-9]
integer ([+-]?{digit}+)
float ([+-]?{digit}*(\.)?{digit}+)
lower_letter [a-z]
upper_letter [A-Z]
alphabetic ({lower_letter}|{upper_letter}|$|_)
character ({digit}|{alphabetic})
special ([_+\-\{\}\(\)\[\]\=\/!%&$])
string (\"([^\\\"]|\\.)*\") 
var_ident {alphabetic}+{character}*
set \@{var_ident}

%%

{comment}               printf(" COMMENT ");
\+                      printf(" PLUS ");
\-                      printf(" MINUS ");
\*                      printf(" MULTIPLY ");
\/                      printf(" DIVIDE ");
\%                      printf(" MODULUS ");
\;                      printf(" SEMICOLON ");
\>                      printf(" GREATER ");
\<                      printf(" SMALLER ");
\>=                     printf(" GREATER_OR_EQUAL ");
\<=                     printf(" SMALLER_OR_EQUAL ");
\,                      printf(" COMMA ");
\.                      printf(" DOT ");
\=                      printf(" ASSIGNMENT_OP ");
\!\=                    printf(" NOT EQUAL ");
\=\=                    printf(" EQUALITY_CHECK ");
\{                      printf(" LEFTBRACE ");
\}                      printf(" RIGHTBRACE ");
\(                      printf(" LEFT_PARANT ");
\)                      printf(" RIGHT_PARANT ");
\n                      printf(" NEW_LINE\n");
print			printf(" PRINT ");
println			printf(" PRINT\n");
begin                   printf(" BEGIN ");
end                     printf(" END ");
if                      printf(" IF ");
else                    printf(" ELSE ");
for                     printf(" FOR ");
while                   printf(" WHILE ");
int                     printf(" INT ");
UNION                   printf(" UNION_OP ");
INTERSECTION            printf(" INTERSECTION_OP ");
SET_DIFFERENCE          printf(" SET_DIFFERENCE_OP ");
CARTESIAN_PRODUCT       printf(" CARTESIAN_PRODUCT_OP ");
SUB_RELATION            printf(" SUBSET_RELATION ");
SUPER_RELATION          printf(" SUPERSET_RELATION ");;
ELEMENT                 printf(" ELEMENT_OF ");
{set}                   printf(" SET ");
{var_ident}             printf(" VAR_IDENTIFIER ");
{integer}               printf(" INTEGER ");
{float}                 printf(" FLOAT ");
{string}                printf("STRING"); 

%%
