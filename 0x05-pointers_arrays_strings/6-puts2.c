#include "main.h"

/**
 * puts2 - prints xter of a string
 * @str: used for string reference
 * Return: void if iys correct
 */


void puts2(char *str)
{
int z;

for  (z = 0; str[z]!= '\0'; z++)
{
if (z % 2 == 0)
_putchar(str[z]);
}
_putchar('\n');
}
