#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// if-else

int main() {
    int x ;
    double d;
    char c;
    scanf("%d" , &x);
    int remainder = x % 5;
    printf("\n remainder: %d\n", remainder);

    bool con1 = (x <= 39 && x > 35);
    bool con2 = (x > 5 && x < 9);
    if(  con1  || con2 ){
        // 1000
        printf("Hello , we are running inside true part.\n");
        printf("true\n");
    } else {
        printf("Hello , we are running inside false part.\n");
        printf("false\n");
    }
    getch();
    return 0;
}

