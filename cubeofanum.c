// program to calculate cube of a number
#include <stdio.h>
int main()
{
    float cube, n;
    printf("enter number : ");
    scanf("%f", &n);

    cube = n*n*n;
    printf("THE OUTPUT IS: %f", cube);
    return 0;
}