#include<stdio.h>
int main() 
{
    int  i=1,num,sum = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    while(i<=num) 
	{
		if(i%2==0)
		{
		
        sum = sum + i;
    }
		i++;
    }
    printf("addition is  = %d", sum);
}
