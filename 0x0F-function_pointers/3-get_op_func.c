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
	op_t operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	int numbers = 0;


	while(operators[numbers].op)
	{
		if (operators[numbers].op[0] == s[0] && s[1] == '\0')
		{
			return (operators[numbers].f);
		}
		numbers++;
	}

	printf("Error\n");
	exit(99);
}
