#include <stdio.h>
/**
 * main -entry point
 * Description: program that prints the alphabet in lowercase
 * except q and e.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
