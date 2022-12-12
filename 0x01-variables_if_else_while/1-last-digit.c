File Edit Options Buffers Tools C Help
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if(n>5)
    {
      printf("Last digit of %d is  and is greater than 5\n");
    }else if(n==0)
    {
      printf("  is positive\n");
    }else
    {
      printf("is negative\n");
    }


  return (0);
}
