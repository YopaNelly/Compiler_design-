#include <stdio.h>
#include "token.h"

extern int yylex();      /* Flex function to get the next token */
extern char *yytext;     /* Flex variable containing the matched text */

int main() {
    printf("Enter a binary string: ");
    if (yylex() == TOKEN_MATCH) {
        printf("Valid binary string ending with 1: %s\n", yytext);
    } else {
        printf("Invalid input: %s\n", yytext);
    }
    return 0;
}
