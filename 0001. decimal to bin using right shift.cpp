#include<stdio.h>

// Alim Ul Karim
// dec to bin using right shift


int get_decimal_to_binary(int decimal){
    int binary = 0,
        single_binary_bit = 0,
        decimal_place = 1;
    // let's assume your decimal is 12
    // 8 4 2 1
    // 1 1 0 0

    // use and gate
    // 1 1 0 0
    // 0 0 0 1
    // ------- (AND) 1 & 1 =only returns 1
    // 0 0 0 0
    // only gives 0 or 1 as a result.
    // then right shift again decimal >> 1
    // so now the number is
    // 0 1 1 0
    // 0 0 0 1
    // ------- (AND)
    // 0 0 0 0 (only 0)
    // right shift and so on
    while(decimal){
        single_binary_bit = decimal & 1; // only 1 & 1 returns 1
        binary += decimal_place * single_binary_bit;
        decimal = decimal / 2;
        decimal_place *= 10;
    }

    return binary;
}

void take_decimal_input(int &decimal){
    printf("input number in decimal(int):\n");
    scanf("%d" , &decimal);
}

void print_binary(char * operation, int decimal, int binary){
    printf("\noperation executed: %s\n", operation);
    printf("decimal: %d\n", decimal);
    printf("binary: %d\n", binary);
}

int main() {
    //printf("input decimal as int to get binary:\n");
    int decimal = 0;
    take_decimal_input(decimal);
    decimal = ~decimal;

    int binary = get_decimal_to_binary(decimal);
    print_binary("~inverted test",decimal, binary);


    // main() it's a recursive function
    // and it is highly inefficient
    // so don't use it professionally.
    main();
    return 0;
}
