#include <stdio.h>
/**
 * main - alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter)
}
}
putchar('\n');
return (0);
}
