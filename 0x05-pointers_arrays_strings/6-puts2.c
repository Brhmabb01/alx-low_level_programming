#include "main.h"

/**
 * puts2 - prints xter of a string
 * @str: used for string reference
 * Return: 0
 */


void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[2]);
		}
		z++;
	}
	_putchar('\n');
}
