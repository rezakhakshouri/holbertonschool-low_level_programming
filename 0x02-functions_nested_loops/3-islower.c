#include "holberton.h"
/**
* _islower - selects lower case
* description : checks for lowercase
* @c: a number
* Return: 1 if c is lowercase and 0 otherwise
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

