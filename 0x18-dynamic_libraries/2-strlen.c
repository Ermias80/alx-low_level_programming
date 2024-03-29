#include <stdio.h>
/**
 * _strlen - to return chake the lengeth of the strlen
 * @s : the value of sterlen
 * Return: leangth
 */
size_t  _strlen(const char *s)
{

size_t lengeth = 0;
while (*s++)
lengeth++;
return (lengeth);
}
