#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i;
    float Average,sum=0;
    printf("Enter Elements of an Array: \n");
    for ( i = 0; i < 10; i++)
    scanf("%d",&a[i]);
    for ( i = 0; i < 10; i++)
    sum=sum+a[i];
    printf("sum= %f\n",sum);
    Average=sum/10;
    printf("Average = %f\n",Average);
    return 0;
}