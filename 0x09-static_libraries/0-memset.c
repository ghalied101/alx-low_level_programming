#include "main.h"
/**
 * _memset - function. It copies a single character for a specified number of times to an object
 * @s: kick off address of memory to be loaded
 * @b: the achieved  value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
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
