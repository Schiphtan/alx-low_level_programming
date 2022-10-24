#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: Always 0
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
