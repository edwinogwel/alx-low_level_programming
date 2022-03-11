#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i, s, d;

	i = 0;

	while (i < 100)
	{
		s = i % 10; /* singles digit */
		d = i / 10; /* doubles digit */

		if (d < s)
		{
			putchar(d + '0');
			putchar(s + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
