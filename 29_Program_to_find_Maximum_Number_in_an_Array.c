//Maximum Number in an Array//
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],max,i;
    printf("Enter Element for the array: \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
        max=a[0];
    }
    for ( i = 1; i < 5; i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("Maximum Number=%d",max);
    return 0;
}