#include "main.h"
#include <stdio.h>
/**
 * _islower - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 89; n++)
{
if (n == 98)
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d,", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d", n);
}
}
}
