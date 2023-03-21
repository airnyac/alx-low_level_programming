#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase letter
 * followed by a new line
 * Return: Always
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
