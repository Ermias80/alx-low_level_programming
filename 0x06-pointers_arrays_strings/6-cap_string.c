#include "main.h"
/**
 * cap_string - to concatenate the strings
 * @dest: the fierst string
 * @str: the second string
 * Return: a pointer to a resulting
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
i++;
if (str[i - 1] == ' '||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '|' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == ')' ||
str[i - 1] == '(' ||
str[i - 1] == '{' ||
str[i - 1] == '}' ||
i == 1)
str[i] == 32;
i++;
}
return (str);
}
