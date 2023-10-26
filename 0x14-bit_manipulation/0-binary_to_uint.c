#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing a binary number.
 * Retrun: The converted number or 0 if an invalid character is present.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b == '0')
		{
			result <<= 1; /*Left shift to make room for the next bit*/
		}
		else if (*b == '1')
		{
			result <<= 1; /*Left shift to make room for the next bit*/
			result |= 1; /* Set the least significant bit to  1*/
		}
		else
		{
			return (0); /* Invalid character */
		}
	}

	return result;
}
