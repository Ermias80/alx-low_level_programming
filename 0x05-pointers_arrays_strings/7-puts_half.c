#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string
 * @s: the starting to print
 * Return: void
 */
void puts_half(char *str)
{
int j = 0;
int k;
while (str[i] != '\0')
{
j++;
}
if (j % 2 == 1)
{
k = (j - 1) / 2;
k +=1;
}
else
{
k = j / 2;
}
for (; k < j; k++)
{
putchar(str[k]);
}
putchar('\n');
}
