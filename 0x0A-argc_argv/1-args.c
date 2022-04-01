#include <stdio.h>
/**
 * main - prints the number of args passed into it
 * @argc: arg count
 * @argv: args passed as an array of strs
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
