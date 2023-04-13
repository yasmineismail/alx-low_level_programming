#include <stdlib.h>
#include "main.h"
/**
  * _realloc - reallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size:  size in bytes of the allocated space for ptr
  * @new_size: size in bytes of the new memory
  * Return: pointer to new the allocated memory block or NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newp = malloc(new_size);
		if (newp == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		newp = malloc(new_size);
		if (newp == NULL)
			return (newp);
		for (i = 0; i < old_size; i++)
			newp[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (newp);
}
