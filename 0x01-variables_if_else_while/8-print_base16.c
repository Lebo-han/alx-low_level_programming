#include <stdio.h>
/**
 * main - Numbers in lowercase
 * Return:Always 0
 */

int main(void)
{
	char h;

	int k;

	h = 'a';
	k = 0;
	while (k < 10)
	{
		putchar(k + '0');
		k++;
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
