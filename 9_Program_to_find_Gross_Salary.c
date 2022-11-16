#include<stdio.h>
#include<conio.h>
int main()
{
    int Gross_Salary,Basic_Salary,Dearness_Allowance,Transport_Allowance;
    printf("Enter the Basic Salary \n");
    scanf("%d",&Basic_Salary);
    Dearness_Allowance=(10*Basic_Salary)/100;
    Transport_Allowance=(12*Basic_Salary)/100;
    Gross_Salary=Basic_Salary+Dearness_Allowance+Transport_Allowance;
    printf("Gross Salary =%d",Gross_Salary);
    return 0;
}