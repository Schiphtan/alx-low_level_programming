#include "main.h"

/**
 * _islower - Function checks for lowercase character
 * @c: is the character to check
 * Return: 1 && 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
