#include <stdio.h>
/**
 * swap_int - swap the value of 2 numbers
 * @a : the 1st intiger to be swaped
 * @b : the 2nd intiger to be swaped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}
