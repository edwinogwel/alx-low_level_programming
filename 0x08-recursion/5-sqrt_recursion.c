#include "main.h"

int square(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number `n`
 * Return: -1 if n doesn't have a natural square root,else square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds the square root of a number
 * @n: number `n`
 * @val: square root
 * Return: natural square root, or -1 if it doesn't have
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
