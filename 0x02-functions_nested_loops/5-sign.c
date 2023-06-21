#include "main.h"
/**
 * print_sign - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
int print_sign(int n)
{
if (n > = 0)
{
return (1);
_putchar('+');
_putchar(',')
}
else if (n == 0)
{
return (0);
_putchar('0');
_putchar(','
}
else
{
return (-1);
_putchar('-');
_putchar(',')
}
_putchar('\n');
}
