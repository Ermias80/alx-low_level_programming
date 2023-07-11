#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creat an array with the size size and assigned char c
 * @c: char to assign
 * @size: the size of the array
 *
 * Return: pointer to array, NULL if it faill
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
