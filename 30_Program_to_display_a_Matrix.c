#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][2],b[3][2],i,j;
    printf("Enter Value for 1st  Matrix: ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter Value for 2nd  Matrix");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
            scanf("%d",&b[i][j]);
    }
    printf("\n 1st matrix is \n\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n 2nd matrix is \n\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}