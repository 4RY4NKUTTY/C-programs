#include <stdio.h>

float rectanglearea(float a, float b);

float circlearea(float r);

float squarearea(float s);

int main () {
    float a, b, r, s;
    printf("Enter the length of the rectangle : ");
    scanf("%f", &a);
    
    printf("Enter the width of the rectangel : ");
    scanf("%f", &b);
    printf("Area of rectangle is : %f\n", rectanglearea(a, b));
    
    printf("Enter the radius of the circle : ");
    scanf("%f", &r);
    printf("The radius of the circle is : %f\n", circlearea(r));
    
    printf("Enter the side of the square : ");
    scanf("%f", &s);
    printf("The area of the square is : %f\n", squarearea(s));
}

float rectanglearea(float a, float b) {
    return a * b;
}

float circlearea(float r) {
    return 3.14*r*r;
}

float squarearea(float s) {
    return s*s;
}
