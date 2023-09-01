#include "main.h"
/**
 * _strpbrk - is a string function in C++ STL that takes in two strings and finds the first occurrence of any character of string2 in string1. This function returns the pointer to the character of string2 in string1 if there is any, otherwise returns NULL.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
