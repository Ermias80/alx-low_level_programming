#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: It will return the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, cou = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		current = exclusive >> p;
		if (current & 1)
			cou++;
	}

	return (cou);
}
