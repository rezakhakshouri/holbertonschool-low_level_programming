#include <stdio.h>
/**
* main - 0 through 9
* description: gets numbers
* Return: 0
*/

int main(void)
{
	int m;

	m = 48;
	while (m <= 57)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		m = m + 1;
	}
	return (0);
}
