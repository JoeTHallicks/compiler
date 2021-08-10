%{

#ifdef PRINT
#define TOKEN(t) printf("Token: " #t "\n");
#define NUMBER_TOKEN(t) printf("Number %d Token: " #t "\n", atoi(yytext));
#define FLOAT_TOKEN(t) printf("Float %s Token: " #t "\n", yytext);
#define CHARCON_TOKEN(t) printf("Character %c Token: " #t "\n", yytext[1]);
#define IDENTIFIER_TOKEN(t) printf("Identifier %s Token: " #t "\n", yytext);
#else

int installId(char *id); 
int lookup(char *s);

#define TOKEN(t) return(t);
#define NUMBER_TOKEN(t) yylval.iVal = atoi(yytext); return(t);
#define FLOAT_TOKEN(t) yylval.iVal = installId(yytext); return(t);
#define CHARCON_TOKEN(t) yylval.iVal = yytext[1]; return(t);
#define IDENTIFIER_TOKEN(t) yylval.iVal = installId(yytext); return(t);



/* Declare Symbol Table Type and Array as imported types */
#include <string.h>
extern SYMTABNODEPTR symTab[SYMTABSIZE];
extern int currentSymTabSize;
#endif
%}
delim		[ \r\n\t]
ws			{delim}+
character	[A-Za-z]
string		{character}+
digit 		[0-9]
number		{digit}+
identifier	{character}({character}|{digit})*
charcon 		'{character}'
float		{number}"."{number}
%%
{ws}		; /* white space, skip */

":"			TOKEN (COLON)
"<"			TOKEN (LESS_THAN)
">"			TOKEN (GREATER_THAN)
"+"			TOKEN (PLUS)
"-"			TOKEN (SUBTRACT)
";"			TOKEN (SEMICOLON)
"("			TOKEN (BRA)
")"			TOKEN (KET)
","			TOKEN (COMMA)
"<="		TOKEN (LESS_THAN_OR_EQUAL_TO)
">="		TOKEN (GREATER_THAN_OR_EQUAL_TO)
"<>"		TOKEN (NOT_EQUAL_TO)
"="			TOKEN (EQUAL)
"*"			TOKEN (MULTIPLY)
"/"			TOKEN (DIVIDE)
"."			TOKEN (STOP)
"->"		TOKEN (ASSIGN)
ENDP		TOKEN (ENDP)
DECLARATIONS TOKEN (DECLARATIONS)
CODE		TOKEN (CODE)
OF 			TOKEN (OF)
TYPE		TOKEN (TYPE)
CHARACTER	TOKEN (CHARACTER)
INTEGER		TOKEN (INTEGER)
REAL		TOKEN (REAL)
IF			TOKEN (IF)
THEN		TOKEN (THEN)
ENDIF		TOKEN (ENDIF)
ELSE		TOKEN (ELSE)
DO			TOKEN (DO)
WHILE		TOKEN (WHILE)
ENDDO		TOKEN (ENDDO)
FOR			TOKEN (FOR)
IS			TOKEN (IS)
BY			TOKEN (BY)
TO			TOKEN (TO)
ENDFOR		TOKEN (ENDFOR)
WRITE		TOKEN (WRITE)
NEWLINE		TOKEN (NEWLINE)
READ		TOKEN (READ)
AND			TOKEN (AND)
OR			TOKEN (OR)
NOT			TOKEN (NOT)
ENDWHILE	TOKEN (ENDWHILE)
{identifier} IDENTIFIER_TOKEN(IDENTIFIER)
{charcon}	CHARCON_TOKEN(CHARCON)
{float}		FLOAT_TOKEN(FLOAT)
{number}	NUMBER_TOKEN(NUMBER)

%%

#ifndef PRINT
/* Here is the code for the library of symbol table routines */

/* code for a simple symbol table, which is an array of pointers to
   structs, each of which contains an Identifier.
*/


SYMTABNODEPTR newSymTabNode()
{
    return ((SYMTABNODEPTR)malloc(sizeof(SYMTABNODE)));
}

int lookup(char *s)
{
    extern SYMTABNODEPTR symTab[SYMTABSIZE];
    extern int currentSymTabSize;
    int i;

    for(i=0; i<currentSymTabSize; i++)
    {
        if(strncmp(s,symTab[i]->identifier,IDLENGTH) == 0)
        {
            return (i);
        }
    }
    return (-1);    
}
/* Look up an identifier in the symbol table, if its there return
   its index.  If its not there, put it in the end position,
   as long as the table isn't full, and return its index.
*/

int installId(char *id) 
{
    extern SYMTABNODEPTR symTab[SYMTABSIZE]; 
    extern int currentSymTabSize;
    int index;

    index = lookup(id);
    if (index >= 0)
    {
        return (index);
    }
    else 
       if (currentSymTabSize >= SYMTABSIZE) 
          /* SYMTAB is full */
          return (NOTHING) ;
    else
    {
       symTab[currentSymTabSize] = newSymTabNode();
       /* Recommended code for preventing buffer overrun on bounded strings */
       strncpy(symTab[currentSymTabSize]->identifier,id,IDLENGTH);
       symTab[currentSymTabSize]->identifier[IDLENGTH-1] 
	   = '\0';
       return(currentSymTabSize++);
    }
}



#endif


