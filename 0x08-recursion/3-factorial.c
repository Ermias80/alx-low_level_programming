#include "main.h"
/**
 * factorial -  prints a string in reverse
 * @n: the string to be reverse
 * Return: nothing
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n <= 1)
	return (1);
return (n * factorial(n - 1));
}

