//Maximum Number in an Array using Pointer//
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[0],max,i;
    int *p;
    printf("Enter Element for the array: \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
        max = a[i];
        p=&a[0];
    }
    for ( i = 1; i < 5; i++)
    {
        if(max <= *p)
        max = *p;
        
    }
    printf("Maximum Number = %d",max);
    return 0;
}