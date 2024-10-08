#include<stdio.h>
void main()
{
     long long int sec;
     printf("Enter seconds : ");
     scanf("%lld",&sec);
     
     if(sec>=60 && sec<3600)
     {
          int min = sec/60;
          printf("there are %d minutes in %lld sec",min,sec);
          
     }
     else if(sec>=3600 && sec<86400)
     {
          int hr = sec/3600;
          printf("there are %d minutes in %lld sec",hr,sec);
     }
     else if (sec>=86400)
     {
          int days = sec/86400;
          printf("there are %d minutes in %lld sec",days,sec);
          
     }
     else 
     {
          printf("invalid ");
          
     }
}