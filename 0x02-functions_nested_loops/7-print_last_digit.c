#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: int of type number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int rem;

	if (n < 0)
	{
		rem = -1 * (n % 10);
		_putchar(rem + '0');
		return (rem);
	}
	else
	{
		rem = n % 10;
		_putchar(rem + '0');
		return (rem);
	}
}
