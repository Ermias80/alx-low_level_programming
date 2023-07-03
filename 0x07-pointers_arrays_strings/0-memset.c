#include "main.h"
/**
 * _islower - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
char *_memset(char *s, char b, unsigned int n)
{
 unsigned int i;
 for (i = 0; i <= n; i++)
{
s[i] = b;
}
return (s);
}
