//we use this for color, design , animation etc ...
//draw rectangle , triangle , circle , line ...
#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

   int gd=DETECT,gm;
   initgraph(&gd,&gm,"Lab1");

   //rectangle
   rectangle(100,150,200,250);

  //triangle
   line(50,100,100,100);
   line(100,100,100,50);
   line(50,100,100,50);
   //circle
   circle(300,300,100);

    //line
    line(400,50,450,50);

   getch();
   closegraph();
   return 0;
}
