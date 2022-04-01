#include<conio.h>
#include<stdio.h>
#include<graphics.h>
int main()
{
int gd,gm=DETECT;
initgraph(&gd,&gm," ");
putpixel(1,2,15);
getch();
closegraph();
}
