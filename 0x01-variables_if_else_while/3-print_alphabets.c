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
	putchar(c);
}
	c = 'A';
	while (c <= 'Z')
{	putchar(c);
	c++;
}
{
	putchar('\n');
}
	return (0);
}
