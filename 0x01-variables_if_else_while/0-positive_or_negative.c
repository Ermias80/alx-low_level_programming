#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- print if the number is posetive, negetive or zero
 * return: always (succes) 
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is", n);
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}
return (0);
}
