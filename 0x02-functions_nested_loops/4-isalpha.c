#include "main.h"

/**
 * _isalpha - check for alphabetic characters
 * @c: return result
 * Return: 1 if 'c' or 'C' else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
