#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// array



int main() {
//    int numbers[4] = {2,3,4,5};

    //char stringType[10] = {'a', 'b','c', '\0'};
    char stringType[10] = "abc";
    int x =5;
    //    printf("&numbers:%d numbers:%d &x:%d x:%d\n", &numbers, numbers, &x, x);
    printf("%s\n", &stringType);

    stringType[2] = 'x';
    printf("%s\n", &stringType);

    getch();
    return 0;
}



