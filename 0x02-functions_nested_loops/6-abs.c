#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: generates absolute value of n
 * Return: value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	if (n / 10 != 0)
	{
		n = _abs(n / 10) * 10 + (n % 10);
	}

	return (n);
}
