#include "main.h"
#include <stdio.h>
/**
 * _islower - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
