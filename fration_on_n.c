#include <stdio.h>
void
main ()
{
  int n, i, f;
  printf ("Enter the number to find the factorial : ");
  scanf ("%d", &n);
  f = i = 1;
  while (i <= n)
	{
	  f *= i;
	  i++;
	}
  printf ("The factorial is %d :%d", n, f);
}

