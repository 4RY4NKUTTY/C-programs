// c program to check whether the given number is even or odd.
//0 = odd
//1 = even
#include <stdio.h>
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    printf("%d", x%2 == 0);
    return 0;
}