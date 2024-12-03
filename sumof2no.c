#include<stdio.h>
int main()
{
    int a , b;
    printf(" \n enter a \n");
    scanf("%d", &a);

    printf("enter b \n");
    scanf("%d", &b);

    int modulus = a % b;
    printf("modulus is : %d", modulus);
    return 0;
}