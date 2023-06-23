#include "main.h"
/**
 * _islower - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
void print_triangle(int size)
{
if (size <= 0)
{
putchar('\n');
return;
}
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}
}
