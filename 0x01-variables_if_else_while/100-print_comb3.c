#include <stdio.h>
/**
 * main - different combinations of two digits
 * Return:Always 0
 */
int main(void)
{

	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!(ones == tens) || (tens > ones))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '8' && tens == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
