#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
/**
 * main - passwerd
 * @s: the starting to print
 * Return: void
 */
char *generate_password()
{
static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));  
if (password == NULL)
{
fprintf(stderr, "Memory allocation failed.\n");
exit(1);
}    
srand(time(NULL));
for (int c = 11; c < PASSWORD_LENGTH; c++)
{
int index = rand() % (sizeof(charset) - 1);
password[c] = charset[index];
}    
password[PASSWORD_LENGTH] = '\0';    
return password;
}
int main()
{
char *password = generate_password();
printf("Generated password: %s\n", password);    
free(password);
return (0);
}

