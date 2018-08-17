/* Yacc file for Cascabel */

%token 				COMMENT
				PLUS
				MINUS
				MULTIPLY
				DIVIDE
				MODULUS
				SEMICOLON
				GREATER
				SMALLER
				GREATER_OR_EQUAL
				SMALLER_OR_EQUAL
				NOT_EQUAL
				COMMA
				DOT
				ASSIGNMENT_OP
				EQUALITY_CHECK
				LEFTBRACE
				RIGHTBRACE
				LEFT_PARANT
				RIGHT_PARANT
				LEFT_SQUARE_BRACE
				RIGHT_SQUARE_BRACE
				UNDERSCORE
				SET_SYMBOL
				NEW_LINE
				PRINT
				PRINTLN
				BEGINC
				END
				IF
				ELSE
				FOR
				WHILE
				UNION_OP
				INTERSECTION_OP
				SET_DIFFERENCE_OP
				CARTESIAN_PRODUCT_OP
				SUBSET_RELATION
				SUPERSET_RELATION
				PROPER_SUBSET_RELATION
				IMPROPER_SUBSET_RELATION
				PROPER_SUPERSET_RELATION
				IMPROPER_SUPERSET_RELATION
				ELEMENT_OF
				MAIN
				EMPTY_SET
				SET
				ARRAY
				VAR_IDENTIFIER
				INTEGERC
				VOID
				READ
				RETURN
				RANGE
				IN
				FLOAT
				STRING
				SPECIAL
				INTEGER_TYPE
				FLOAT_TYPE
				STRING_TYPE

%%
start: main_program	{
				printf("Input is valid!");
				return 0;
			}

main_program: MAIN BEGINC new_line program END

program: statements

statements: statement new_line
	  | statement new_line statements

statement: if 
         | loop 
         | single_statement    
         | function_def 

new_line:  NEW_LINE | comment | NEW_LINE new_line

if: IF LEFT_PARANT expression RIGHT_PARANT BEGINC NEW_LINE statements END 
  | IF LEFT_PARANT expression RIGHT_PARANT BEGINC NEW_LINE statements END ELSE BEGINC NEW_LINE statements END

single_statement: input_statement
		| output_statement
		| assignment_operation
		| declaration_statement
		| set_statement
		| array_statement
		| function_call

input_statement: READ expression

output_statement: print
		| println

assignment_operation: variable_identifier ASSIGNMENT_OP expression 

declaration_statement: type variable_identifier_list
		     | type assignment_operation

type: INTEGER_TYPE | FLOAT_TYPE | STRING_TYPE									

return_statement: RETURN expression new_line

set_statement: set_declaration
             | set_assignment
	     | set_operation 
             | set_relation

set_declaration: SET | SET COMMA set_declaration

set_assignment: SET ASSIGNMENT_OP LEFTBRACE set RIGHTBRACE 
	      | SET ASSIGNMENT_OP set_operation

array_statement: array_declaration
	       | array_assignment

array_declaration: ARRAY | ARRAY COMMA array_declaration  

array_assignment: ARRAY ASSIGNMENT_OP LEFT_SQUARE_BRACE array RIGHT_SQUARE_BRACE
		| array_access ASSIGNMENT_OP expression

array_access: ARRAY LEFT_SQUARE_BRACE integer RIGHT_SQUARE_BRACE
	    | ARRAY LEFT_SQUARE_BRACE variable_identifier RIGHT_SQUARE_BRACE

array: set_element 
     | set_element COMMA array
     | SET
     | SET COMMA array

expression: term mid_prec_op expression
	  | term comparison_op expression
          | term 

term: variable_identifier high_prec_op term
    | integer high_prec_op term
    | float high_prec_op term
    | variable_identifier
    | set_relation
    | set_operation 
    | integer 
    | float
    | string
    | array_access 

high_prec_op: MULTIPLY | DIVIDE

mid_prec_op: PLUS | MINUS

variable_identifier_list: variable_identifier
		        | variable_identifier COMMA variable_identifier_list

variable_identifier:  VAR_IDENTIFIER

function_def: void_func_def | non_void_func_def

void_func_def: VOID variable_identifier LEFT_PARANT RIGHT_PARANT BEGINC NEW_LINE statements END
	     | VOID variable_identifier LEFT_PARANT parameters RIGHT_PARANT BEGINC NEW_LINE statements END

non_void_func_def: type variable_identifier LEFT_PARANT RIGHT_PARANT BEGINC NEW_LINE statements return_statement END
		 | type variable_identifier LEFT_PARANT parameters RIGHT_PARANT BEGINC NEW_LINE statements return_statement END

parameters: type variable_identifier
	  | type variable_identifier COMMA parameters

arguments: argument 
	 | argument COMMA arguments

argument: integer | float | variable_identifier | string

function_call: variable_identifier LEFT_PARANT RIGHT_PARANT
	     | variable_identifier LEFT_PARANT arguments  RIGHT_PARANT

set: set_element  
   | set_element COMMA set
   | SET
   | SET COMMA set
   | empty_set 

set_element: string | numbers | variable_identifier 

empty_set: EMPTY_SET

integer: INTEGERC

float: FLOAT

numbers: INTEGERC | FLOAT

set_operator: UNION_OP | INTERSECTION_OP | SET_DIFFERENCE_OP | CARTESIAN_PRODUCT_OP

set_operation: SET set_operator SET  
             | SET set_operator LEFT_PARANT set_operation RIGHT_PARANT
             | LEFT_PARANT set_operation RIGHT_PARANT set_operator SET 

set_relation: SET sub_relation SET
	    | SET super_relation SET
	    | set_element sub_relation SET
	    | set_element ELEMENT_OF SET
 
sub_relation: SUBSET_RELATION | PROPER_SUBSET_RELATION | IMPROPER_SUBSET_RELATION

super_relation: SUPERSET_RELATION | PROPER_SUPERSET_RELATION | IMPROPER_SUPERSET_RELATION

loop: while | for

for: FOR variable_identifier IN RANGE LEFT_PARANT argument COMMA argument RIGHT_PARANT BEGINC NEW_LINE statements END

while: WHILE LEFT_PARANT expression RIGHT_PARANT BEGINC NEW_LINE statements END

comparison_op: ASSIGNMENT_OP | SMALLER | GREATER | EQUALITY_CHECK | GREATER_OR_EQUAL | SMALLER_OR_EQUAL | NOT_EQUAL

comment: COMMENT new_line 

string: STRING

print: PRINT LEFT_PARANT expression RIGHT_PARANT

println: PRINTLN LEFT_PARANT expression RIGHT_PARANT

%%
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
