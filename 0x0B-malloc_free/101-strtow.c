#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Prints an array of string
 * @str: The array to print
 *
 * Return: nothing
 */
char **strtow(char *str)
{
int word_length;
int j;
char **words;
int word_count = 0;
int i = 0;
int in_word = 0;
int word_index = 0;
char *word_start = NULL;
in_word = 0;

if (str == NULL || strlen(str) == 0)
return (NULL);

while (str[i] != '\0')
{
if (str[i] != ' ' && !in_word)
{
in_word = 1;
word_count++;
}
else if (str[i] == ' ')
{
in_word = 0;
}
i++;
}
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
if (str[i] != ' ' && !in_word)
{
in_word = 1;
word_start = &str[i];
}
else if (str[i] == ' ' && in_word)
{
in_word = 0;
word_length = &str[i] - word_start;
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (j = 0; j < word_index; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
strncpy(words[word_index], word_start, word_length);
words[word_index][word_length] = '\0';
word_index++;
}
i++;
}
if (in_word)
{
word_length = &str[i] - word_start;
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (j = 0; j <= word_index; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
strncpy(words[word_index], word_start, word_length);
words[word_index][word_length] = '\0';
word_index++;
}
words[word_index] = NULL;
return (words);
}
