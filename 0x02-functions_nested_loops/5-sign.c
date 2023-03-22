#include "main.h"

/**
 * print_sign - Returns a result for each state of n
 * @n: check if value of n is '+' '-' or 0
 * Return: 1 if '+' if '-' , -1 else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}
}
