#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	int i;
	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
}
