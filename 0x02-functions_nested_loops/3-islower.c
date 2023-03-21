#include "main.h"

/**
 * _islower - checks for lowercase charcters
 * @c: the charter to be checked
 * Return: 1 if c else 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
