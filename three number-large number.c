#include <stdio.h>

void main()
{
    int num1,num2,num3,max_num;

    printf("\t\t\t\t------------------ WELCOME TO THE PROGRAMME -----------------");
    printf("\n\nEnter your 1st number : ");
    scanf("%d",&num1);
    printf("\n\nEnter your 2nd number : ");
    scanf("%d",&num2);
    printf("\n\nEnter your 3rd number : ");
    scanf("%d",&num3);

    if(num1>num2)
        if(num1>num3)
            max_num=num1;
        else
            max_num=num3;
    else
        if(num2>num3)
            max_num=num2;
        else
            max_num=num3;
    printf("\nEnter the largest number out of the three numbers : %d",max_num);

    printf("\n\n\t\t\t\t-------------------- THANK YOU ------------------- ");







}
