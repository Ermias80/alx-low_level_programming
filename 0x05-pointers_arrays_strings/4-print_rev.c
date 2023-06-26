#include "main.h"
#include <stdio.h>
/**
 * _islower - alphabet in lowercase
 * @c: the character in ASCII code
 * Return: 1 for lowaer character, 0 for the rest
 */
void print_rev(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
putchar(s[c]);
}
putchar('\n');
}
