#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: check for last digit
 * Return: Always 'j'
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;

	if (n < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
