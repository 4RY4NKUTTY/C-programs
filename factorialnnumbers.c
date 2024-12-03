// C program to find factorial of n numbers using recursion.

#include <stdio.h>

int fact(int n);

int main()
{
    int f;
    printf("enter a number : ");
    scanf("%d",&f);
    printf("factorial is %d", fact(f));
    return 0;
}

int fact (int n) {
    if (n==1) {
        return 1;
    }
    int factnminus1 = fact (n-1);
    int factori = factnminus1 * n;
    return factori;
}