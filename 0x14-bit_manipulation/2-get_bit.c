#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to exract the bit from
 * @index: the index of the bit to retriede (0-based)
 *
 * Return: The value of the bit at the given index
 * Or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 63)
		return (-1);

	bitVal = (n >> index) & 1;

	return (bitVal);
}
