#include<stdio.h>
#include<conio.h>

// Alim Ul Karim
// enum

enum rainbowcolors {
    RED,        // 0
    ORGA=5,     // 5
    YELLOW=3,   // 3
    GREEN,      // 4
    BLUE=8,     // 8
    INDIGO=8,   // 8
    VIOLET      // 9
};


int main() {
    // pure c
    enum rainbowcolors colors = BLUE;
    if(colors == BLUE) {
        printf("yes blue found : %d\n" , colors);
    }
    // C++
//    rainbowcolors trafficlights = green;

    getch();
    return 0;
}



