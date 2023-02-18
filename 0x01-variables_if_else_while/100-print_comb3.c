#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int tens;
	int unit;

	for (tens = 0; tens < 9; tens++)
	{
		for (unit = tens + 1; unit < 20; unit++)
		{
			putchar((tens % 10) + '0');
			putchar((unit % 10) + '0');

			if (tens == 8 && unit == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');


	return (0);
}
