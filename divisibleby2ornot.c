// c program to check if the given number is divisible by two or not.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d", x%2 == 0);
    return 0;
}