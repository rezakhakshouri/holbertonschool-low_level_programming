#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
* main - time determined variable
* description: time
* return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
printf("%d is positive\n", n);
}
	if  (n == 0)
{
printf("%d is 0\n", n);
}
	if (n < 0)
{
printf("%d is negative\n", n);
}

	return (0);
}
