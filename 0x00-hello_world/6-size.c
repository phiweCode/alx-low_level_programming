#include <stdio.h>
/**
* Description: main - Prints out the sizes of datatypes.
* Return: it returns 0 when ran succesfully
*/
int main(void)
{
char chars;  
int integers;  
long longs;  
long long doubleLong;
float floats;
  
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(chars));  
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intergers));  
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longs));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(doubleLongs));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floats));
return (0); 
}
