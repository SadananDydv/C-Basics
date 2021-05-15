
#include <stdio.h>
int main()
{
    int n,i;
    printf("Print natural numbers from 1 to n \n");
    scanf("%d", &n);
    i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
}
