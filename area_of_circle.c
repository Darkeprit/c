#include<stdio.h>
#define PI 3.14
void main()
{
    //const float PI=3.14;
    float radius;
    printf("Enter the radius of circle\n");
    scanf("%d",&radius);
    int area;
    area=PI*radius*radius;
    printf("Area:%d\n",area);
  
}
