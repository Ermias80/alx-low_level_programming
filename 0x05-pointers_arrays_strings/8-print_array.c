#include "main.h"
#include <stdio.h>
/**
 * print_array - print a string
 * @a: the starting to print
 * @n: the second intiger
 * Return: void
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
