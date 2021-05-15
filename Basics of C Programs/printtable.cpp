#include <stdio.h>
int main()
{
   int tab,i,no;
 
    printf("Enter a Number\n");
    scanf("%d",&no);
    i=1;
    while(i<=10)
	{
         tab = no * i;       
        printf("%d * %d = %d \n",no,i,tab);
        i++;
}
}
