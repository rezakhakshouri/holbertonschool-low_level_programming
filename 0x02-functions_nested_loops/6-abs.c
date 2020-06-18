#include "holberton.h"

/**
 * _abs - always positive
 * @n: description of variable
 * Return: the same number
*/


int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-n);
	}
	if (n == 0)
	{
		return (0);
	}
	return (n);

}

