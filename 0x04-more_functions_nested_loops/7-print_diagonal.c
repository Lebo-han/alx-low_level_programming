#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a diagonal line according to parameter
 * @n: the number of times to print the diagonal line
 * Return:empty
 */

void print_diagonal(int n)

{
	int x, y;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
