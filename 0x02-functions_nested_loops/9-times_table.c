#include "holberton.h"
/**
 * times_table - mutiplies numbers 0-9
 * Return: 0
 */

void times_table(void)
{
	int m;
	int n;
	int i;
	int d;

	m = 0;
	while (m <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			i = m * n;
			if (i < 10)
			{
				_putchar(' ');
			}
			else
			{
				d = i / 10;
				_putchar('0' + d);
			}
			d = i % 10;
			_putchar('0' + d);
			if (n == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
		m++;
	}

}
