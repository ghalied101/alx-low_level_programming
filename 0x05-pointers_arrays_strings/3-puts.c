#include "main.h"
/**
 * _puts - prints a string, to stdout plus new line
 * @str:point to the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
