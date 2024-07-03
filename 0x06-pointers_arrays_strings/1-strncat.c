#include "main.h"

/**
	* _strncat - Concatenates two strings using at most
	* an inputted number of bytes from src.
	* @dest: The string to be appended upon.
	* @src: The string to be appended to dest.
	* @n: The number of bytes from src to be appended to dest.
	*
	* Return: A pointer to the resulting string dest.
	*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[dest_len])
		dest_len++;

	while (src[index] && index < n)
		dest[dest_len++] = src[index++];

	return (dest);
}
