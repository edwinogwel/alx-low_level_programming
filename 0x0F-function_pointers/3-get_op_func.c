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

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);      /* selected op func() */
		i++;
	}

	return (NULL);
}
