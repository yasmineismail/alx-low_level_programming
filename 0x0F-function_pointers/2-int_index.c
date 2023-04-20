#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the comparison function
 * Return: index of first matching element, or -1 if not found or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
