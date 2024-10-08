#include <stdio.h>
void
main ()
{
  int i, j, r;
  char ch='A';
  printf ("Enter the number of rows : \n");
  scanf ("%d", &r);
  for (i = 1; i <= r; i++)
	{
	  for (j = 1; j <= i; j++)
		{
		  printf ("%c",ch);
		  ch++;
		}
	  printf ("\n");
	  ch='A';
	}
}

