#include "main.h"

/**
 *Description: swap_int - swaps the values of the input args
 *@a: is the interger pointer parameter
 *@b: is the interger pointer parameter
 */

void swap_int(int *a, int *b)
{
int temp1;
int temp2;

temp1 = 0;
temp2 = 0;

temp1 = *a;
temp2 = *b;

*b = temp1;
*a = temp2;
}
