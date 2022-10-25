#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + 'n');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
