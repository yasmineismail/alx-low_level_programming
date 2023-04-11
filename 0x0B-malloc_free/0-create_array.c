#include "main.h"
/**
 **create_array - creates an array of chars
 *@size: size of array
 *@c: char
 *Return: NULL or array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int pos;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(c));

	if (array == NULL)
	{
		return (NULL);
	}

	else
	{
		pos = 0;
		while (pos < size)
		{
			*(array + pos) = c;
			pos++;
		}

		return (array);
	}

}
