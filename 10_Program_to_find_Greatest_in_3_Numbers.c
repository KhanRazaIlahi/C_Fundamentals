//USE OF IF STATEMENT//
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c \n"); 
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&( a>c))
    printf("a is Greatest");
    if((b>a)&&( b>c))
    printf("b is Greatest");
    if((c>a)&&( c>b))
    printf("c is Greatest");
    return 0;
}
//USE BRACKETS AND WHOLE BRAKETS FOR COMPARION OF TWO NUMBERS//
//DO NOT USE COLON AFTER IF STATEMENT//