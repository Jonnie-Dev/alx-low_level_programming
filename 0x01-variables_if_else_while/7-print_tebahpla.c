#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: zyxwvutsrqponmlkjihgfedcba
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
