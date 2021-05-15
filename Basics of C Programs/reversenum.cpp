#include<stdio.h>
	#include<conio.h>
		
	
int main()
	{
		int num, temp;
	
		
		printf("ENTER THE  NUMBER:- ");
		scanf("%d",&num);
		
		printf("AFTER REVERSE RESULT IS:- ");
		temp = num%10;                  
		printf("%d",temp);
		temp = num/10;
		temp = temp%10;
		printf("%d",temp);
		temp = num/10;
		temp = temp/10;
		printf("%d",temp);

		getch();
	}
