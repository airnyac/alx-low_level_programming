#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int LowNum;

	for (LowNum = '0'; LowNum <= '9'; ++LowNum)
		putchar(LowNum);
	putchar('\n');
	return (0);
}
