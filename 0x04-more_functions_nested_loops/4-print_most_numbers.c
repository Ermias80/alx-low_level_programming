#include "main.h"
/**
 * _islower - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if (n == 2 && n == 4)
{
continue;
}
_putchar(n + '0');
_putchar('\n');
}
