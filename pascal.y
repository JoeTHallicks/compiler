program : identifier COLON block ENDP identifier FLOATING_POINT_END_PROGRAM;

block : DECLARATIONS declarations_block CODE statement_list
|CODE statement_list;

declaration_block
id : identifier | identifier COMMA id;
declaration : id OF TYPE type SEMICOLON;
declaration_block : declaration
| declaration declaration_block;

type : CHARACTER 
| INTEGER  
| REAL;
	
statement_list :  statement 
| statement SEMICOLON statement_list;

statement : assignment_statement
		| if_statement 
		| do_statement 
		| while_statement 
		| for_statement 
		| write_statement 
		| read_statement 

assignment_statement : expression ASSIGN identifier 

if_statement : IF conditional THEN statement_list ENDIF | 
IF conditional THEN statement_list ELSE statement_list ENDIF;

do_statement : DO statement_list WHILE conditional ENDO; 


while_statement : WHILE conditional DO statement_list; 

for_statement :  FOR identifier IS expression BY expression TO expression DO statement_list ENDFOR; 

write_statement : NEWLINE 
| WRITE BRA output_list KET;

read_statement : READ BRA identifier KET;

output_list : value
		| output_list COMMA value;

conditional :  expression  comparator  expression
		| conditional AND conditional
		| conditional OR conditional
		| NOT conditional;
		
comparator : EQUAL_TO
		| NOT_EQUAL_TO
		|LESS_THAN
		|GREATER_THAN
		|LESS_THAN_OR_EQUAL_TO
		|GREATER_THAN_OR_EQUAL_TO;
		
expression : term 
| term PLUS expression
 | term MINUS expression;

term : value 
| value MULTIPLY term 
| value DIVIDE term;

value : identifier 
| constant 
| BRA expression KET;

constant : number_constant 
| character_constant;

character_constant :QUOTAT character QUOTAT;

number_constant : number | MINUS number | plus | minus
plus : number FLOATING_POINT_END_PROGRAM  number
minus :  MINUS number FLOATING_POINT_END_PROGRAM number
number : digit number | digit ;


identifier :  character  
| identifier character  
| identifier digit;

%%

#include "lex.yy.c"
