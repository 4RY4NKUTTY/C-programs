// write a c program to call two functions.
#include<stdio.h>

void hello();
void world();

int main()
{
    hello();
    world();
    return 0;
}

void hello() 
{
    printf("hello guys! \n");
}

void world()
{
    printf("good morning");
}