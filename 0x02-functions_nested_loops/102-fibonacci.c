#include <stdio.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 always.
 */
int main(void)
{
long int i, x = 1, y = 2, sum = 0;
for (i = 0; i < 49; i++)
{
printf("%1d, ", x);
sum = x + y;
x = y;
y = sum;
if (i == 48)
printf("%1d\n", x);
}
return (0);
}
