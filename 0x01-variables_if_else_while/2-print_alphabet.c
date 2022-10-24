#include <stdio.h>

/**
 * main - This is the main function
 *
 * Description: Will print alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	putchar ('\n');

	return (0);
}
