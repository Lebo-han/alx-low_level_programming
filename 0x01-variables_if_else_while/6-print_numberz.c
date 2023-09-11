#include <stdio.h>
/**
 * main - Single digits numbers
 * Return:Always 0
 */

int main(void)
{
	int u;

	u = 0;
	while (u < 10)
	{
		putchar(u + '0');
		u++;
	}
	putchar('\n');
	return (0);
}
