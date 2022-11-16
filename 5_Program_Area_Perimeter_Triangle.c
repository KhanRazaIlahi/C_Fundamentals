#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,H,P;
    float AR;
    printf("Enter the length of the sides and height of  the Triangle \n");
    scanf("%d%d%d%d",&a,&b,&c,&H);
    P=a+b+c;
    AR=0.5*(b*H);
    printf("The Perimeter of Triangle is %d \n",P);
    printf("The Area of the  Triangle is %f \n",AR);
    return 0;
}