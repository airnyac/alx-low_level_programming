#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Hexa;

	for (Hexa = '0'; Hexa <= '9'; Hexa++)
		putchar(Hexa);

	for (Hexa = 'a'; Hexa <= 'f'; Hexa++)
		putchar(Hexa);

	putchar('\n');
	return (0);
}
