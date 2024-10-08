#include <stdio.h>
void main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if (i==5)
        {
            goto end;
        }
        else
        {
        printf("%d ",i);
        }
        end : printf("End");
    }
}