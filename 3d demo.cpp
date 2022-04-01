#include<conio.h>
#include<stdio.h>
#include <graphics.h>
#include<dos.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    int tx,ty,tz;
    int left, top, right, bottom;
    int depth;
    int topflag;
       left = 75; top = 125; right = 95; bottom = 175;depth = 20;topflag = 1;
    bar(left,top,right,bottom);
    // y axis line
    line(50, 50, 50, 400);

    // x axis line
    line(50, 400, 400, 400);
    delay(5000);
    tx=20;
    ty=20;
    tz=20;
        bar(left+tx,top+ty,right+tx,bottom+ty);
    getch();
    closegraph();
}
