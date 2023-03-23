#include "function_pointers.h"
/**
 * array_iterator - executes function as a parameter on each element of array
 * @array: array given
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
