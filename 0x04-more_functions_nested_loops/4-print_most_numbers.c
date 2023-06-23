#include "main.h"
/**
 * print_most_numbers - print nuber
 * Return: list of number
 */
void print_most_numbers(void)
{
int n =0;
for (; n <= 9; n++)
{
if (n == 2 || n == 4)
{
continue;
}
_putchar(n + '0');
_putchar('\n');
}
}
