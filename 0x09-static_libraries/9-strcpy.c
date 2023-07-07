#include "main.h"
/**
 * _strcpy - copy aa string
 * @dest: destance value
 * @src: score value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
