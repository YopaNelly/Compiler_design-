#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
    TOKEN_MATCH, /* Matches (1|0)*1 */
    TOKEN_ERROR  /* Anything else */
} token_t;

#endif
