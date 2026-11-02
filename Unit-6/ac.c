//C program to draw a rectangle using graphics.h
#include<conio.h>
#include<graphics.h>
int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setcolor(BLACK);
    rectangle(100,100,300,200);
    getch();
    closegraph();
    return 0;
}