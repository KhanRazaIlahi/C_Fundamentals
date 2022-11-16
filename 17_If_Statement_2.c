#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter a Value of x and y");
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        printf("x is Greater than y \n");
    } 
    if (x<y)
    {
        printf("x is Less than y \n");
    } 
    if (x==y)
    {
        printf("x is Equal to  y \n");
    }
    printf("End of PRogram"); 
    return 0;
}