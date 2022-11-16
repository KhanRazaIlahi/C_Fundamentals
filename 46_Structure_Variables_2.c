#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student
{
    int Roll_Number;
    char Name[50];
}s1;
int main()
{
    s1.Roll_Number=37719;
    strcpy(s1.Name,"Raza Ilahi Khan");
    printf("Roll Number: %d\n",s1.Roll_Number);
    printf("Name:%s",s1.Name);
    return 0;
}