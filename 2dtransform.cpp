#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include<math.h>
#define NOV 4
void drawpolygon(int VT[NOV][2], int color);
void origin(int VT[NOV][2],int IT[NOV][2],float angle);
int main()
{

    int gd=DETECT,gm;

    int VT[NOV][2],IT[NOV][2],i;
    float angle;
    printf("please enter x & y co-ordinates \n");
    for(i=0;i<NOV;i++)
    {

        printf("x%d=",i);
        scanf("%d",&VT[i][0]);
        printf("y%d=",i);
        scanf("%d",&VT[i][1]);

    }
   printf("enter angle\n");
   scanf("%f",&angle);
    initgraph(&gd,&gm,"");
    drawpolygon(VT,15);
    getch();
    origin(VT,IT,angle);
    drawpolygon(IT,2);

    getch();
    closegraph();
    return 0;
}
void drawpolygon(int VT[NOV][2], int color)
{

    int i;
    for(i=0;i<(NOV-1);i++)
    {
        setcolor(color);
        line(VT[i][0],VT[i][1],VT[i+1][0],VT[i+1][1]);
    }
    setcolor(color);
    line(VT[i][0],VT[i][1],VT[0][0],VT[0][1]);
    }
    void origin(int VT[NOV][2],int IT[NOV][2] ,float angle)
    {

        int i;
        for(i=0;i<NOV;i++)
        {
           float t=angle*(1.34/180);
            IT[i][0]=(VT[i][0]*cos(t))-(VT[i][1]*sin(t));
            IT[i][1]=(VT[i][0]*sin(t))+(VT[i][1]*cos(t));
        }

    }
