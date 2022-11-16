#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[100];
    int Vowel=0,Consonant=0,Space=0,Punctuation=0,l,i;
    printf("Enter the Statement:\n");
    gets(s);
    l = strlen(s);
    for ( i = 0; i < l; i++)
    {
        if(isalpha(s[i]))
        {
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                Vowel++;
            }
            else
            {
                Consonant++;
            }
        }
        if (isspace(s[i]))
        {
            Space++;
        }
        if (ispunct(s[i]))
        {
            Punctuation++;
        }
    }
    printf("\n Number of Words = %d",Space+1);
    printf("\n Number of Vowels = %d",Vowel);
    printf("\n Number of Consonants = %d",Consonant);
    printf("\n Number of Spaces = %d",Space);
    printf("\n Number of Special Characters = %d",Punctuation);
    getch();
}