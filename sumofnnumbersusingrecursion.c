#include<stdio.h>

int sum(int n);

int main()
{   int r;
    printf("enter a number : ");
    scanf("%d", &r);
    printf("sum is %d", sum(r));
    return 0;
    
}

int sum(int n) {
    if (n==1) {
        return 1;
    }
    int sumnminus1 = sum (n-1);
    int sumN = sumnminus1 + n;
    return sumN;
}