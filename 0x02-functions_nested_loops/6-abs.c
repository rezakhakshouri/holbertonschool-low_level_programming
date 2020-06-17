#include "holberton.h"
/**
* _abs() - always positive
* Description : _abs calculates absolute value and n is always positive
* RETURN VALUE : n Returns  the  absolute value of the integer argument
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
	return (48);

}

