#include<stdio.h>
#include<math.h>
// Alim Ul Karim
// size of test


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
    printf("input number in decimal(int):");
    scanf("%d" , &decimal);
}
void take_char_input(char &c){
    printf("input a single character :");
    scanf(" %c" , &c);
}

void print_binary(char * operation, int decimal, int binary){
    printf("\noperation executed: %s\n", operation);
    printf("decimal: %d\n", decimal);
    printf("binary: %d\n", binary);
}

void get_max_min_range(int size_bytes){
    double bits = (size_bytes * 8) - 1;
    double max_size = pow(2.0, bits);
    double min_size = max_size * -1;
    max_size--;
    printf("%d byte(s) %.lf bits max(%.lf) min(%.lf)\n"
           ,size_bytes
           ,++bits
           ,max_size
           ,min_size );
}

int main() {
    //printf("input decimal as iget_max_min_rangent to get binary:\n");
//    char charInput;
//    take_char_input(charInput);get_max_min_range(sizeof(char));
//
//    int decimal = (int)charInput;
//
//    int binary = get_decimal_to_binary(decimal);
//    print_binary("binary value of char",decimal, binary);
    int x;
    printf("(char) size of : %d byte(s)\n" , sizeof(char));
    printf("(int) size of : %d byte(s)\n" , sizeof(int));
    printf("(int x) size of : %d byte(s)\n" , sizeof(x));
    get_max_min_range(sizeof(int));
    get_max_min_range(sizeof(char));
    get_max_min_range(1);
    // main() it's a recursive function
    // and it is highly inefficient
    // so don't use it professionally.
//    main();
    getchar();
    return 0;
}
