#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer parameter
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int 1 = n;
	
	if (n < 0)
	{
		_putchar(45);
		i = -i1;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
