#include "main.h"
/**
 * print_alphabet_x10.c - alphabet in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
fot (i = '0'; i <= '10'; i++)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}
_putchar('\n');
}
