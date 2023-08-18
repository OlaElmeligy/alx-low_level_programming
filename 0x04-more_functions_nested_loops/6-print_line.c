#include "main.h"

/**
 * print_line - print a line
 * @n: num of times
 */

void print_line(int n)
{
int chr;
if (n <= 0)
	_putchar('\n');
else
{
for (chr = 1; chr <= n; chr++)
	_putchar('_');
_putchar('\n');
}
}
