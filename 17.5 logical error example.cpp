#include<stdio.h>

// Alim Ul Karim
// logical error example

int main() {
    float f = 0.01;

    if(f == (float)0.01){
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}
