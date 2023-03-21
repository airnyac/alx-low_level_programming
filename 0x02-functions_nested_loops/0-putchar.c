#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Prints '_putchar' to standard output
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
putchar('\n'); /*prints a new line*/
return (0);
}
