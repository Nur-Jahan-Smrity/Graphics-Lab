//we use this for color, design , animation etc ...
//2 coordinates are given ..you have to find its slope and value of c ..then show that it prints a straight line by joining all the points present in these range ..
#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
//graphics driver gd ... graphics mode gm ..
//graphics run .. environment create kore graphics mode e ni ashe .. detect kore..
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"Lab1");


    int x1,y1,x2,y2,i,j;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cout<<"slope : "<<(y2-y1)/(x2-x1)<<endl;
    cout<<"value of c : "<<y1-((y2-y1)/(x2-x1))*x1;

    if(((y2-y1)/(x2-x1))<=1)
    {
        for(i=x1+1; i<=x2; i++)
        {
            int c=0;
            c=((y2-y1)/(x2-x1))*i+(y1-((y2-y1)/(x2-x1))*x1);
            putpixel(i,c,YELLOW);
        }
    }
    if(((y2-y1)/(x2-x1))>1)
    {
        for(i=y1+1; i<=y2; i++)
        {
            int c=0;
            c=(i-(y1-((y2-y1)/(x2-x1))*x1))/((y2-y1)/(x2-x1));
            putpixel(i,c,YELLOW);
        }
    }
    getch();
    closegraph();
    return 0;
}
