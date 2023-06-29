#include "main.h"
/**
 * _strncat - to concatenate the strings
 * @dest: the fierst input string
 * @src: the second input string
 * @n: the therd input 
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
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
