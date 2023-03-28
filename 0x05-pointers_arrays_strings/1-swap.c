#include "main.h"
/**
 * swap_int - shows the a and  b are pointers
 * @a: the value of a
 * @b: the value of b
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
