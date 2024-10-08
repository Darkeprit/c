#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d",n);
        printf("\nEnter next number : ");
        scanf("%d",&n);
    }
    printf("terminated you had entered the zero");
}
