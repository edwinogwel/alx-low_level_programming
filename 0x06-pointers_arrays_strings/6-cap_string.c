#include "main.h"
/**
 * cap_string - capitalizes all words of a str
 * @s: str to modify
 * Return: modified str
 */
char *cap_string(char *s)
{
	int i, j;
	char seps[] = ",;.!?(){}\n\t\" ";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; seps[j] != '\0'; j++)
		{
			if (s[i] == seps[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
