#include "main.h"
/**
 * string_nconcat - concatenates two strs
 * @s1: str 1
 * @s2: str 2
 * @n: bytes of s2 to add to s1
 * Return: pointer to allocated mem, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, c, strlen1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s1);

	p = malloc((strlen1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; c = 0; i < (strlen1 + n); i++)
	{
		if (i < strlen1)
			p[i] = s1[i];	/* copy s1[i] to mem area pointed to by p */
		else
			p[i] = s2[c++];
	}
	p[i] = '\0';

	return (p);
}

/**
 * _strlen - returns the length of a str
 * @s: str
 * Return: length of str
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
