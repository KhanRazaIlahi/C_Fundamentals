#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Employee
{
    int Emp_ID;
    float Salary;
    char Name[50];
}Emp;
int main()
{
   struct Employee
    Emp = { 1272,59978.9 ,"Raza Ilahi Khan" };
    printf("\n Name: %s",Emp.Name);
    printf("\n ID: %d",Emp.Emp_ID);
    printf("\n Salary: %f",Emp.Salary);
    return 0;
}