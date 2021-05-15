#include<stdio.h>

int main()
{

    int num1, num2;  
    float fraction;     
    char character;

    printf("Enter two numbers number\n");
    
   
    scanf("%d%i", &num1, &num2);
    printf("\n\nThe two numbers You have entered are %d and %i\n\n", num1, num2);

    printf("\n\nEnter a Decimal number\n");
    scanf("%f", &fraction); 
    printf("\n\nThe float or fraction that you have entered is %f", fraction);

    return 0;
}
