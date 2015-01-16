#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// Arithmetic Compound Operators



int main() {

    char c = 67;

    int y =10;
    int res = 11;


    //res = res * (x+1);

    //c += 1;

//    printf("%d" , res);



    // x++ , ++x
    int x = 5;
    //x++; // ++x or x++
    //x++ post

    //++x; // pre
    //x = x - 1; // --x or x--
    // x = x+ 1
    // x++
    // x= x+1;
//    printf("%d\n", ++x);
//    printf("%d\n", x);
    //                                 ( 5 + 2)
    //            8    +    8  +    (6)    +   7
    int xResult = x++ + ++x + (x++) + (x++ + 2);
    printf("xRes:%d\n", xResult);
    printf("x:%d\n", x); //9

    getch();
    return 0;
}



