#include <stdio.h>
#include <studlib.h>
#include <time.h>
/**
 * main - alphabet in lowercase
 * Return: Always 0 (success)
 */
int main (void)
{
int num;
for( num = '0' ; num < '10' ; num++)
{
putchar(num);
if(num!= '9')
{
putchar(",");
putchar(" ");
}
}
putchar("\n");
return (0);
}
