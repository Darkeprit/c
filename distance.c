#include<stdio.h>
void main()
{
    int speed,hour;
    printf("Enter the speed\n");
    scanf("%d",&speed);
    printf("Enter the time\n");
    scanf("%d",&hour);
    int distance;
    distance=speed*hour;
    printf("distance:%d\n",distance);
}