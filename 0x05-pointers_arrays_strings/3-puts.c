#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: the string to print
 * Return:Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
