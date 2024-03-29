#include "main.h"
/**
 * _isalpha - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 64 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
