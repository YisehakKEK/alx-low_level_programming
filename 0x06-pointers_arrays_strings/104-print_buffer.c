#include <stdio.h>
#include "main.h"

/**
	* print_buffer - Prints a buffer.
	* @b: The buffer to be printed.
	* @size: The size of the buffer.
	*/
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		// Print the position of the first byte of the line in hexadecimal (8 chars)
		printf("%08x: ", i);

		// Print the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}

		// Print the content of the buffer as characters
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
		}

		printf("\n");
	}
}
