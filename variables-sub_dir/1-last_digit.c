#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * n: number
 * result: store the result after modulation
 * Description: prints the last digit of a random number
 * Return: (0)
 */

int main(void)
{
	int n;
	int result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	result = n % 10;
	if (result > 5)
	{
		printf("Last digit of %d is %d and is greater than 5.\n", n, result);
	}
	else if (result == 0)
	{
		printf("Last digit of %d is %d and is 0.\n", n, result);
	}
	else if (result < 6 && result != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0.\n", n, result);
	}
	/**
	 * else
	 * {
	 * n +=2;
	 * }
	 */
	return (0);
}
