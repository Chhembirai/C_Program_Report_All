//C program to demonstrate use of graphics.h of ellipse function
#include<conio.h>
#include<graphics.h>
int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    ellipse(200,200,0,360,100,50);
    getch();
    closegraph();
    return 0;
}