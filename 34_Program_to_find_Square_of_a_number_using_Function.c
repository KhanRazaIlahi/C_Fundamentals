#include<stdio.h>
#include<conio.h>
int main()
{
    int rev(int);//Function Prototype//
    int r,a;
    printf("Enter any Number");
    scanf("%d",&a);
    r=rev(a); //Function Call//
    printf("Square of the Number is %d",r);
    return 0;
}
int rev(int x) //Function Definition//
{
    return (x*x);
}