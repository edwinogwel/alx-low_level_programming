#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: arg count
 * @argv: args passed as an array of strs
 * Return: 1 if error, otherwise 0
 */
int main(int argc, char *argv[])
{
	if (argv[1] && argv[2])		/* if truthy */
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));	/* arg1 * arg2 */
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
