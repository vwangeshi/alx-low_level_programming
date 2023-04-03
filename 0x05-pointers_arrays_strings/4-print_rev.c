#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int str;

	str = 0;
	while (s[str])
		str++;
	while (str--)
		_putchar(s[str]);
	_putchar('\n');
}

