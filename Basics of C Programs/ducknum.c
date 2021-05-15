#include<stdio.h>
int main()
{
	int no,flag=0,rem;
	printf("%d",&no);
	while(no!=0)
	{
		rem = no % 10;
		no = no / 10;
		if(rem==0)
		{
			flag=1;
			break;
			
		}
		
	}
	if(flag)
	{
		printf("Number is duck");
		
	}else
	{
		printf("number is not duck");
	}
}
