#include "main.h"
/**
 * _puts - prints strings
 * @str: function parameter
 * Return: 0
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
