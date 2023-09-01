#include "main.h"

/**
 * _isalpha - is a function in C which can be used to check if the passed character is an alphabet or not.
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
