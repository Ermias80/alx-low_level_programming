#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: The declerd number to search
 * @index: The index of the bit
 *
 * Return: the returned value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int var;

	if (index > 63)
		return (-1);

	var = (n >> index) & 1;

	return (var);
}

