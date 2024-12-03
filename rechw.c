//Using recursive program in C language to print hello world.

#include <stdio.h>

void hw(int count);

int main()
{
    hw(14);
    return 0;
}

void hw(int count) {
    if (count==0){
        return;
    }
    printf("Hello World! \n");
    hw(count-1);

}