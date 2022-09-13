#include "main.h"

/**
 * print_alphabet - function to print abc
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
