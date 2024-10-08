#include <stdio.h>
int main()
{
   int arr[5][3], i, j;

   printf("Enter 15 elements for a 5x3 matrix:");
   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &arr[i][j]);
      }
   }

   printf("\nThe Matrix is:\n");
   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }
   return 0;
}