#include "main.h"
/**
 * _islower - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
void more_numbers(void)
{
int i,j;
for (i = 0; i <= 14; i++)
{
for (j = i+1; j <= 14; j++)
{
putchar(j +'0');
}
putchar(i + '0');
}
putchar('\n');
}
