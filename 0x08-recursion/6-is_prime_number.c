#include "main.h"
#include <stdio.h>
int chake_prime(int n, int i);
/**
 * _prime_number -  prints a string in reverse
 * @n: the string to be reverse
 * @i; recr
 * Return: nothing
 */
int is_prime_number(int n)
{
return (chake_prime(n, 1));
}
/**
 * chake_prime -  prints a string in reverse
 * @n: the string to be reverse
 * @i; recr
 * Return: nothing
 */
int chake_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (chake_prime(n, i + 1));
}
