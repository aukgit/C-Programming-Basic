#include<stdio.h>
#include<math.h>
// Alim Ul Karim
// shifting


int get_decimal_to_binary(int decimal){
    int binary = 0,
        single_binary_bit = 0,
        decimal_place = 1;

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
    double max_size = pow(2.0, bits); // 2^bits
    double min_size = max_size * -1;
    max_size--;
    printf("%d byte(s) %.lf bits max(%.lf) min(%.lf)\n"
           ,size_bytes
           ,++bits
           ,max_size
           ,min_size );
}

int main() {

    int decimal = 0;
    int temp;
    take_decimal_input(temp);
    int binary = get_decimal_to_binary(temp);

    print_binary("inputed number",temp, binary);
    decimal = temp << 1;

    binary = get_decimal_to_binary(decimal);
    print_binary("shifting left 1",decimal, binary);
    decimal = temp << 2;
    binary = get_decimal_to_binary(decimal);
    print_binary("shifting left 2",decimal, binary);

    // main() it's a recursive function
    // and it is highly inefficient
    // so don't use it professionally.
    main();

    return 0;
}
