#include<stdio.h>
void main()
{
    int sec;
    printf("Enter time in second\n");
    scanf("%d",&sec);
    int m;
    m=sec/60;
    printf("min:%d\n",m);
    int h;
    h=sec/3600;
    printf("hour:%d\n",h);
    int day;
    day=(sec/3600)/24;
    printf("day:%d\n",day);
    int week;
    week=((sec/3600)/24)/7;
    printf("week:%d\n",week);
}