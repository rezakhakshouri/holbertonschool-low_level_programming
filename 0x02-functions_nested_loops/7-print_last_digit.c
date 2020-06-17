#include "holberton.h"
/**
 * print_last_digit - prints last digit of
 * @n: takes the input
 * Return: returns last digit of the numbers
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);
	return (n);
}
