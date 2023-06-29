#include "main.h"
/**
 * _strcat - to concatenate the strings
 * @dest: the fierst string
 * @src: the second string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
char* ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return dest;
}
