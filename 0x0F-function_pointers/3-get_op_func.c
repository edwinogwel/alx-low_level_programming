#include "3-calc.h"
/**
 * get_op_func - selects the correct operation function asked by user
 * @s: operator passed as arg
 * Return: function pointer corresponding to operator passed
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

	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])  /* ops[i] -> op func, ops[i].op[0] -> operator */
			return (ops[i].f); /* selected operation func() */
		i++;
	}

	return (NULL);
}
