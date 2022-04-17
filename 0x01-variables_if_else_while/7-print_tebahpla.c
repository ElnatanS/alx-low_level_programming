#include <stdio.h>
#include <string.h>

/**
 * main - print reverse alphabet
 * Return: 0
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
	  putchar(a);
	  a--;
	}
	putchar('\n');

	return (0);
}
