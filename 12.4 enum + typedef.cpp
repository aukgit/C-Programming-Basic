#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// enum

//enum rainbowcolors {
//    RED,        // 0
//    ORGA=5,     // 5
//    YELLOW=3,   // 3
//    GREEN,      // 4
//    BLUE=8,     // 8color
//    INDIGO=8,   // 8
//    VIOLET      // 9
//};
//
//typedef rainbowcolors newColor;

typedef enum rainbowcolors {
    RED,        // 0
    ORGA=5,   // 5
    YELLOW=3,   // 3
    GREEN,      // 4
    BLUE=8,     // 8
    INDIGO=8,   // 8
    VIOLET      // 9
} newColor;



int main() {
    // pure c
//    enum rainbowcnewRainBowolors trafficlights;

    // C++
    newColor color = GREEN;
    printf("%d\n" , color);
    getch();
    return 0;
}



