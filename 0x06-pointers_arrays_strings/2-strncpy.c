#include "main.h"
/**
 * _strncpy - to concatenate the strings
 * @dest: the fierst string
 * @src: the second string
 * @: the therd vat
 * Return: a pointer to a resulting
 */
char *_strncpy(char *dest, char *src, int n)
{
int k;
k = 0;
while (k < n && src[k] != '\0')
{
dest[k] = src[k];
k++;
}
while (k < n)
{
dest[k] = '\0';
k++;
}
return (dest);
}
