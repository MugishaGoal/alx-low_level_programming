#include <stdio.h>
#include "dog.h"

/**
 * int_dog - initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to a string to set as the dog's name
 * @age: Float to set as the dog's age
 * @owner: Pointer to a string to set as the dog's owner
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
