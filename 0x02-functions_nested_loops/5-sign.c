#include "main.h"

/**
 * print_sign - Function prints the signs of number
 * @n: is the number to check
 * Return: It will return 1 or 0 or -1.
 */

int print_sign(int n)
{
		if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
