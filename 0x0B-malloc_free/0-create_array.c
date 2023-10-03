#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size:the size of the array
 * @c:the char to fill the array
 * Return:the array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int u;
	char *d;

	if (size == 0)
		return (NULL);
			d = malloc(size * sizeof(char));
	if (d == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
	{
		d[u] = c;
	}
	return (d);
}
