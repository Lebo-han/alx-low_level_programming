#include "main.h"
/**
 * print_alphabet_x10 - lowercase print 10x
 * Return:Always 0
 */
void print_alphabet_x10(void)

{
	
	char sd;
	int f;
	f = 0;
	while (f < 10)

	{
		for (sd = 'a'; sd <= 'z'; sd++)

		{
			_putchar(sd);
		}
		_putchar('\n');
		f++;
	}
}
