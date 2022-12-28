#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{

int row;
int col;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size - row - 1; col++)
{
_putchar(' ');
}
for (col = 0; col <= row; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

