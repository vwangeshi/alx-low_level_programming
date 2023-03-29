#include "main.h"
/**
 * _strlen - to calculate the  number of strings
 * @s : the string whose lenght is being counted
 *
 *Return: count
 */
int _strlen(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
		count++;
	return (count);

}
