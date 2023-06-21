#include "main.h"
/**
 * print_sign - print the shign of a number
 * @c: the number to be cheaked
 * Return: 1 for posetive return -1 for negative and return 0 for anything else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
_putchar('\n');
}
