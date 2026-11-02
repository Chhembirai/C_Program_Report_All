//C program to draw a hexagon using graphics.h
#include<conio.h>
#include<graphics.h>
int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    int x[] = {200, 250, 300, 300, 250, 200};
    int y[] = {100, 100, 150, 200, 250, 200};
    fillpoly(6, x, y);
    getch();
    closegraph();
    return 0;
}