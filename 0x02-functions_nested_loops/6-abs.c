#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: generates absolute value of n
 * Return: void
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	while (n != 0)
	{
		int digit = n % 10;
		char i = digit + '0';

		_putchar(i);
		n /= 10;
	}
	return n;
}
