#include "main.h"
/**
 * _islower - alphabet in lowercase
 * @c -the character in ASCII
 * Return: 1 for lowaer character, 0 for the rest
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
