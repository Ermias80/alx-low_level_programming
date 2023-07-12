#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
    int i, j;
    char *coo;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    i = j = 0;

    while (s1[i] != '\0')
        i++;

    while (s2[j] != '\0')
        j++;

    coo = malloc(sizeof(char) * (i + j + 1));

    if (coo == NULL)
        return (NULL);

    for (i = 0; s1[i] != '\0'; i++)
        coo[i] = s1[i];

    for (j = 0; s2[j] != '\0'; j++, i++)
        coo[i] = s2[j];

    coo[i] = '\0';

    return (coo);
}
