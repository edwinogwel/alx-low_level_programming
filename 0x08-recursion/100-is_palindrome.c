#include "main.h"
/**
 * is_palindrome - returns if a str is a palindrome or not
 * @s: str to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)	/* empty str */
		return (1);

	return (checkPal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a str
 * @s: str to get length of
 * Return: length of str `s`
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * checkPal - checks if a str is palindrome
 * @s: str to check
 * @i: iterator
 * @len: length of the str(including 'e null char)
 * Return: 1 if palindrome, 0 if not
 */
int checkPal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);

	return (checkPal(s, i + 1, len - 1));
}
