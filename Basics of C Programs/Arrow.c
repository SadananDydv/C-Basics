#include <stdio.h>
int main()
{
int i, j, n=9;



for(i = 0; i < n; i++)
  {
      for(j = 0; j < n; j++)
         {
         	int num1 = n / 2 * 3;
           if(i == n / 2 || j - i == n / 2 || i + j == num1)
           printf("*");
       else
           printf(" ");
         }
        printf("\n");
   }
}
