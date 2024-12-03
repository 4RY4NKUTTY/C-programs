#include <stdio.h>

    void namaste();
    void bonjour();

int main () {

printf("enter i for INDIAN and f for FRENCH \n");
char ch;
scanf("&ch", ch);

if (ch == 'i') {
    namaste();
} 
else {
    bonjour();
}


}

void namaste() {
    printf("NAMASTE!!! \n");
}

void bonjour() {
    printf("BONJOUR!!! \n");
}