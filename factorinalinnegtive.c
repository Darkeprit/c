#include <stdio.h>
void
main ()
{
  long int fact;
  int i;
  printf ("Enter the number");
  scanf ("%ld", &fact);
  if (fact > 0)
	{
	  for (i = fact - 1; i > 0; i--)
		{
		  fact = i * fact;
		}
	  printf ("factorial=%ld", fact);

	}
  else
	printf ("wrong input");
}
