#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int gm=DETECT,gd;
    initgraph(&gm,&gd," ");
int x1,y1,x2,y2,dx,dy,k,xinc,yinc,i,x,y;
printf("Enter the starting point\n");
scanf("%d%d",&x1,&y1);
printf("Enter the ending point\n");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
    {
        k=dx;
    }
    else
    {
         k=dy;
    }

xinc=dx/k;
yinc=dy/k;
x=x1;y=y1;
for(i=0;i<k;i++)
{
    putpixel(round(x),round(y),RED);
 x=x+xinc;
 y=y+yinc;
}
getch();

}
