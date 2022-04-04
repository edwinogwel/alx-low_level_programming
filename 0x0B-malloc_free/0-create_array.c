#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: size of array
 * @c: specific char `c`
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(*p));	/* malloc() allocates memory */
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
