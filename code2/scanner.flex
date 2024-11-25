%{
#include "token.h"
#include <stdio.h>
%}

%%
(1|0)*1       { return TOKEN_MATCH; } /* Matches binary strings ending with 1 */
.             { return TOKEN_ERROR; } /* Anything else is an error */
%%

int yywrap() {
    return 1; /* Indicates end of input */
}
