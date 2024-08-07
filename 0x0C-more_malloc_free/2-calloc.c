#include "main.h"
#include <stdlib.h>

/**
	* _calloc - Allocates memory for an array, using malloc.
	* @nmemb: Number of elements.
	* @size: Size of each element.
	*
	* Return: Pointer to the allocated memory.
	* If nmemb or size is 0, or if malloc fails, returns NULL.
	*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
