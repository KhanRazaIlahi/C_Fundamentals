#include<stdio.h>
#include<conio.h>
int main()
{
    int English,Arabic,Maths,Physics,Chemistry,Sum,Total=500;
    float Percentage;
    printf("Enter the marks in 5 Subjects:\n");
    scanf("%d %d %d %d %d",&English,&Arabic,&Maths,&Physics,&Chemistry);
    Sum=English+Arabic+Maths+Physics+Chemistry;
    printf("Sum = %d \n",Sum);
    Percentage=(Sum*100)/Total;
    printf("Percentage = %f \n",Percentage);
    return 0;    
}