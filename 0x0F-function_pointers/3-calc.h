#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 * @op: operator
 * @F: function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} opt_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
