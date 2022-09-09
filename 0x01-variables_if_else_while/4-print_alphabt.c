#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet omitting e and q
 * using putchar twice only
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
		if (ch == 'e' || ch == 'q')
			ch++;
	}
	putchar('\n');
	return (0);
}
