#include <stdio.h>
int main()
{
   int arr[10], i;
   printf("Enter 10 array elements:  ");
   for (i = 0; i < 10; i++)
      scanf("%d", &arr[i]);

   printf("\nThe array elements and their respective indexes are as follows: \n");
   for (i = 0; i < 10; i++)
      printf("arr[%d] = %d\n", i, arr[i]);

   return 0;
}