#include <stdio.h>
void main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);
    
    switch(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        case 1:
        printf("Vowel");
        break;
        case 0:
        printf("Consonant");
        break;
    }
}