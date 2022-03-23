#include "main.h"
/**
 * reverse_array - reverses the contect of an array of ints
 * @a: array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, h;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		h = a[i];
		a[i] = a[j];
		a[j--] = h;
	}
}
