#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: the string to be reverse
 * Return: nothing
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt -  prints a string in reverse
 * @n: the string to be reverse
 * @i: the s
 * Return: nothing
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
