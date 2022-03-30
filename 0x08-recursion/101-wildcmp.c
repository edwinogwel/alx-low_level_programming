#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - check the code for Holberton School students.
 * @s1: string
 * @s2: string
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0, -1));
}

/**
 * checker - helper
 * @s1: string
 * @s2: string
 * @a: int
 * @b: int
 * @wildUsed: int
 * Return: Always 0.
 */
int checker(char *s1, char *s2, int a, int b, int wildUsed)
{

//printf("s1 <%c> a <%i> s2 <%c> b <%i> \n", s1[a], a, s2[b], b);

if (s1[a] != '\0')
{	
	if (s2[b] == '\0')
		return (0);
	else if (s2[b] == '*')
	{
		if (s2[b + 1] == '*'){
			//printf("Pass 1\n");
			return (checker(s1, s2, a, b + 1, b));
		}
		else if (s2[b + 1] == s1[a]){
			//printf("Pass 2\n");
			return (checker(s1, s2, a, b + 1, b));
		}	
		else if (s1[a + 1] != s2[b + 1]){
			//printf("Pass 3\n");
			return (checker(s1, s2, a + 1, b, b));	
		}
		else if (s1[a + 1] == s2[b + 1]){
			//printf("Pass 3\n");
			return (checker(s1, s2, a + 1, b + 1, b));	
		}
		
	}
	else if ((s1[a] == s2[b]) || (s2[b] == '*' && s2[b + 1] == s1[a + 1])){
		//printf("Pass 4\n");
		return (checker(s1, s2, a + 1, b + 1, wildUsed));
	}
	else
	{
		if (wildUsed == -1)
		{
			//printf("No wild card\n");
			return (0);
		}
		//printf("Back to wildcard\n");
		return (checker(s1, s2, a, wildUsed, wildUsed));
	}
}
if (s2[b] != '\0')
	return 0;

return (1);

}
