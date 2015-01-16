#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// clean code
// DRY


int main(){
    int sum;
    int x,y,z;

    scanf("%d" , &x);
    scanf("%d" , &y);
    scanf("%d" , &z);

    bool xy = x >= y;
    bool xz = x >= z;
    bool yz = y >= z;

    if(xy) {
        // x is greater or equal to y
        if(xz){
            // x is greater or equal to z
            printf("x is bigger or equal to y and z.\n");
        } else {
            // z is greater or equal to x and y
            printf("z is bigger or equal to x and y.\n");
        }
    } else {
        // y is greater or equal to x

        if(yz){
            // y is greater
            printf("y is bigger or equal to x and z.\n");
        } else {
            // z is greater or equal
            printf("z is bigger or equal to x and y.\n");
        }
    }

    //getch();
    main();
    return 0;
}



