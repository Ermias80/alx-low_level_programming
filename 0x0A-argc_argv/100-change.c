#include <mani.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints an array of string
 * @argc: The array to print
 *@argv: the pointer
 * Retur
 */
int main(int argc, char *argv[])
{
int coins[] = {25, 10, 5, 2, 1};
int count = 0;
int i;
int num_coins;
int cents;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
num_coins = sizeof(coins) / sizeof(coins[0]);
for (i = 0; i < num_coins; i++)
{
count += cents / coins[i];
cents %= coins[i];
}
printf("%d\n", count);
return (0);
}
