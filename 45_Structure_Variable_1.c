#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student
{
    char Name[50];
    char Branch[50];
    int Roll_Number;
};Student;
int main()
{
    struct Student
    s[200];
    int i;
    s[i].Roll_Number=i+1;
    printf("Enter Information of Student:\n");
    for ( i = 0; i < 200; i++)
    {
        printf("\n Enter the Name:");
        scanf("%s\n",s[i].Name);
        printf("\n Enter the Branch:");
        scanf("%s\n",s[i].Branch);
        printf("\n Enter the Roll:");
        scanf("%d\n",s[i].Roll_Number);
        printf("\n");
    }
    printf("\n Displaying Information of Student:\n\n");
    for ( i = 0; i < 200; i++)
    {
        printf("\n Information for Roll no %d:\n",i+1);
        printf("\n Name");
        puts(s[i].Name);
        printf("\n Branch");
        puts(s[i].Branch);
    }
    return 0;
}