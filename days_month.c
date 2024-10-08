#include<stdio.h>
void
main ()
{
  int num;
  printf ("Enter month number\n");
  scanf ("%d", &num);
  switch (num)
	{
	case 1:
	  printf ("Total days in Jan: 31");
	  break;
	case 2:
	  printf ("Total days in Feb: 28/29");
	  break;
	case 3:
	  printf ("Total days in Mar: 31");
	  break;
	case 4:
	  printf ("Total days in Apr: 30");
	  break;
	case 5:
	  printf ("Total days in May: 31");
	  break;
	case 6:
	  printf ("Total days in Jun: 30");
	  break;
	case 7:
	  printf ("Total days in Jul: 31");
	  break;
	case 8:
	  printf ("Total days in Aug: 31");
	  break;
	case 9:
	  printf ("Total days in Sep: 30");
	  break;
	case 10:
	  printf ("Total days in Oct: 31");
	  break;
	case 11:
	  printf ("Total days in Nov: 30");
	  break;
	case 12:
	  printf ("Total days in Dec: 31");
	  break;
	default:
	  printf ("Invalid number");
	}
}
