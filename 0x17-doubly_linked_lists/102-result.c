#include <stdio.h>
int is_palindrome(int num)
{
	int reversed = 0, temp = num;
	while (temp > 0)
	{
		reversed = reversed * 10 + temp % 10;
		temp /= 10;
	}
	return (reversed == num);
}

int main()
{
	int largest_palindrome = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			int product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}
FILE *file = fopen("102-result.txt", "w");
if (file != NULL)
{
	fprintf(file, "%d", largest_palindrome);
	fclose(file);
} 
else{
	printf("Error creating file.");
	return (1);
}
return (0);
}
