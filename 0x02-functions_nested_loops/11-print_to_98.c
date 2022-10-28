#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers
 * @n: the first natural number
 */

void print_to_98(int n)
{
	int natu;

	if (n > 98)
		for (natu = n; natu > 98; --natu)
			printf("%d", natu);
	else
		for (natu = n; natu < 98; ++natu)
			printf("%d", natu);
	printf("98\n);
}
