#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
	* _realloc - Reallocates a memory block using malloc and free.
	* @ptr: Pointer to the memory previously allocated.
	* @old_size: Size, in bytes, of the allocated space for ptr.
	* @new_size: Size, in bytes, of the new memory block.
	*
	* Return: Pointer to the newly allocated memory block, or NULL if
	* the function fails.
	*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (nptr);
}
