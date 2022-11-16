#include<stdio.h>
#include<conio.h>
int main()
{
    float num;
    printf("Enter a Number\n");
    scanf("%f",&num);
    if (num<=0.0)
    {
        if(num==0.0)
        printf("You Entered Zero \n");
        else
        printf("You Entered a Negative Number \n");
    }
    else
    printf("You Entered a Positive Number");
    return 0;
}