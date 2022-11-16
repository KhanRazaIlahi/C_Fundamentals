#include<stdio.h>
#include<conio.h>
void main()
{
    int *p1,*p2,x,y,sum;
    printf("Enter two Numbers:");
    scanf("%d %d",&x,&y);
    p1=&x;
    p2=&y;
    sum=*p1+*p2;
    printf("Sum = %d ",sum);
    getch();
}

