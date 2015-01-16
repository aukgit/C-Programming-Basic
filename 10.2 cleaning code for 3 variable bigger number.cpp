#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// clean code
// DRY


int main() {
    int sum;
    int x,y,z;

    scanf("%d" , &x);
    scanf("%d" , &y);
    scanf("%d" , &z);

    bool xy = x >= y;
    bool xz = x >= z;
    bool yz = y >= z;

    bool x_is_bigger =  xy && xz;
    bool y_is_bigger =  !(xy) && yz;
    bool z_is_bigger =  !x_is_bigger && !y_is_bigger;

    if(x_is_bigger) {
        printf("x is bigger or equal to y and z.\n");
    } else if(y_is_bigger) {        // y is greater
        printf("y is bigger or equal to x and z.\n");
    } else {
        printf("z is bigger or equal to x and y.\n");
    }

    //getch();
    main();
    return 0;
}



