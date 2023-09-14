#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if
 * value is not present in array or array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		i = (size_t)(low + f);
		printf("Value checked array[%d]", (int)i);

		if (i >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[i]);
		}

		if (array[i] == value)
			return ((int)i);

		if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;

		if (low == high)
			break;
	}

	return (-1);
}
