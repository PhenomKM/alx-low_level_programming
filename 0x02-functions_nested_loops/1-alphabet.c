#include "main.h"
/**
 * print_alphabet - use only user defined variables
 * Description: Write program to print "a to z" 
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
