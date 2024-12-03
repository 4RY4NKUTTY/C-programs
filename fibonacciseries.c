// C program to calculate fibonacci series.

#include <stdio.h>

int fib (int n);

int main()
{   int fi;
    printf("enter a number : ");
    scanf("%d", &fi);
    printf("%d", fib(fi));
    return 0;
}

int fib (int n){
    if (n==0) {
        return 0;
    }
    if (n==1){
        return 1;
    }

    int fibnm1 = fib (n-1);
    int fibnm2 = fib (n-2);
    int fibn = fibnm1 + fibnm2;
    return fibn;
}