#include "main.h"

/**
	* rot13 - Encodes a string using rot13.
	* @str: The string to be encoded.
	*
	* Return: A pointer to the encoded string.
	*/
char *rot13(char *str)
{
	int index1 = 0, index2;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[index1])
	{
		for (index2 = 0; alphabet[index2]; index2++)
		{
			if (str[index1] == alphabet[index2])
			{
				str[index1] = rot13[index2];
				break;
			}
		}
		index1++;
	}

	return (str);
}
