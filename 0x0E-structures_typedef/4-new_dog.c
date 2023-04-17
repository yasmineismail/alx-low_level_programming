#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_len = 0, owner_len = 0, i;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = malloc(sizeof(char) * (name_len + 1));

	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) * (owner_len + 1));

	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_name[i] = name[i];
	new_name[name_len] = '\0';
	for (i = 0; i < owner_len; i++)
		new_owner[i] = owner[i];
	new_owner[owner_len] = '\0';
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
