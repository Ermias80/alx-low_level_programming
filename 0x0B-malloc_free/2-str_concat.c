#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
int i, j;
char *coo;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
i = j = 0;
while (s1[i] != '\0')
{
	i++;
}
while (s2[j] != '\0')
{
	j++;
}
coo = malloc(sizeof(char) * (i + j + 1));
if (coo == NULL)
	return (NULL);
while (s1[i] != '\0')
{
	coo[i] = s2[i];
}
while (s2[j] != '\0')
{
	coo[j] = s2[j];
}
coo[j] = '\0';
return (coo);
}
