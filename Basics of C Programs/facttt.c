#include<stdio.h>
int main()

{
	int no,f=1,i;
	printf("Enter the number");
	scanf("%d",&no);
	i=1;
	while(i<=no)
	{
		f=f*i;
		i++;
	}
	printf("factorial no is %d\n",f);
}
