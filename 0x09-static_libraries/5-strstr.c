#include "main.h"
/**
 * _strstr - This function takes two strings s1 and s2 as an argument and finds the first occurrence of the sub-string s2 in the string s1
 * @s1: This is the main string to be examined.
 * @s2: This is the sub-string to be searched in s1 string.
 * Return: Always 0 (Success)
 */
char *_strstr(char *s1, char *s2)
{
	for (; *s1 != '\0'; s1++)
	{
		char *l = s1;
		char *p = s2;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (s1);
	}

	return (0);
}
