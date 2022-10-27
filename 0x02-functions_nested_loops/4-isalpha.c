#include "main.h"

/**
 * _isalpha - Function will check for alphabetic character
 * @c: is the character we will check
 * Return: 1 if is alphabet, otherwise 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c >= 'A' && c <= 'z' && c <= 'Z')
		return (1);
	else
		return (0);
}
