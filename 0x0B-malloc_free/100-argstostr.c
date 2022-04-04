#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - finds 'e length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;

	return (size);
}

/**
 * *argstostr - concatenates all the args of the program
 * @ac: arg count
 * @av: array of strs passed as args
 * Return: pointer to the new str(Sucess), or NULL(Error)
 */
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';

	return (s);
}
