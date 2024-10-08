#include<stdio.h>
void main()
{
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age>=18)
   { 
        printf("eligible for voting\n");
   }
        
    else
   { 
       printf("not eligible");
   }
   if(age>=100)
   {
    printf("RIP\n");
   }
}