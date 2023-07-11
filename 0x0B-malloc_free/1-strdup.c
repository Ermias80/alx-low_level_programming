#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  duplicate a string
 *@str: string to be duplicate
 * Return: the string duplication
 */
char *_strdup(char *str)
{
char *arr;
int i = 1, r = 0;
if (str == NULL)
return (NULL);
while (str[i])
{
i++;
}
arr = malloc(sizeof(char) * (i + 1));
if (arr == NULL)
	return (NULL);
while (r < i)
{
arr[r] = str[r];
r++;
}
arr[r] = '\0';
return (arr);
}
