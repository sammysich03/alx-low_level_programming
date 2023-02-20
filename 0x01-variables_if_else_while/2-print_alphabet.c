#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */

int main(void)
{
	char b;

	b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
		putchar('\n');
	return (0);
}
