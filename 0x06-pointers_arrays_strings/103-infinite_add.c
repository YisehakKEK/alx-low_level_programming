#include "main.h"
#include <stdio.h>

/**
	* infinite_add - Adds two numbers.
	* @n1: The first number as a string.
	* @n2: The second number as a string.
	* @r: The buffer to store the result.
	* @size_r: The size of the buffer.
	*
	* Return: A pointer to the result, or 0 if the result can't be stored in r.
	*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;
	int carry = 0;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r - 1 || j > size_r - 1)
		return (0);
	m = (i > j ? i : j);
	r[m + 1] = '\0';
	i--, j--, k = m;
	while (k >= 0)
	{
		n = carry;
		if (i >= 0)
			n += n1[i--] - '0';
		if (j >= 0)
			n += n2[j--] - '0';
		if (n >= 10)
		{
			carry = 1;
			n -= 10;
		}
		else
			carry = 0;
		r[k--] = n + '0';
	}
	if (carry)
	{
		if (m + 2 > size_r)
			return (0);
		for (l = m + 1; l > 0; l--)
			r[l] = r[l - 1];
		r[0] = '1';
	}
	return (r);
}
