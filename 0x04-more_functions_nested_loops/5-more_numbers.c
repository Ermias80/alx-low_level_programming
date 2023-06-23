#include "main.h"
/**
 * more_numbers - print 10 times the number scince 0 up to 1uu4
 * Return: 10 times of the number scince 0 up to 14
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
