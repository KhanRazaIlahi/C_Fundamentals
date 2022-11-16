#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
printf("Enter any Number:");
scanf("%d",&n);

for ( i = 2; i <= n-1; i++)
{
    printf("1/%d+",i);
}
for ( i = 1; i <= n; i++)
sum=sum+i;
{ 
    printf("1/%d",n);
    printf("\n sum = 1/%d",sum+1/n);
}
return 0;
}

