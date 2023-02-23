#include "main.h"

/**
 * print_numbers - prints the numbers from 0 - 9
 *
 * Return: 0123456789
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar('%d',i);
	}
	_putchar('\n');

	return (0);
}
