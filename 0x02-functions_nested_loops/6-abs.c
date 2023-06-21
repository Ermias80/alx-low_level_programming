#include "main.h"
/**
 * _abs - compute the absolute vallue
 * @c: the number to be computedi
 * Return: return absolut value of a number
 */
int _abs(int c)
{
int abs_val;
if (c < 0)
{
abs_val = (c * -1);
return (abs_val);
}
else
{
return (c);
}
}
