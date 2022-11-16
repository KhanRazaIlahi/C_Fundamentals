#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][2],b[3][2],c[3][2],i,j;
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
    printf("\n a matrix is \n\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n b matrix is \n\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)   
    {
        for ( j = 0; j < 2; j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("Sum of Matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf(" %d ",c[i][j]);
        }
            printf("\n");
    }   
    return 0;
}