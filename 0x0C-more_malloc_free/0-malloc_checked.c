#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check the code
 *@b: the length of memory location
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
char *m;
m = malloc(b);
if (m == NULL)
	exit(98);
return (m);
}
