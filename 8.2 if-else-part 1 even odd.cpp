#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// if-else

int main() {
    int x ;
    double d;
    char c;
    scanf("%d" , &x);
    // odd == 1
    int remainder = x % 2;
    printf("\nRemainder: %d\n", remainder);

    bool oddTest = remainder == 1;

    if(  oddTest ){
        // 1000
        printf("Odd number detected.");
    } else {
        printf("Even number detected.");
    }
    getch();
    return 0;
}

