#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 void matrixmultiply(int translate[3][3],int vertex[3][6],int result[3][6]);
  int main()
 {


   int i,j,k;
   int vertex[3][6]={{180,125,35,35,125,180},
                     {100,24,53,147,176,100},
                     {1  ,1  ,1  ,1  ,1,  1  }};


   int translate[3][3] ={{1,0,0},
                         {0,1,0},
                         {0,0,1  }};
   int result[3][6];
  /* initialize graphics and local variables */


    int gm=DETECT,gd;
    initgraph(&gm,&gd," ");

 for(i=0;i<5;i++)
{
    setcolor(YELLOW);

 line(vertex[0][i],vertex[1][i],vertex[0][i+1],vertex[1][i+1]);

 }

 printf("Press any key for the translated line.....\n");
 getch();

 matrixmultiply(translate,vertex,result);
    for(i=0;i<5;i++)
    {
    setcolor(GREEN);

    line(result[0][i],result[1][i],result[0][i+1],result[1][i+1]);

    }
 getch();
 closegraph();

 }

 void matrixmultiply(int translate[3][3],int vertex[3][6],int result[3][6])
 {
     for(int i=0;i<=3;i++)
        {
             for(int j=0;j<=6;j++)
                {
                    result[i][j]=0;
                    for(int k=0;k<=3;k++)
                        result[i][j]=result[i][j]+translate[i][k]*vertex[k][j];
                }

        }

}
