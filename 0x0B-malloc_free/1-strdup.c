#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function returns a pointer to a new string which is a duplicate of the string
 *@str: pointer of the char
 * Return: pointer which allocate the new memory
 */
char *_strdup(char *str)
{
char *arr;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] !='0')
{
i++;
}
arr = malloc(sizeof(char) * (i + 1));
if (arr == NULL)
	return (NULL);
for (r = 0; str[r]; i++)
{
arr[r] = str[r];
}
return (arr);
}
