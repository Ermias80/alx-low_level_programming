#include "main.h"
/**
 * print_square - print the squea according to n numberr
 * @size: the size of sqear/number of time
 * Return: empity
 */
void print_square(int size)
{
int x, y;
if (size < 0)
{
putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
putchar('#');
}
putchar('\n');
}
}
}
