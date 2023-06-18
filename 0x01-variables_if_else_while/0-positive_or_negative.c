#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main print if the number is posetive, negetive or zero
<<<<<<< HEAD
 * return: always (succes) 
=======
 * return: always (succes)
>>>>>>> bc541071c6f02e2fcd8c75083e7d34042e41262f
*/
int main(void)
{
int n;
srand(time(0));
<<<<<<< HEAD
n = rand() - RAND_MAX / 2;
printf("%d is ", n);    
=======
n= rand() - RAND_MAX / 2;
printf("%d is", n);
>>>>>>> bc541071c6f02e2fcd8c75083e7d34042e41262f
if (n > 0)
{
printf("positive \n");
}
else if (n == 0)
{
printf("zero \n");
}
else
{
printf("negative \n");
}
return (0);
}
