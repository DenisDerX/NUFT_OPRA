#include <windows.h>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int X=700, a=200, b=60, t;
    char c1[20], c2[40]="V = (Pi * R^2 * H) / 3 = ", c3[5]="R=";
    initwindow(X,X);
    float V, R, H;
    t=a/10.0;
    H=t;
    R=20;
    V=((3.1415 * pow(R, 2) * H) / 3.0);
    setbkcolor(15);
    floodfill(1,1,7);
    setcolor(2);
    setlinestyle(3, 0, 1);
    ellipse(a+a/2, a+a/2, 90, 270, a/2, b/2);
    setlinestyle(3, 0, 1);
    ellipse(a+a/2, a+a/2, 0, 180, a/2, b/2);
    setlinestyle(0, 0, 3);
    ellipse(a+a/2, a+a/2, 180, 360, a/2, b/2);
    setlinestyle(3, 0, 1);
    line(a, a+a/2, a+a, a+a/2);
    setlinestyle(3, 0, 1);
    line(a+a/2, a, a+a/2, a+a/2);
    setlinestyle(0, 0, 3);
    line(a, a+a/2, a+a/2, a);
    line(a+a/2, a, a+a, a+a/2);
    settextstyle(1,0,2); 
    setcolor(0); 
    sprintf(c1,"%5.2f",R); 
    outtextxy(a+a/4,a+a+b/10,strcat(c3,c1));
    outtextxy(a+a+b+b/10,a+a/5,"H=");
    sprintf(c1,"%5.2f",t);
    outtextxy(a+a+b+b/10 + textwidth("H="),a+a/5,c1); 
    sprintf(c1,"%5.2f",V); 
    outtextxy(a,a-2*b,strcat(c2,c1)); 
    getch();
    closegraph();
    return 0;
} 
