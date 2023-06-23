#include "main.h"
/**
 * _isdigit - chake for the digit
 * Return: 1 if it is a digit, 0 otherways
 */
int _isdigit(int c)
{
int n;
for (n =0 ; n <= 9; n++)
{
if (c == n)
{
return (1);
}
else
{
return (0);
}
}
