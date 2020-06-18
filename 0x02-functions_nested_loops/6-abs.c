#include "holberton.h"
/**
* _abs() - always positive
* Description : _abs calculates absolute value
* @n: description of variable
* RETURN VALUE : always positive
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
	return (0);

}

