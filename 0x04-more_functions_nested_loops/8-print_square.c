#include "main.h"
#include <stdio.h>
/**
 * print_square - function that prints a square, followed by a new line
 * @size: the number of squares/number of times
 * Return:always 0
 */

void print_square(int size)

{
	int x, y;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}