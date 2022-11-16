//USE OF CONDITIONAL OPERATOR//
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    (a>b)?printf("a is greater"):printf("b is greater");
    return 0;
}