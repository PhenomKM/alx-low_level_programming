#include "main.h"
/**
 * print_alphabet_x10 - print list of alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int g = 0;

	while (g < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		g++;
	}
}
