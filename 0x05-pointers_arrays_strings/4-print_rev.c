#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
		count++;
	for (j = count; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}

