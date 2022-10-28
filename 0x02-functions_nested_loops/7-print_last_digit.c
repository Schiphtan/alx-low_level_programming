#include "main.h"

/**
 * print_last_digit - Function will print the last digit of a number
 * @n: the integer to check
 * Return: The last digi
 */

int print_last_digit(int n)
{
	int z;


	if (n > 0)
		z = -1 * (n % 10);
	else
		z = n % 10;
	_putchar(z + '0');
	return (z);
}
