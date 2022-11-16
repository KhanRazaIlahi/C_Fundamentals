#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,P,AR;
    printf("Enter the side of the Rectangle \n");
    scanf("%d %d",&l,&b);
    P=2*(l+b);
    AR=l*b;
    printf("The Perimeter of Rectangle is %d \n",P);
    printf("The Area of the Rectangle is %d \n",AR);
    return 0;    
}