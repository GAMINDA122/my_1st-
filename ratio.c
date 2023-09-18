#include <stdio.h>

void main()
{
    int a,b,c,d;
    float answer;

    printf("\nEnter 4 numbers to find ratio : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if((c-d)!=0)
    {
        answer = (a+b)/(float)(c-d);
        printf("\n\nRatio : %f",answer);
    }

    else
        printf("division by zero");
}
