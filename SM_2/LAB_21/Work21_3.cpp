#include <graphics.h>
#include <iostream>
#include <math.h>
#include <sstream>
using namespace std;

int main()
{
    int g = DETECT, gmode = 2;
    initgraph(&g, &gmode, "");

    int centerX = 320;
    int centerY = 240;
    int radiusBig = 100;
    int radiusSmall = 20;
    int angle = 0;

    while (!kbhit())
    {
        delay(25);
        cleardevice();
    
        setcolor(02); 
        setfillstyle(1, 02); 
        fillellipse(centerX, centerY, radiusBig, radiusBig);
        int x = centerX + (radiusBig + radiusSmall + radiusSmall ) * cos(angle * M_PI / 180);
        int y = centerY + (radiusBig + radiusSmall + radiusSmall) * sin(angle * M_PI / 180); 
        setcolor(11); 
        setfillstyle(1, 11);
        fillellipse(300, 250, 15, 15);
        fillellipse(310, 260, 15, 15);
        fillellipse(315, 250, 15, 15);
        fillellipse(290, 260, 15, 15);
        fillellipse(290, 200, 15, 15);
        fillellipse(290, 210, 15, 15);
        fillellipse(390, 200, 15, 15);
        fillellipse(390, 210, 15, 15);
        fillellipse(360, 250, 15, 15);
        fillellipse(360, 260, 15, 15);
        fillellipse(320, 305, 15, 15);
        fillellipse(325, 310, 15, 15);
        setcolor(07);
        setfillstyle(1, 07); 
        fillellipse(x, y, radiusSmall, radiusSmall);
        setcolor(14); 
        setfillstyle(1, 14); 
        fillellipse(150, 100, 5, 5);
        fillellipse(200, 130, 5, 5);
        fillellipse(480, 300, 5, 5);
        fillellipse(600, 350, 5, 5);
        fillellipse(210, 250, 5, 5);
        angle += 1;
        if (angle >= 360)
            angle = 0;
    }
    closegraph();
    return 0;
}

