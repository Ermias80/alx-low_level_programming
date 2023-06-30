#include "main.h"
/**
 * string_toupper - cheng all lower case in to uper
 * @n: the string to bechenged
 * Return: A pointer
 */
char *string_toupper(char *n)
{
int i = 0;
while (n[i])
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] -32;
i++;
}
return (n);
}
