// program to convert farenheit to celcius
#include <stdio.h>
int main()
{
    float farenheit, celcius;
    printf("enter farenheit : ");
    scanf("%f", &farenheit);

    celcius = ((farenheit-32)*5)/9;
    printf("THE OUTPUT IN CELCIUS : %f", celcius);
    return 0;
}