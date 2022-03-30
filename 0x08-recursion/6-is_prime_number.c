#include "main.h"
/**
 * is_prime_number - returns if a number is prime or not
 * @n: number `n`
 * Return: 1 if `n` is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (isPrime(n, n - 1));
}

/**
 * isPrime - evaluates if a number is prime or not
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if `n` is prime, otherwise 0
 */
int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (isPrime(n, i - 1));
}
