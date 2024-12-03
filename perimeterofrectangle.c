// program to calculate the perimeter of a rectangle
#include <stdio.h>
int main()
{
    float W, L, P;
    printf("enter width : ");
    scanf("%f", &W);
    
    printf("enter length : ");
    scanf("%f", &L);

    P = 2*(L+W);
    printf("THE PERIMETER IS : %f ", P);
    return 0;
}