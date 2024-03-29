#include "main.h"
/**
 * _memcpy - enter pointer
 * @src: inpute one
 * @dest: inpute two
 * @n: byites
 * Return: always 0 (sucess)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
