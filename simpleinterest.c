// program to calculate the simple interest of a given value.
#include <stdio.h>
int main()
{
    float P, T, R, SI;
    printf("enter principle = ");
    scanf("%f", &P);

    printf("enter rate = ");
    scanf("%f", &R);

    printf("enter time = ");
    scanf("%f", &T);

    SI = P*T*R/100;

    printf("%f", SI);

    return 0;
}