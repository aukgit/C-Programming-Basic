#include<stdio.h>


// Alim Ul Karim
// clean code
// modular


int compare_two_numbers_return_big(int x,  int y){
    if(x >= y){
        return x;
    } else {
        return y;
    }
}

int compare_three_numbers_return_big(int x,  int y, int z){
    int bigger = compare_two_numbers_return_big(x,y);
    return compare_two_numbers_return_big(bigger,z);
}

int compare_four_numbers_return_big(int a,  int b, int c, int d){
    int bigger = compare_three_numbers_return_big(a,b,c);
    return compare_two_numbers_return_big(bigger,d);
}

int compare_five_numbers_return_big(int a,  int b, int c, int d, int e){
    int bigger = compare_four_numbers_return_big(a,b,c, d);
    return compare_two_numbers_return_big(bigger,e);
}


int main() {
    int sum;
    int a,b,c,d,e ;

    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    scanf("%d" , &d);
    scanf("%d" , &e);

    int i= 0;
    if(true){
        for (i = 0; i<=2; i++ ){
            printf("i:%d\n", i);
        }
    }
    int get_bigger = compare_five_numbers_return_big(a,b,c,d,e);

    printf("%d is bigger or equal to all other.\n",get_bigger);



    //getch();
    main();
    return 0;
}



