#include<stdio.h>
#include<conio.h>
int main()
{
	int no,last,mid,first;
	printf("Enter the number to reverse\n");
	scanf("%d",&no); 
	last = no % 10;
	mid = (no/10)%10;
	first=no/100;
	no = last*100 + mid * 10 +first;
	printf("after reverse is %d\n",no);
	getch();
}
