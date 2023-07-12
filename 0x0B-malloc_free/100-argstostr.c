#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: length of th character
 * @av: pointer of the given
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j;
char *result;
int position = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}
result = malloc(sizeof(char) * total_length + 1);
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
int length = strlen(av[i]);
for (j = 0; j < length; j++)
{
result[position] = av[i][j];
position++;
}
result[position] = '\n';
position++;
}
result[position] = '\0';
return (result);
}
