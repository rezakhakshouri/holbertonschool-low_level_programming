#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: a number
 * Return: 98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		n = n;
		while (n >= 98)
		{
			if (n > 98)
			{
				printf("%d ,", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
		printf("\n");
	}
	else if (n < 98)
	{
		n  = n;
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d ,", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
		printf("\n");
	}
	else
	printf("98\n");

}
