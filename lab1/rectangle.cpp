// triangle.cpp
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    
    int left = 150;
    int top = 150;
    int right = 450;
    int bottom = 350;

    rectangle(left, top, right, bottom);

    
    getch();
    closegraph();
    return 0;
}
