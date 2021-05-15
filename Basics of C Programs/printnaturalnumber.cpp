 
#include<stdio.h>

int main()
{
  	int no, i = 1;
  
  	printf("Enter a number\n");
  	scanf("%d", &no);
  	
  	printf("Natural Numbers from 1 to %d are\n",no);  	
	while(i <= no)
  	{
    	printf(" %d", i);
    	i++;
  	}
  
}
