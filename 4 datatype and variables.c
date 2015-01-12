#include<stdio.h>
#include<conio.h>
int main(){
    char cCharacterExample = 'd';
    char cCharacterexample;

    cCharacterexample = 'x';
    int x = 550 , y= 250;
    int X = 500 , Y= 200;
    printf("%c %c\n" , cCharacterExample, cCharacterexample);
    printf("%d %d\n" , x, y);
    printf("%d %d\n" , X+x, Y+y);
    printf("%d %d\n" , X*x, Y*y);
    printf("%d %d\n" , X/x, Y/y);

    getch();
    return 0;
}
