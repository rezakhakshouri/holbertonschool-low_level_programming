#include "holberton.h"
/**
* _isalpha - selects alphabets
* description : checks for alphabetic character
* Return: 1 if c is a letter and 0 for otherwise
*/

int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

