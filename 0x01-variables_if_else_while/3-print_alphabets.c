#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */

int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	int C = 'A';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}
		putchar('\n');

		return (0);
}

