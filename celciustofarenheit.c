// program to convert celcius to farenheit
#include <stdio.h>
int main()
{
    float celcius, farenheit;
    printf("enter celcius : ");
    scanf("%f", &celcius);

    farenheit = (celcius * 9/5) + 32;
    printf("the output in farenheit is : %f F", farenheit);
    return 0;
}