#include <stdio.h>
/**
* main - 0 through 9
* description: gets numbers
* Return: 0
*/

int main(void)
{
	int m;
	char k;

	k = '0';
	while (k <= '9')
	{
	putchar(k);
	k = k + 1;
	m = 97;
	}
	while (m <= 102)
	{
		putchar(m);
		m = m + 1;
	}
	{
		putchar('\n');
	}
return (0);
}
