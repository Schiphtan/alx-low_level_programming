#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: Always 0
 */
int main(void)
{
	int z;

	for (z = 0; z < 10; z++)
		putchar((z % 10) + '0');

	putchar('\n');

	return (0);
}
