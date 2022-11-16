#include<stdio.h>
#include<conio.h>
int main()
{
    int a,f;
    int fact(int);
    printf("Enter a Number");
    scanf("%d",&a);
    f=fact(a);
    printf("Factorial = %d",f);
    return 0;
}
int fact(int x)
{
    int fact=1,i;
    for ( i = x; i >= 1; i--)
    fact=fact*i;
    return(fact);
}