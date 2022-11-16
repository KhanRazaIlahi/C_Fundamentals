#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    if (a%5==0&&a%8==0)
    {
        printf("Divisible by 5 and 8");
    }
    else if (a%5==0)
    {
        printf("Divisible by 5");
    }
    else if (a%8==0)
    {
        printf("Divisible by 8");
    }
    else
    {
        printf("Divisible by NONE");
    }
    return 0;
}