#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int rem  = n % 10;

	if (n < 0)
		rem *= -1;
	_putchar('0' + rem);

	return (rem);
}
