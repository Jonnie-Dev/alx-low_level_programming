include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: staring index
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n; n <= 98; n++)
			printf("%d, ", n);
		printf("\n");
	}
	if (n >= 98)
	{
		for (n; n >= 98; n--)
			printf("%d, ", n);
		printf("\n");
	}
}
