#include <stdio.h>
int main()
{
   int my_array[1][2][3][4], i, j, k, l, val = 1;

   // initializing array
   for (i = 0; i < 1; i++)
   {
      for (j = 0; j < 2; j++)
      {
         for (k = 0; k < 3; k++)
         {
            for (l = 0; l < 4; l++)
            {
               my_array[i][j][k][l] = val;
               val++;
            }
         }
      }
   }

   // displaying array
   for (i = 0; i < 1; i++)
   {
      for (j = 0; j < 2; j++)
      {
         for (k = 0; k < 3; k++)
         {
            for (l = 0; l < 4; l++)
            {
               printf("my_array[%d][%d][%d][%d] = %d\n", i, j, k, l, my_array[i][j][k][l]);
            }
         }
      }
   }

   return 0;
}