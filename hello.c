#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int
main ()
{
  int i, n;
  time_t t;

  /* Intializes random number generator */
  srand ((unsigned) time (&t));

  /* Print 5 random numbers from 0 to 49 */
  n = rand() % 50;
  sleep(n);

  printf ("\nHello, World!\n");
  printf ("execution time: %d\n", n);

  return 0;
}
