#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: arg count
 * @argv: args passed as an array of strs
 * Return: 1 if non-digit is encountered, otherwise 0
 */
int main(int argc, char *argv[])
{
	int sum, i, num;
	char *p;

	sum = 0;

	if (argc > 1)
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}

	printf("%d\n", sum);
	return (0);
}
