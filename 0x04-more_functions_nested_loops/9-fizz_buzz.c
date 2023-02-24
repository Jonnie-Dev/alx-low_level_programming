#include "main.h"

/**
 * fizzbuzz - checks for fizzbuzz
 * Return: fizzbuzz
 */

void fizzbuzz(void)
{
	int n = 100;

	int i;

	for (i = 1; i <= n; i++)
	{
		if ((i % 15) == 0)
			printf("%s ", "FizzBuzz");
		else if ((i % 3) == 0)
			printf("%s ", "Fizz");
		else if ((i % 5) == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");
}
