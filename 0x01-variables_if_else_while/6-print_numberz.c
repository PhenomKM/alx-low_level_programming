#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * not allowed to use any variable of type char.
 * and can only use `putchar` twice to print to console.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
