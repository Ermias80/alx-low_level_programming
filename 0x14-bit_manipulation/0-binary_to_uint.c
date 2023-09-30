#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string which containing the binary number
 *
 * Return: it will desplay the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int var = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		var = 2 * var + (b[m] - '0');
	}

	return (var);
}
