#include "main.h"

/*
 * print_sign - prints the sign of a number
 *
 * @n: the number whose sign is to be printed
 *
 * Return: 1 if n is positive, 0 if n is 0 and -1 is n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchat('-');
		return (-1);
	}
}
