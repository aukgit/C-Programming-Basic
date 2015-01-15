#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// user inputs

int main() {
    int x;
    double d;
    char c;
    printf("Please type a number:");
    scanf("%d" , &x);
    printf("Your inputed number: %d\n", x);

    printf("Please type a char:");
    scanf(" %c" , &c);
    printf("Your inputed char: %c\n", c);

    printf("Please type a double:");
    scanf("%lf" , &d);
    printf("Your inputed double: %0.2lf\n", d);
    getch();
    return 0;
}

