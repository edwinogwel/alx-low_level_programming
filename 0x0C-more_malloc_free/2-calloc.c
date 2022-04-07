#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: no. of elements
 * @size: size of each element
 * Return: pointer to allocated mem, NULL if error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;	/* memory is set to zero */

	return (p);
}
