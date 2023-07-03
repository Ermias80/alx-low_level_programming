#include "main.h"
#include <stdio.h>
/**
 * __strchr - alphabet in lowercase
 * @c: the character in ASCII code
 * @s: byte
 * Return: always 0 (sucess)
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
