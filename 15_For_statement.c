#include<stdio.h>
#include<conio.h>
int main()
{
    int c,n,fact=1;
    printf("Enter a number to calculate its factorial \n");
    scanf("%d",&n);
    for ( c = 2; c <= n; c++)
    fact=fact*c;
    {
    printf("The factorial of %d=%d\n",n,fact);
    }
    return 0;
}