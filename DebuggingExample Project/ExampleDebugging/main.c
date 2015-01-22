#include <stdio.h>


int add(int a, int b){
    return a+b;
}
int main()
{

    int x = 5,y =9;
    x = add(x,y);
    printf("x:%d\n", x);
    getchar();
    return 0;
}
