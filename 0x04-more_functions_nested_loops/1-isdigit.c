#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: The character to be checked
 * Return: 1 for digit or 0 for others
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
