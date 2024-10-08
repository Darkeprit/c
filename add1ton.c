#include <stdio.h>
void main()
{
    int n;
    int i,sum;
    printf("Enter the nuumber to which you want the addition : \n");
    scanf("%d",&n);
    i=1;
    sum=0;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("addition of 1 to  %d nuumber = %d",n,sum);
}