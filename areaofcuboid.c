// program to calculate the volume of a cuboid

#include <stdio.h>
int main()
{
    int length, breadth, height;

    printf("\n enter length \n");
    scanf("%d", &length);

    printf("\n enter breadth \n");
    scanf("%d", &breadth);

    printf("\n enter height \n");
    scanf("%d", &height);

    printf("\n area is : %d \n ",2*(length*breadth+ breadth*height + height*length));
    return 0;
}