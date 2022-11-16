#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[30];
    printf("Enter the 1st String:");
    gets(s1);
    printf("Enter the 2nd String:");
    gets(s2);
    printf("The Concantenated String is: %s %s",s1,s2);
    return 0;
}