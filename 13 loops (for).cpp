#include<stdio.h>


// Alim Ul Karim
// loops

int main() {
    int i,j;
    // break , continue
    for (i = 0, j= 5 ; i <= 5 ; i++,--j ){
        if(i == 4){
            continue;
        }
        //i 0 , j 5
        //i 1 , j 4
        //2
        //3
        //4
        printf("i: %d\n" , i);
        printf("j: %d\n" , j);

        //
    }
    printf("Last i: %d\n" , i);
    getchar();
    return 0;
}



