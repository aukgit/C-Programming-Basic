#include<stdio.h>


// Alim Ul Karim
// debugging and nesting



int main() {


    int i = 0;
    if(i == 0) {
        if( i < 1) {
            for (i = 0; i<=2; i++ ) {
                printf("i:%d\n", i);
                while(i <= 1){
                    printf("from while i:%d\n", i);
                }
            }
        }
    } else {


    }


    //getch();
    main();
    return 0;
}



