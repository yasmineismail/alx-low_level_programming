#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum
  *@max: maximum
  *Return: pointer to the new array or Null.
  */
int *array_range(int min, int max)
{
	int len, i;
	int *p;

	len = 0;

	if (min > max)
		return (NULL);

	len = ((max + 1) - min);

	p = malloc(len * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
