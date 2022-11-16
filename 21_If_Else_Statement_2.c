#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("Entered Number is EVEN");
    }
    else
    {
        printf("Entered Number is ODD");
    }
    return 0;
}