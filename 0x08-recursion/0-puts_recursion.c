#include "main.h"

/**
  * _puts_recursion - prints a string
  * @s: string to be printed
  * Return: Always 0 (Success)
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
