#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: generates absolute value of n
 * Return: void
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	else if (n >= 0)
		n = n;
	return (n);
}
