#include "main.h"
/**
 * *_memset - alphabet in lowercase
 * @s: pointed destination
 * @b: constant bytes
 * @n: bytes 
 * Return: alwayes 0 (sucess)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
