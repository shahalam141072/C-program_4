#include<stdio.h>
int main()
{
    int base, height, area;
    printf("Enter the base of a triangle: ");
    scanf("%d" , &base);
    printf("Enter the height of a triangle: ");
    scanf("%d" , &height);

    area = 0.5*base*height;
    printf("The area of this triangle is: %d" , area);


    return 0;
}
