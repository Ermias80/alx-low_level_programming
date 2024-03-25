#include "main.h"
/**
 * _isdigit - chake for the digit
 * @c: the number to be chaked
 * Return: 1 if it is a digit, 0 otherways
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
