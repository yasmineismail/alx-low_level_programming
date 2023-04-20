#include "function_pointers.h"
/**
 * array_iterator - Executes a function given
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
