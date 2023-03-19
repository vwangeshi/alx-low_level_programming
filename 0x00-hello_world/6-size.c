#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
	printf("size of char: %d, byte(s)\n", sizeof char(char));
	printf("size of an  int: %d, byte(S)\n", sizeof int(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
