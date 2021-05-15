#include <stdio.h>
int main() 
{
    int  i,sum = 0,c=0;
    printf("Enter a number from 1 to infinite\n");
    scanf("%d", &i);

    while (c<=i) 
	{
        sum = sum + c;
        c++;
    }

    printf("Sum of numbers = %d", sum);
    
}
