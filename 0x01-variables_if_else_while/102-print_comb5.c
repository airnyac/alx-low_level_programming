#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s, t, u, v;

	for (s = 0; s <= 9; s++)
	{
		for (t = 0; t <= 9; t++)
		{
			for (u = 0; u <= 9; u++)
			{
				for (v = u + 1; v <= 9; v++)
				{
					putchar(s + '0');
					putchar(t + '0');
					putchar(' ');
					putchar(u + '0');
					putchar(v + '0');
	if (s < 9999)
	{
		putchar(',');
		putchar(' ');
	}
				}
			}
		}
	}
putchar('\n');
return (0);
}
