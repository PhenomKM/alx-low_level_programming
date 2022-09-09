#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints out random sizes of various data.
 * Description: using the main function
 * this program prints a statement.
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}

