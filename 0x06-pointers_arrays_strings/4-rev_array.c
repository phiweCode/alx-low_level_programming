#include "main.h"
#include <string.h>

/**
 * Description: reverse_array - reverses the contents of an array
 * @a: integer pointer array parameter
 * @n: Is the size of the array
 */

void reverse_array(int *a, int n)
{
int ind;

for (ind = n - 1; ind >= 0; ind--)
{
_putchar(a[ind]);
}

}
