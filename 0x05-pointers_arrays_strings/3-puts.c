#include <stdio.h>
/**
 * _puts -print the string
 * @str : the string to print
 * Return: void
 */
void _puts(char *str)
{
for (; *str != '\'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
