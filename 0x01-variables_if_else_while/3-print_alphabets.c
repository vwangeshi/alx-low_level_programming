#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print uppercase letters
 *
 * Return: always 0
 *
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
