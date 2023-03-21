#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * print_alphabet: prints the lowercase letters of the alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
