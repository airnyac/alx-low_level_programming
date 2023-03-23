#include "main.h"

/**
 * _isupper - Checks for uppercase letters and returns 1 if true
 * @c: checks for uppercase letters
 * Return: Always 1
 */
int _isupper(int c)
{
	int x;
	int y;


	for (x = 'a'; x <= 'z'; c++)
	{
		for (y = 'A'; y <= 'Z'; y++)
		{
			if (c == x)
			{
				return (0);
			}
			else
			{
				if (c == y)
				{
					return (1);
				}
			}
		}
	}
	return (1);
}

