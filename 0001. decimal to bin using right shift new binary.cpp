#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// dec to bin using right shift


char * get_decimal_to_binary(int decimal){
    int     single_binary_bit = 0,
            index = 0;

    char *  binary = new char[32];


    while(decimal != 0){
         // only 1 & 1 returns 1
        single_binary_bit = decimal & 1;
        binary[index++] += single_binary_bit;
        decimal = decimal  / 2 ;
    }

    return binary;
}

void take_decimal_input(int &decimal){
    printf("input number in decimal(int):\n");
    scanf("%d" , &decimal);
}

void print_binary(int decimal, char * binary){
    if(decimal >= 0){

    }
    printf("\ndecimal: %d\n", decimal);
    printf("binary: %s\n", binary);
}

int main() {

    int decimal = 0;
    take_decimal_input(decimal);
    int binary = get_decimal_to_binary(decimal);

    print_binary(decimal, binary);
    decimal = decimal >> 1;
    printf("\nRight Shifted 1 time.");
    binary = get_decimal_to_binary(decimal);
    print_binary(decimal, binary);

    // main() it's a recursive function
    // and it is highly inefficient
    // so don't use it professionally.
    main();
    return 0;
}



