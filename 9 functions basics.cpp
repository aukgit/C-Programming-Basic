#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// function basics

int add(int x , int y);

int main(){
    int sum;
    int x,y;

    scanf("%d" , &x);
    scanf("%d" , &y);
    sum = add(x,y);
    printf("x:%d , y:%d\n", x,y);
    printf("Sum:%d\n", sum);
    printf("x:%d , y:%d\n", x,y);
    getch();
    return 0;
}

int add(int x , int y){
    int sum;
    x = 100;
    y = 200;
    sum = x + y;
    return sum;
}

