#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: arg count
 * @argv: args passed as an array of strs
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	p = get_op_func(argv[2]);

	if (!p)		/* if falsy */
	{
		printf("Error\n");
		exit(99);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	printf("%d\n", p(arg1, arg2));

	return (0);
}
