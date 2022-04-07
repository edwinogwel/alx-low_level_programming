#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size to allocate of type unsigned int
 * Return: pointer to the allocated memory, if malloc fails
 * terminate process with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
