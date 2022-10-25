#include <stdio.h>

/**
 * main - Program will print combinations of three digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; x++)
		{
			for (z = y + 1; y < 10; y++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');
				{
					if (x == 7 && y == 8 && z == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
