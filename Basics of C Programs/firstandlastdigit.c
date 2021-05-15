#include<stdio.h>
void main()
{
	int num,count=0,f,l;
	printf("Enter the number to find  first and last digits::\n");
	scanf("%d",&num);
	l=num%10;
	while(num>0)
	{
		f=num%10;
		num=num/10;
	}
	printf("first digit is :: %d \n",f);
	printf("last digit is :: %d \n",l);		
}
