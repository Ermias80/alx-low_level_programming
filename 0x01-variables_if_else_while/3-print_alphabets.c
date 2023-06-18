#include <stdio.h>
/**
 * main - alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
char letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
