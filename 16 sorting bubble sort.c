#include<stdio.h>

// Alim Ul Karim
// swapping
// nesting loops behaviour
// reversing
// sorting
void print_array(int numbers[], int size){
    int i = 0;
    printf("\narray: \n");
    for (i = 0; i <size ; i++ ){
        printf("%d ", numbers[i]);
        //2 3 5
    }
    printf("\n");
}

void swapping(int num[], int index1, int index2){
    int temp = num[index1];
    num[index1] = num[index2];
    num[index2] = temp;
}

void bubble_sort(int num[], int size){
    int i = 1 , outterBoundary;
    for (outterBoundary = size - 1; outterBoundary >= 1 ; outterBoundary-- ){
        //6
        //5
        //4
        for (i = 1; i <= outterBoundary; i++ ){
           if(num[i-1] > num[i]){
                swapping(num,i-1,i);
           }
        }
    }



}

int main() {
    //int x = 5 , y = 9;
    // 7
    // 3.5
    //               0 1 2 3  4 5 6  mid
    int numbers[] = {1,4,5,-1,6,7,10};
    //                             7


    int count = sizeof(numbers) / sizeof(numbers[0]);
    printf("count:%d", count);
    print_array(numbers, count);
    bubble_sort(numbers, count);
    print_array(numbers, count);
    getchar();
    return 0;
}



