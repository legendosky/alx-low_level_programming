#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: the number to start counting from n to 98
 * Return: always 0.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
