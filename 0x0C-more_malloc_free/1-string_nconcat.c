#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 *@s1: the first string
 *@s2: the second string
 *@n: length of the array
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, l = 0;
char *coo;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i]; i++)
l++;
coo = malloc(sizeof(char) * l + 1);
if (coo == NULL)
{
return (NULL);
}
l = 0;
for (i = 0; s1[i]; i++)
coo[l++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
coo[l++] = s2[i];
coo[l] = '\0';
return (coo);
}
