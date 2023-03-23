#include "main.h"

/**
 * main - Prints last 52 fib. numbers
 * Return: void
 */
int main(void)
{
	int x = 0;
	long y = 1, z = 2;

	while (x < 50)
	{
		if (x == 0)
		{
			printf("%ld", y);
		}
		else if (x == 1)
		{
			printf(", %ld", z);
		}
		else
		{
			z += y;
			y = z - y;
			printf(", %ld", y);
		}
		++x;
	}
	printf("\n");
	return (0);
}
