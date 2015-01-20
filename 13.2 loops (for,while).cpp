#include<stdio.h>

// Alim Ul Karim
// loops, while, for

int main() {
    int i,j;
    // break , continue
    for (i = 0, j= 5 ; i <= 5 ; i++,--j ){
        if(i == 4){
            continue;
        }

        //i 1 , j 4
        //2
        //3
        //4
        //printf("i: %d\n" , i);
        printf("j: %d\n" , j);

        //
    }
    printf("Last i: %d\n\n ----\n\n" , i);

    i = 0;
    j = 5;
    while(i <= 5){
        if(i == 4){
            i++;
            --j;
            continue;
        }
        //printf("While i: %d\n" , i);
        printf("While j: %d\n" , j);
        i++;
        --j;

    }

    getchar();
    return 0;
}



