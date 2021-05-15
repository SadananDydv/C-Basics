#include<stdio.h>
#include<conio.h>
int main()
{
    int km, m, cm;
    printf("Enter the distance in KM:");
    scanf("%d", &km);
    m=km*1000;
    cm=km*100000;
    printf("The distance in meters is %d\n", m);
    printf("The distance in centimeters is %d\n", cm);
    getch();
    return 0;
}
