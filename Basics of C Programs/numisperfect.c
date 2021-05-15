
#include<stdio.h>
 
void main()
{
    int n, i=1, sum=0;
     
    printf("\n Enter a number: ");
    scanf("%d", &n);
     
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
     
    if(sum==n)
        printf("\n %d is a Perfect Number.",n);
    else
        printf("\n %d is Not a Perfect Number.",n);
   
}
