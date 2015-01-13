#include<stdio.h>
#include<conio.h>
int main(){    int x = 39;
    bool condition = false || false && true && false || (true && false || false && (true && false || false));

    printf("%d" , condition);

    getch();
    return 0;
}
