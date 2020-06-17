#include "holberton.h"
/**
* print_alphabet - prints alphabet
* description: alphabet in lower case
* Return: 0
*/

void print_alphabet_x10(void)

{
	int c;
	int b;

	b = 1;
	while (b <= 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
