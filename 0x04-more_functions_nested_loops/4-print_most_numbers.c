#include "main.h"
/**
 * print_most_numbers - print nuber
 * Return: list of number
 */
void print_most_numbers(void)
{
int n;
for (n = 0;n <= 9; n++)
{
if (n == 2 || n == 4)
{
continue;
}
else
{
putchar(n + '0');
}
}
putchar('\n');
}
