#include "main.h"
/**
 * _strlen_recursion - returns the lenghth of a string
 * @f: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *f)
{
	if (*f == '\0')
	{
		return (0);
	}
	f++;
	return (_strlen_recursion(s) + 1);
}
