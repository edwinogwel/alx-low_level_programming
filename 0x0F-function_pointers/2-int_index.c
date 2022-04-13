#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: arr of ints
 * @size: size of arr
 * @cmp: func pointer to be used for comparison
 * Return: index of 1st elem that matches with `cmp`, -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)	/* if truthy */
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
