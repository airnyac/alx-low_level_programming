#include "main.h"

/**
 * times_table - Prints 9 times table in rows and columns
 *
 * Returns: Null
 */
void times_table(void)
{
	int i, j, k, l, m;

	/*create a 10*10 matrix*/
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		_table.c
			k = i * j;
			if (k > 9)
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(m + '0');
				_putchar(l + '0');
			}
			else
			{
				if (j != 0)
				{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				}
			_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
