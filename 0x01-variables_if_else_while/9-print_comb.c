#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations for single-digit numbers.
 * Numbers must be separated by commas and a space.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		f (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
