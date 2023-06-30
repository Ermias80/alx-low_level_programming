#include "main.h"
/**
 * _leet - to concatenate the strings
 * @src: the second string
 * Return: a pointer to a resulting
 */
char *leet(char *str)
{
char *ptr = str;
char *leetChars = "aAeEoOtTlL";
char *leetReplacements = "4433007711";
int i, j;
while (*ptr)
{
for (i = 0; leetChars[i]; i++)
{
if (*ptr == leetChars[i])
{
*ptr = leetReplacements[i];
break;
}
}
ptr++;
}
return (str);
}

