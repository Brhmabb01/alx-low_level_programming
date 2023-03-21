#include <stdio.h>
/**
 * main - Entry point
 *
 * main: Always 0 (success)
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'a')
{
lowerCase += 1;
}
else
{
putxhar(lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
