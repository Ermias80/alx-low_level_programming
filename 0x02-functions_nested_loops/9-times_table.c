#include "main.h"
/**
 * times_table - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
void times_table(void)
{
int x, y, z, u, d;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z > 9)
{
u = 2 % 10;
d = (z - u)/10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (y != 0)
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
}
_putchar('\n');
}
