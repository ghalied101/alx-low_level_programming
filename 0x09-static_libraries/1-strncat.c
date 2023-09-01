#include "main.h"
/**
 * _strncat - combine two strings
 * using at most n bytes from src
 * @dest: the string where we want to append.
 * @src: the string from which ‘n’ characters are going to append
 * @n: represents a maximum number of characters to be appended. size_t is an unsigned integral type.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
