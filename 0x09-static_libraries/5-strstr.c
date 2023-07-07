#include "main.h"
#include <stdio.h>
/**
 * _strstr - enter pointer
 * @haystack: inpute
 * @needle: inpute
 * Return: Alwayes 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
