#include "main.h"
/**
 * _strspn - enter pointer
 * @s: the character in ASCII code
 * @accept: inpute
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, value;
value = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
value++;
break; // Exit the inner loop once a matching character is found.
}
}
if (accept[n] == '\0')
{
break; // Exit the outer loop.
}
}
return value;
}
