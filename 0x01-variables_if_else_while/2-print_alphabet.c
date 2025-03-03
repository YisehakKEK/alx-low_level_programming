#include "main.h"

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        _putchar(c);
        c++;
    }
    _putchar('\n');

    return (0);
}
