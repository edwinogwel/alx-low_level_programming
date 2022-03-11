#include <stdio.h>
/**
 * main - prints all possible combinations fo single-digit numbers
 * Return: 0
 */
int main(void)
{
        int i = 0;

        while (i < 10)
        {
                putchar(i + '0');
                if (i < 9)
                {
                        putchar(',');
                        putchar(' ');
                }   
                i++;
        }
        putchar('\n');
        return (0);
}
