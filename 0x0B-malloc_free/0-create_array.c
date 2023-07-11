#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *arr;
arr = malloc(sizeof(char)*size);
if (size == 0 || arr == NULL)
	return (NULL);
n=0;
while (n < size)
{
	arr[n] = c;
	n++;
}
return (arr);
}
