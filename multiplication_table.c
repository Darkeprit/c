#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter which multiplication table do you want:\n");
    scanf("%d",&num);
    printf("Maltiplication table of %d",num);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
}