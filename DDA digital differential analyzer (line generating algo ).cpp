//we use this for color, design , animation etc ...
#include<graphics.h>
//#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
//#include<graphics.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int gd = DETECT,gm, i;
    initgraph(&gd, &gm, " ");

    float x, y,dx,dy,steps;
    int x0, x1, y0, y1;

    cout<<"Enter value of two Coordinates : "<<endl;
    cin>>x0>>y0>>x1>>y1;

   //del x and del y er value ber korsi ...
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    cout<<"slope is : "<<endl;
    cout<<dy/dx<<endl;
    if(dx>=dy)
    {
        steps = dx;
    }
    else
    {
        steps = dy;
    }
    
    dx = dx/steps;
    dy = dy/steps;

    //x,y represent the coordinate of first point ..
    x = x0;
    y = y0;
    i = 1;

    while(i<= steps)
    {
        putpixel(x, y, YELLOW);
        x += dx;
        y += dy;
        i=i+1;
    }


    getch();
    closegraph();
}
