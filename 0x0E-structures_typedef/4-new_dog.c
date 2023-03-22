#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: a pointer to the new dog struct, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int nd, od, i;

	if (name == NULL || owner == NULL)
	return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	for (nd = 0; name[nd]; nd++)
		;
	nd++;
	dog->name = malloc(nd * sizeof(char));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	for (i = 0; i < nd; i++)
	dog->name[i] = name[i];
	dog->age = age;
	for (od = 0; owner[od]; od++)
		;
	od++;
	dog->owner = malloc(od * sizeof(char));
	if (dog->owner == NULL)
	{
	free(dog->name);
	free(dog);
	return (NULL);
	}
	for (i = 0; i < od; i++)
	dog->owner[i] = owner[i];
	return (dog);
}
