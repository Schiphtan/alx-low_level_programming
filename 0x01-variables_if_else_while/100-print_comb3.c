#include <stdio.h>

/**
 * main - Program prints combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int n, z;

	for (n = 0; n < 9; n++)
	{
		for (z = n + 1; z < 10; z++)
		{
			putchar((n % 10) + '0');
			putchar((z % 10) + '0');

			if (n == 8 && z == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
