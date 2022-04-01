#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int bresenham(int x,int y,int h,int k);
int main()
{
    int gm=DETECT,gd;
    initgraph(&gm,&gd," ");
    int r,h,k,d,x,y;
    printf("Center:");
    scanf("%d%d",&h,&k);
    printf("Radius:");
    scanf("%d",&r);
    d=3-(2*r);
    x=0;
    y=r;
    bresenham(x,y,h,k);
    while(x<=y)
    {
        if(d<0)
        {
            d=d+(4*x)+6;
        }
        else{
            d=d+(4*(x-y))+10;
            y=y-1;
        }
         x++;
        bresenham(x,y,h,k);

    }

getch();
closegraph();

}
int bresenham(int x, int y,int h,int k)
{
putpixel(x+h,y+k,RED);
putpixel(x+h,-y+k,GREEN);
putpixel(-x+h,y+k,WHITE);
putpixel(-x+h,-y+k,YELLOW);
putpixel(y+h,x+k,RED);
putpixel(-y+h,x+k,RED);
putpixel(y+h,-x+k,RED);
putpixel(-y+h,x+k,RED);
putpixel(-y+h,-x+k,RED);

}
