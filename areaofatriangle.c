// program to calculate the area of a triangle.
#include <stdio.h>
#include <math.h>
int main()
{
    float AOT, base, height;

    printf("enter the base and height \n");
    scanf("%f", &base);
    scanf("%f", &height);
    
    AOT = (base*height)/2;
    printf("The area for given triangle is : %f",AOT);
    return 0;
}