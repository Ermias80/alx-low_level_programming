#include "main.h"
/**
 * _islower - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
int print_last_digit(int n)
{
int last
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last * '0');
return (last);
}
