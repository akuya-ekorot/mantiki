#ifndef mantiki_tokens_h
#define mantiki_tokens_h

typedef enum TOKENS
{
	TOKEN_NULL,
	TOKEN_NOT,
	TOKEN_TRUE,
	TOKEN_FALSE,
	TOKEN_AND,
	TOKEN_OR,
	TOKEN_LPAREN,
	TOKEN_RPAREN
} TOKENS;

typedef struct Token {
	char *type;
	TOKENS value;
} Token;

void print_tokens(char *input);

#endif /* mantiki_tokens_h */
