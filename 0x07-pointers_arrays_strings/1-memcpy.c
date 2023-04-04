#include "main.h"
/**
 * _memcpy - function that copies a memory area
 *
 * @dest: memory location where data will be copied
 *
 * @src: memory location from which data will be copied
 *
 * @n: the number of bytes
 *
 * Return: pointer dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
