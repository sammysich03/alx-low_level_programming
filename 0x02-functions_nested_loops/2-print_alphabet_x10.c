#include "main.h"
/**
 *print_alphabet_x10 - entring point
 *it print a to z 10x
 *return: always success
 */
void print_alphabet_x10(void)
{
	int j = 0;
	int i;

	while (j < 10)
	{
		int i = 'a';

		while (i <= 'z')
		{
			_putchar (i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
