#include "holberton.h"
/**
* print_alphabet - prints alphabet
* description: alphabet in lower case
* Return: 0
*/

void print_alphabet(void)

{
	int c;

	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
