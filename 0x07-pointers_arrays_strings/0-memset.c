#include "main.h"
/**
 * _memset - function to fill memory with a constant byte
 * @s: pointer to the memory area
 * @b: the value to be copied
 * @n: the number of times to copy
 *
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
