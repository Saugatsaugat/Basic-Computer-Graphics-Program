#include<graphics.h>
#include<stdio.h>
#include<conio.h>

 void ellipse(int h,int k,int a,int b);

int main()
{
/* request auto detection */
int gdriver = DETECT, gmode;
int h,k,a,b;
   printf("Enter (h,k)");
   scanf("%d%d",&h,&k);
   printf("Enter (a,b)");
   scanf("%d%d",&a,&b);

/* initialize graphics and local variables */
initgraph(&gdriver, &gmode, "");

ellipse(h,k,a,b);
getch();
closegraph();
}




 void ellipse(int h,int k,int a,int b)
 {

   int x, y, p;
    x=0;
   y=b;
   p=(b*b)-(a*a*b)+((a*a)/4);

   while((2*x*b*b)<(2*y*a*a))
   {
        putpixel(h+x,k-y,15);
        putpixel(h-x,k+y,15);
        putpixel(h+x,k+y,15);
        putpixel(h-x,k-y,15);

        if(p<0)
        {
     x=x+1;
     p=p+b*b*(2*x+1);
        }
        else
        {
     x=x+1;
     y=y-1;
     p=p+b*b*(2*x+1)-(a*a*2*y);
        }
   }
   p=((float)x+0.5)*((float)x+0.5)*b*b+(y-1)*(y-1)*a*a-a*a*b*b;

         while(y>=0)
   {
        putpixel(h+x,k-y,15);
        putpixel(h-x,k+y,15);
        putpixel(h+x,k+y,15);
        putpixel(h-x,k-y,15);

        if(p>0)
        {
     y=y-1;
     p=p-a*a*(2*y-1);

        }
        else
        {
     y=y-1;
     x=x+1;
    p=p-a*a*(2*y-1)+b*b*2*x;
        }
   }
   getch();
   closegraph();
 }




