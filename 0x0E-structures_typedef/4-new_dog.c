#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nu;

	nu = malloc(sizeof(dog_t));
	if (nu == NULL)
		return (NULL);
	nu->name = name;
	nu->age = age;
	nu->owner = owner;
	return (nu);
}
