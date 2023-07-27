# include "main.h"

/**
  * factorial - Return the factorial of a given number.
  * @n: input value
  * Return: factorial(n)
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
