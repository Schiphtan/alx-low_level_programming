#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the alphabet in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}

	putchar ('\n');

	return (0);
}
