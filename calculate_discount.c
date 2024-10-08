#include <stdio.h>

void

main ()

{
  int cost, discount, amount;

  printf ("Enter the cost:\n");

  scanf ("%d", &cost);

  if (cost < 1000)

	{

	  discount = (cost * 10) / 100;

	  amount = cost - discount;

	  printf ("amount to be paid: %d", amount);

	}

  else if (cost < 2000)

	{

	  discount = (cost * 20) / 100;

	  amount = cost - discount;

	  printf ("amount to be paid: %d", amount);

	}

  else if (cost > 2000)

	{


	  discount = (cost * 30) / 100;

	  amount = cost - discount;

	  printf ("amount to be paid: %d", amount);

	}

  else
	{

	  printf ("no discount");



	}
}
