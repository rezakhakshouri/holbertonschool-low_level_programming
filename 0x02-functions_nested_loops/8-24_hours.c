#include "holberton.h"
/**
 * jack_bauer - calender
 * Return: always hours
 */

void jack_bauer(void)
{

	int mins, hours;

	for (hours = 0 ; hours <= 23; hours++)
	{
		for  (mins = 0 ; mins <= 59 ; mins++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(' : ');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
			_putchar('\n');
		}

	}





}
