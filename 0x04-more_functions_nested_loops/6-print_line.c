#include "main.h"
/**
 * print_line - alphabet in lowercase
 * @n: the the number
 * Return: 1 for lowaer character, 0 for the rest
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
putchar('\n');
}
else
{
for (x =0; x < n; x++)
{
putchar(95);
}
putchar('\n');
}
}
