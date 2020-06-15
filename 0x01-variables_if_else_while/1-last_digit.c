#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - 0 through 9
* description: counts characters
* Return: 0
*/

int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = (n % 10);
	printf("last digit of: %d is %d", n, c);
if (c == 0)
{
printf(" and is 0\n");
}
else if (c > 5)
{
printf(" and is greater than 5\n");
}
else(c < 6)
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
