#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	puts("Size of a char: %d byte(s)", sizeof(char));
	puts("Size of an int: %d byte(s)", sizeof(int));
	puts("Size of a long int: %d byte(s)", sizeof(long int));
	puts("Size of a long int: %d byte(s)", sizeof(long long int));
	puts("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
