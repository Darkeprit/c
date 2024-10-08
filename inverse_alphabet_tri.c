#include <stdio.h>
void
main ()
{
  int i, j, r;
  char ch='A';
  printf ("Enter the number of rows : \n");
  scanf ("%d", &r);
  for (i = r; i >= 1; i--)
	{
	  for (j = i; j >= 1; j--)
		{
		  printf ("%c",ch);
		  ch++;
		}
	  printf ("\n");
	  ch='A';
	}
}

