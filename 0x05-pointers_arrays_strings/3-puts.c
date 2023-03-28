#include "main.h"

/**
 * _puts - function the prints a string
 * @str:- pointer to the string
 * Return: string and newline
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
