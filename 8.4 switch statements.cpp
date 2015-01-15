#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// if-else

int main() {


    int x = 25;
    char c;
    scanf("%d" , &x);

    if( x > 5  ){
        printf("if 5-9 value of x is %d \n" , x);
    }

    if(x == 10) {
        printf("if 10 > value of x is %d \n" , x);
    } else if(x == 15 ) {
        printf("if 15 > value of x is %d \n" , x);
    } else {
        printf("if-only-else part value is %d\n" , x);
    }

    switch (x){
    case 10:
        printf("swtich 10 value of x is %d \n" , x);
        break;
    case 15:
        printf("swtich 15 value of x is %d \n" , x);
        break;
    default:
        printf("swtich default value of x is %d \n" , x);
    }

    getch();
    return 0;
}

