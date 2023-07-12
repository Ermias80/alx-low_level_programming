#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - print the sum of arg posetive num
 * @argc: argument counter
 * @argv: aregument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
int i;
unsigned int k, sum = 0;
char *e;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
e = argv[i];
for (k = 0; k < strlen(e); k++)
{
if (e[k] < '0' || e[k] > '9')
{
printf("error\n");
return (1);
}
}
sum += atoi(e);
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
