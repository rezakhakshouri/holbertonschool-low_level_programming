#include "holberton.h"

/**
 * add - adds 3 numbers
 * @n: a number
 * @m: a number
 * Return: addition
*/

int add(int n, int m)
{
	int r;
	int d;

	r = n + m;
	d = r / 10;
	_putchar('0' + d);
	d = r % 10;
	_putchar('0' + d);
	return (0);
}
