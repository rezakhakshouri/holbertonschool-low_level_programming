#include <stdio.h>

/**
* main - 0 through 9
* description: gets numbers
* Return: 0
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
{
	if (c != 'e' && c != 'q')
	putchar(c);
}
{
	putchar('\n');
}
	return (0);
}
