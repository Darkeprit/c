#include <stdio.h>
void main()
{
    int i;
    for(i=1; i<=20; i++)
    {
        printf("%d ",i);
        if(i==10)
        {
           break;
        }
    }
}