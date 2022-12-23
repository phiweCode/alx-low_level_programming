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
int temp;

for (ind = 0; ind < n / 2; ind++)
{

temp = a[ind];
a[ind] = a[n - ind - 1];
a[n - ind - 1] = temp;

}

}
