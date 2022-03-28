#include "main.h"
/**
 * *_strchr - locates a char in a str
 * @s: str to be checked
 * @c: char to be located
 * Return: pointer to the first occurence of the char c
 * in the str, or NULL if char is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);

		if (i == 0)
			return (NULL);
	}
}
