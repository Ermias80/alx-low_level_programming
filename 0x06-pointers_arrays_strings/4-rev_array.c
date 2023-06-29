#include "main.h"
/**
 * reverse_array - to concatenate the strings
 * @a: the fierst string
 * @n: the second string
 * Return: a pointer to a resulting
 */
void reverse_array(int *a, int n)
{
int i, t;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
