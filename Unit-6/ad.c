//C program to draw national flag of nepal using graphics.h
#include<conio.h>
#include<graphics.h>
int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    // Draw the first triangle
    int x1[] = {100, 200, 100};
    int y1[] = {100, 150, 200};
    fillpoly(3, x1, y1);
    // Draw the second triangle
    int x2[] = {100, 200, 100};
    int y2[] = {200, 250, 300};
    fillpoly(3, x2, y2);
    // Draw the moon
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    circle(150, 150, 30);
    // Draw the sun
    circle(150, 250, 30);
    getch();
    closegraph();
    return 0;
}