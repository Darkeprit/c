#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    switch (number%2)
    {
        case 0:
        printf("Enter number is even");
        break;
        case 1:
        printf("Enter number is odd");
        break;
        default:
        printf("Enter valid input");
    }
}