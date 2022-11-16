#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter String\n");
    gets(str);
    printf("\n String is %s",str);
    printf("\n Rev String is %s",strrev(str));
    return 0;
}