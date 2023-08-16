#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d : the struct variable
 *
 * Return: nothing if d is NULL and (nil) if an element is NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}

	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
	}
	printf("age: %.1f\n", d->age);

	if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
