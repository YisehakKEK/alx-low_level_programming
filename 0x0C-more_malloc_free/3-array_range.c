#include "main.h"
#include <stdlib.h>

/**
	* array_range - Creates an array of integers.
	* @min: The minimum value in the array.
	* @max: The maximum value in the array.
	*
	* Return: Pointer to the newly created array.
	* If min > max, returns NULL. If malloc fails, returns NULL.
	*/
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
