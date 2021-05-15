#include<stdio.h>

int main()
{
  	int i,no;
  
  	printf("Enter a number\n");
  	scanf("%d", &no);
  	
  	printf("Natural Numbers from 1 to %d are\n",no);  	
	while(no>0)
  	{
    	printf(" %d", no);
    	no--;
  	}
  
}
