#include "main.h"
/**
 * _strcmp - to concatenate the strings
 * @s1: the fierst string
 * @s2: the second string
 * Return: a pointer to a resulting
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
if(s1[i] != s2[i])
{
return (s1[i] = s2[i]);
}
i++;
}
return (0);
}
