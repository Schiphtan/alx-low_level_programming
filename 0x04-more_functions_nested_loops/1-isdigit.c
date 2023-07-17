#include "main.h"

/**
  * _isdigit - function checks for a digit
  *
  * @c: integer input
  *
  * Returns: 1 if c is a digit 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}
