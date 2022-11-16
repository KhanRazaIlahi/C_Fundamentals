#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any Character\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("Entered Character is a Vowel");
        break;
    case 'e':
        printf("Entered Character is a Vowel");
        break;
    case 'i':
        printf("Entered Character is a Vowel");
        break;
    case 'o':        
        printf("Entered Character is a Vowel");
        break;
    case 'u':
        printf("Entered Character is a Vowel");
        break;   
    default:
    printf("Enterd Character is a Consonant");
        break;
    }
    return 0;
}