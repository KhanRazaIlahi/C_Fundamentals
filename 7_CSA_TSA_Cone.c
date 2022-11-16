#include<stdio.h>
#include<conio.h>
int main()
{
    int l,r;
    float TSA,CSA;
    printf("Enter value of l,r \n");
    scanf("%d %d",&l,&r);
    TSA=3.14*r*(l+r);
    CSA=3.14*r*l;
    printf("The TSA of Cone is %f\n",TSA);
    printf("The CSA of Cone is %f\n",CSA);
    return 0;
}