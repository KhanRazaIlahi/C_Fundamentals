#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[20]="Beginners Book";
    char s2[20]="Beginners Book.com";
    if (strcmp(s1,s2)==0)
    {
        printf("String 1 and String 2 are same");
    }
    else
    {
        printf("String 1 and String 2 are different");
    }
    getch();
}