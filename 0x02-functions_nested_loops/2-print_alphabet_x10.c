#include "main.h"

/**
 * print_alphabet_x10 - Program will print ten lines of alphabet.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char az;

	while (count++ <= 9)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
