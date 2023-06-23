#include "main.h"
/**
 * print_numbers - alphabet in lowercase
 * Return: 1 for lowaer character, 0 for the rest
 */
void print_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}
