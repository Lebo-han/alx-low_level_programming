#include <stdio.h>
/**
 * swap_int - swaps the values of two integers 
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 * Return:Always 0
 */
void swap_int(int *a, int *b)
	/* the functin that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
