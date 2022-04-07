#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: char to copy
 * @n: no. of times to copy `b`
 * Return: pointer to memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: no. of elements
 * @size: size of each element
 * Return: pointer to allocated mem, NULL if error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);	/* sets mem pointed to by p to 0 */

	return (p);
}
