#include <stdio.h>
int main()
{
    int n,i,fact;
    fact=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,fact);
}
