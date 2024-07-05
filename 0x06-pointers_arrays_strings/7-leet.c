#include "main.h"

/**
	* leet - Encodes a string into 1337.
	* @str: The string to be encoded.
	*
	* Return: A pointer to the encoded string.
	*/
char *leet(char *str)
{
	int index1 = 0, index2;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";

	while (str[index1])
	{
		for (index2 = 0; leet_chars[index2]; index2++)
		{
			if (str[index1] == leet_chars[index2])
			{
				str[index1] = leet_replacements[index2];
				break;
			}
		}
		index1++;
	}

	return (str);
}
