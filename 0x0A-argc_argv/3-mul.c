#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication of two arg numbers
 * @argc: argument counter
 * @argv: aregument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
int n1 = 0, n2 = 0;
if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n1 * n2);
}
else
{
printf("error\n");
return (1);
}
return (0);
}
