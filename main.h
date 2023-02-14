#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>

/**
 * enum bool - define boolean type
 * @false: 0
 * @true: 1
 */
typedef enum bool
{
	false,
	true,
} bool;

/**
 * enum token - valid tokens for the boolean logic program
 * @VAR: variable type (true or false)
 * @AND: token for the && operation
 * @OR: token for the || operation
 * @NOT: token for the ! operation
 * @LP: token for the left parenthesis
 * @RP: token for the right parenthesis
 * @END: token for the end of expression
 */
typedef enum token
{
	VAR,
	AND,
	OR,
	NOT,
	LP,
	RP,
	END
} token;

/**
 * struct node - node type for the expression tree
 * @type: the type of token
 * @value: the boolean value of the node
 * @prev: the previous node in the expression tree
 * @next: the next node in the expression tree
 */
typedef struct node
{
	token type;
	bool value;
	struct node *prev;
	struct node *next;
} node;

void interpret(char *);

#endif /* main_h */
