#include <stdio.h>
/**
* main - 0 through 9
* description: gets numbers
* Return: 0
*/

int main(void)
{
	int m;
	int k;

	m = 0;
	while (m <= 99)
	{
		k = m / 10;
		putchar('0' + k);
		k = m % 10;
		putchar('0' + k);
		if (m != 99)
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
