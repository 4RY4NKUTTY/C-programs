#include <stdio.h>

int sum(int a, int b);
void table (int n);

int main()
{
    int n;
    printf("enter any number : ");
    scanf("%d", &n);

    table (n);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

void table (int n) {
    for(int i=1; i<11; i++) {
        printf("%d \n", i*n);
    }
}