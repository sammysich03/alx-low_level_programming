#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */

int main(void)
{
	char a;

	a = 'b';

	while (a <= 'z')
	{
		putchar(a);
	}
		putchar('\n');
	return (0);
}
