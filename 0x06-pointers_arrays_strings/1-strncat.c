#include "main.h"
/**
 * _strcat - to concatenate the strings
 * @dest: the fierst string
 * @src: the second string
 * @n: the therd 
 * Return: a pointer to a resulting
 */
char *_strcat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[i] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
