#include "main.h"
/**
 * print_diagonal - drow the diagram
 * @n: the number of time
 * Return: empity
 */
void print_diagonal(int n)
{
int x, y;
if (n <= 0)
{
putchar('\n');
}
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
putchar(32);
}
putchar(92);
putchar('\n');
}
}
