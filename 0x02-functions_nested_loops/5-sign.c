#include "main.h"
/**
 * print_sign - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43)
return (1);
}
else if (n == 0)
{
_putchar(48)
return (0);
}
else
{
_putchar(45)
return (-1);
}
_putchar('\n');
}
