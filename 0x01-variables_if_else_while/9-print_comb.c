#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		/*prints the value of i as character*/
		putchar(i + '0');

	/*Adds a comma and a space to each number*/
	if (i != 9)
	putchar(',');
	putchar(' ');

putchar('\n');
return (0);
}
