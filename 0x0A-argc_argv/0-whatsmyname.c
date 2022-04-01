#include <stdio.h>
/**
 * main - prints the program's name, followed by a new line
 * @argc: arg count
 * @argv: args passed as an array of strs
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
