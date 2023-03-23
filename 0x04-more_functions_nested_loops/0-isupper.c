#include "main.h"

/**
 * _isupper - Checks for uppercase letters and returns 1 if true
 * @c: checks for uppercase letters
 * Return: Always 1
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

