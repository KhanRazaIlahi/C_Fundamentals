#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[30]="String 1";
    char s2[30]="String 2:HELLO WORLD";
    strcpy(s1,s2);
    printf("String s1 is: %s",s1);
    return 0;
}