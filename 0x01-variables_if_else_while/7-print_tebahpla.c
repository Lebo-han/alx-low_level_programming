#include <stdio.h>
/**
 * main - Reverse lower case alphabets
 * Return:Always 0
 */

int main(void)
{
	char r;

	r = 'z';
	while (r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}
