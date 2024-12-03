#include <stdio.h>
#include <math.h>
int main()
{
    float CI, P, R, T;
    printf("Enter principle: ");
    scanf("%f", &P);

    printf("Enter rate: ");
    scanf("%f", &R);

    printf("Enter time: ");
    scanf("%f", &T);

    CI = P* (pow((1 + R / 100), T));
    printf("THE CI IS: %f", CI);
    return 0;
}