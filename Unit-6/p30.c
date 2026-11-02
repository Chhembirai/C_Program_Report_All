//C program to demonstrate use of graphics.h to draw concentric circles
#include<conio.h>
#include<graphics.h>
int main() {
    int gd=DETECT,gm;
    int x=300, y=200, r=50;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    for(int i=0;i<5;i++) {
        circle(x,y,r+i*20);
    }
    getch();
    closegraph();
    return 0;
}