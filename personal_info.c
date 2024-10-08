#include<stdio.h>
void main()
{
    char name [20];
    char address[20];
    char city[20];
    long int telephone;
    long int pincode;
    printf("\n\tEnter your name:");
    gets(name);
    
    printf("\n\tEnter your address:");
    gets(address);
    
    printf("\n\tEnter your city:");
    gets(city);
    
    printf("\n\tEnter your pincode:");
    scanf("%d",&pincode);
    
    printf("\n\tEnter your telephone number:");
    scanf("%d",&telephone);
    
    printf("\t\nPersonal Information\n");
    printf("\n\tyour name: %s",name);
    printf("\n\tYour address: %s,%s,%ld",address, city, &pincode);
    printf("\n\ttelephone number%ld",&telephone); 
}