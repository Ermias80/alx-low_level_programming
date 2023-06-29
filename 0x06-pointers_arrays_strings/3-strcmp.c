#include "main.h"
/**
 * _strcmp - compute a strings
 * @s1: the fierst string
 * @s2: the second string
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int i; 
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if(s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
