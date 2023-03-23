#include "main.h"

/**
 * natural_sum - Prints the sum of multiples 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int natural_sum(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
