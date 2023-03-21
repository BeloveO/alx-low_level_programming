#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - introduction to a new dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nu;
	int i, j, k;

	nu = malloc(sizeof(*nu));

	if (nu == NULL || !(name) || !(owner))
	{
		free(nu);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		;

	for (j = 0; owner[j]; j++)
		;

	nu->name = malloc(i + 1);
	nu->owner = malloc(j + 1);

	if (!(nu->name) || !(nu->owner))
	{
		free(nu->name);
		free(nu->owner);
		free(nu);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		nu->name[k] = name[k];
	nu->name[k] = '\0';

	nu->age = age;

	for (k = 0; k < j; k++)
		nu->owner[k] = owner[k];
	nu->owner[k] = '\0';

	return (nu);
}
