#include "main.h"
/**
 * _memset - fill a block  with a specific value
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
