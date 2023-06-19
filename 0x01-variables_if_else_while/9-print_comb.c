#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - alphabet in lowercase
 * Return: Always 0 (success)
 */
int main (void)
{
int num;
while (num <= 9)
{
putchar(num + '0');
if(num!= 9)
{
putchar(',');
putchar(' ');
}
}
putchar("\n");
return (0);
}
