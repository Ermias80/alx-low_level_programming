#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable 
*
* The variable n will store a different value every time you run this program
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = abs(n) % 10;
        printf("Last digit of %d is ", n);
	if (lastDigit > 5)
       	{
        printf("%d and is greater than 5\n", lastDigit);
        }
         else if (lastDigit == 0)
	{
        printf("%d and is 0\n", lastDigit);
        }
        else
        {
        printf("%d and is less than 6 and not 0\n", lastDigit);
        }
	return (0);
}
