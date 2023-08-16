#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to the new dog, NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
	{
	return (NULL);
	}

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
	return (NULL);
	}

	new_dog_ptr->name = strdup(name);

	if (new_dog_ptr->name == NULL)
	{
	free(new_dog_ptr);
	return (NULL);
	}

	new_dog_ptr->age = age;
	new_dog_ptr->owner = strdup(owner);

	if (new_dog_ptr->owner == NULL)
	{
	free(new_dog_ptr->name);
	free(new_dog_ptr);
	return (NULL);
	}

	return (new_dog_ptr);
}
