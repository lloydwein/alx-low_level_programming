#include "3-calc.h"

/**
 * *get_op_func - function that selects the correct function to perform the
 * operation asked by the user
 * @s: operator passed as argument to the program
 * Return:  pointer to the function that corresponds to the operator
 * given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int num;
	op_t ops[] = {
		{"+", op_add},
	};

	num = 0;
	return (s[num] == '+' ? ops[num].f : s[0] == '-' ? &(op_sub)
			: s[0] == '*' ? &(op_mul) : s[0] == '/' ? &(op_div)
			: s[0] == '%' ? &(op_mod) : NULL);
}
