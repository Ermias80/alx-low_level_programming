#include "main.h"
/**
 * more_numbers - alphabet in lowercase
 * Return: 1 for lowaer character, 0 for the rest
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
putchar((j / 10) + '0');
}
putchar((i % 10) + '0');
}
putchar('\n');
}
}
