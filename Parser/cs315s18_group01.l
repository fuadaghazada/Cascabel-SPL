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
empty_set \@(0)
array \*{var_ident}
new_line \n

%%

{comment}                       return COMMENT;
\+                              return PLUS;
\-                              return MINUS;
\*                              return MULTIPLY;
\/                              return DIVIDE;
\%                              return MODULUS;
\;                              return SEMICOLON;
\>                              return GREATER;
\<                              return SMALLER;
\>=                             return GREATER_OR_EQUAL;
\<=                             return SMALLER_OR_EQUAL;
\,                              return COMMA;
\.                              return DOT;
\=                              return ASSIGNMENT_OP;
\!\=                            return NOT_EQUAL;
\=\=                            return EQUALITY_CHECK;
\{                              return LEFTBRACE;
\}                              return RIGHTBRACE;
\(                              return LEFT_PARANT;
\)                              return RIGHT_PARANT;
\[				return LEFT_SQUARE_BRACE;
\]				return RIGHT_SQUARE_BRACE;		
\_				return UNDERSCORE;
\@				return SET_SYMBOL;
{special}			return SPECIAL;
{new_line}                      {
                                        extern int lineNo; lineNo++;
                                        return NEW_LINE;
                                }
print                           return PRINT;
println                         return PRINTLN;
begin                           return BEGINC;
end                             return END;
if                              return IF;
else                            return ELSE;
for                             return FOR;
while                           return WHILE;
UNION                           return UNION_OP;
INTERSECTION                    return INTERSECTION_OP;
SET_DIFFERENCE                  return SET_DIFFERENCE_OP;
CARTESIAN_PRODUCT               return CARTESIAN_PRODUCT_OP;
SUB_RELATION                    return SUBSET_RELATION;
SUPER_RELATION                  return SUPERSET_RELATION;
PROPER_SUB_RELATION		return PROPER_SUBSET_RELATION;
IMPROPER_SUB_RELATION		return IMPROPER_SUBSET_RELATION;
PROPER_SUPER_RELATION		return PROPER_SUPERSET_RELATION;
IMPROPER_SUPER_RELATION		return IMPROPER_SUPERSET_RELATION;
ELEMENT                         return ELEMENT_OF;
main				return MAIN;				
void				return VOID;
read				return READ;
return 				return RETURN;
range				return RANGE;
int				return INTEGER_TYPE;
string				return STRING_TYPE;
float 				return FLOAT_TYPE;
in				return IN;
{empty_set}			return EMPTY_SET;
{set}                           return SET;
{array}				return ARRAY;
{var_ident}                     return VAR_IDENTIFIER;
{integer}                       return INTEGERC;
{float}                         return FLOAT;
{string}			return STRING;

%%

int yywrap()                      { return 1; }
