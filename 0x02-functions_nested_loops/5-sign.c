#include "main.h"
/**
 * print_sign - prints the sign of a no. i.e. +ve, zero or -ve
 * @n: number to be tested
 * Return: 1 if +ve, 0 if zero and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
