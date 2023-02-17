#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0123456789abcdef
 */
int main(void)
{
	int n = 0;
	char letters = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n);

	return (0);
}
