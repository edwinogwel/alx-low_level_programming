#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a str using malloc
 * @str: str to duplicate
 * Return: pointer to 'e duplicate str, NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *p;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	p = malloc(i * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		p[c] = str[c];

	p[c] = '\0';

	return (p);
}
