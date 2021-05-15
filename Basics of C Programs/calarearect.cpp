#include <stdio.h>
#include<conio.h>
int main()
{
    int length, width, area;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);
    area=length*width;
    printf("Area of rectangle = %d",area);

getch();
}

