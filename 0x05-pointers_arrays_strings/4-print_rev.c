#include "main.h"

/**
  * print_rev - Prints a string, in reverse, followed by a new line.
  * @s: string to print
  */
void print_rev(char *s)
{
	if (s == NULL)
		return;

	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
