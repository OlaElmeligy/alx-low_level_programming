#include "main.h"
/**
 * print_square - print square
 * @size: size of square
 * Return: 0 (success)
 */
void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
{
	for (b = 1; b <= size; b++)
	_putchar('#');
	_putchar('\n');
}
}
