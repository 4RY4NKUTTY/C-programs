#include <stdio.h>
int main()
{
    float P, A, B, C;
    printf("Enter side a, b and c: ");
    scanf("%f %f %f", &A, &B, &C);

    P = A + B + C;

    printf("The perimeter of the given triangle is: %f",P);
    return 0;
}