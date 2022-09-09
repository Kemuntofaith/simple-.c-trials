#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point 
 * n: number 
 * Desciption: check if a random number is positive ort negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d\nThe number is positive. \n", n);
	}
	else if (n == 0)
	{
		printf("%d\nThe number is 0. \n", n);
	}
	else
	{
		printf("%d\nThe number is negative. \n", n);
	}
	return (0);
}
