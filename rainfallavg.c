#include <stdio.h>

int
main ()
{
  int years, months, sumofmonths;

  float rainfall, sumofrainfall = 0, avgrainfall;

  printf ("Enter the number of years: ");

  scanf ("%d", &years);

  sumofmonths = years * 12;

  for (int i = 1; i <= years; i++)
	{
	  for (int j = 1; j <= 12; j++)
		{
		  printf ("Enter the inches of rainfall for Year %d, Month %d: ", i,
				  j);

		  scanf ("%f", &rainfall);

		  sumofrainfall = sumofrainfall + rainfall;
		}
	}

  avgrainfall = sumofrainfall / sumofmonths;

  printf ("\nNumber of months: %d\n", sumofmonths);

  printf ("Total inches of rainfall: %f\n", sumofrainfall);

  printf ("Average rainfall per month: %f inches\n", avgrainfall);

  return 0;
}
