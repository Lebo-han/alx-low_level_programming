#include <stdio.h>
/**
 * main - Numbers in lowercase
 * Return:Always 0
 */

int main(void)
{
	char h;

	int k;

	h = 'b';
	k = 0;
	while (k < 10)
	{
		putchar(k + '0');
		k++;
	}
	while (h <= 'b')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
