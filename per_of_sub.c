#include<stdio.h>
int main()
{
    int marksphy,markseee,markscs,marksgra,marksmaths;
    printf("Enter the marks of physics\n");
    scanf("%d",&marksphy);
    printf("Enter the marks of EEE\n");
    scanf("%d",&markseee);
    printf("Enter the marks of CS\n");
    scanf("%d",&markscs);
    printf("Enter the marks of Graphics\n");
    scanf("%d",&marksgra);
    printf("Enter the marks of Maths\n");
    scanf("%d",&marksmaths);
    if (marksphy>100|| markseee>100|| markscs>100|| marksgra>100|| marksmaths>100)
    {
        printf("Error");
        return 1;
    }
    int per;
    per=((marksphy+markseee+markscs+marksgra+marksmaths)/500)*100;
    printf("percentage of all sub:%d\n",per);
}


