#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ahpla;

	for (ahpla = 'z'; ahpla >= 'a'; ahpla--)
		putchar(ahpla);
	putchar('\n');
	return (0);
}
