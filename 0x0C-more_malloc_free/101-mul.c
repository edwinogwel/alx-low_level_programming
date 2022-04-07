#include "main.h"
/**
 * _puts - prints a string, followed by new line
 * @str: str to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])	/* while truthy */
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - converts a string to an int
 * @s: pointer to str
 * Return: converted int
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
		if (s[firstNum] == '-')
			sign *= -1;

	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer
 * @n: int
 * Return: 0
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1;
	unsigned long int i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}

/**
 * main - returns the product of two +Ve no.s
 * @argc: arg count
 * @argv: args passed as an array of strs
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)	/* arg1 => name of program */
	{
		_puts("Error");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
