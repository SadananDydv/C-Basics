#include <stdio.h>
int main() 
{
    int  num,count=0;
    printf("Enter a number\n");
    scanf("%d", &num);

    while(num>0) 
	{
		count=count+1;
		num=num/10;
    }
    

    printf("total digits is %d",count);
}
