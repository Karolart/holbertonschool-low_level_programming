#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;

	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	}
	if (lastD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastD);
	}
	else if (lastD < 6 && lastD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
	}

	return (0);
}
