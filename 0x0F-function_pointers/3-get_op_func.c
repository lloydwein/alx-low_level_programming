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
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	int numbers = 0;


	while(numbers < 5)
	{
		if (*s == *(ops[numbers].op) && *(s + 1) == '\0')
			return (ops[numbers].f);
		numbers++;
	}
	return (NULL);
}
