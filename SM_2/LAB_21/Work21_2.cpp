#include <windows.h>
#include <iostream>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
const int w = 800;
const int h = 800;
int newx(float x, float x1, float x2, int xg1, int xg2)
{
    return xg1 + (int)((x - x1) * (xg2 - xg1) / (x2 - x1));
}
int newy(float y, float y1, float y2, int yg1, int yg2)
{
    return yg2 + (int)((y - y1) * (yg1 - yg2) / (y2 - y1));
}
float func(float x)
{
    return 1.0 / (2 + cos(x));
}

int main()
{
    char tx[3] = "X";
    char ty[3] = "Y";
    char t0[3] = "0";
    char ttab[30] = "| X | Y |";
    char tfc[30] = "y = 1 / (2 + cos(x))";
    char c_g[3];
    char tabl[15];
    double x, y;
    int w1, w2, wo, sw, wt, i, h1, h2, ho, sh, ht;
    wo = 100 / 2;
    w1 = wo;
    w2 = w - wo;
    sw = (w2 - w1) / 20;
    ho = 100 / 2;
    h1 = ho;
    h2 = h - ho;
    sh = (h2 - h1) / 20;
    initwindow(w, h);
    setbkcolor(15);
    floodfill(1, 1, 7);
    setcolor(0);
    settextstyle(1, 0, 1);
    moveto(w / 2, 2);
    linerel(0, h - 15);
    moveto(w / 2, 2);
    linerel(-10, +15);
    moveto(w / 2, 2);
    linerel(+10, +15);
    moveto(2, h / 2);
    linerel(w - 15, 0);
    moveto(w - 15, h / 2);
    linerel(-15, -10);
    moveto(w - 15, h / 2);
    linerel(-15, +10);
    outtextxy(w - 15 - 15, h / 2 - 30, tx);
    outtextxy(w / 2 + 5, h / 2 + 10, t0);
    for (i = -10; i <= 10; i++)
    {
        moveto(w1 + (i + 10) * sw, h / 2 - 10);
        linerel(0, +20);
        if (i != 0 && abs(i) % 2 == 0)
        {
            sprintf(c_g, "%3d", i);
            outtextxy(w1 + (i + 10) * sw - 30, h / 2 + 10, c_g);
        }
    }
    for (i = -10; i <= 10; i++)
    {
        moveto(w / 2 - 10, h1 + (i + 10) * sh);
        linerel(+20, 0);
        if (i != 0 && abs(i) % 2 == 0)
        {
            sprintf(c_g, "%3d", i);
            outtextxy(w / 2 + 10, h1 + (i + 10) * sh - 30, c_g);
        }
    }
    setcolor(12);
    int xs = -10;
    int xe = 10;
    int ys = -10;
    int ye = 10;
    int xk = w / 2;
    int yk = h / 2;
    int xk0;
    int yk0;
    float t;
    y = func(xs);
    xk = newx(xs, xs, xe, w1, w2);
    yk = newy(y, ys, ye, h1, h2);
    moveto(xk, yk);
    xk0 = xk;
    yk0 = yk;
    for (t = -10; t <= 10; t = t + 0.5)
    {
        y = func(t);
        xk = newx(t, xs, xe, w1, w2);
        yk = newy(y, ys, ye, h1, h2);
        line(xk0, yk0, xk, yk);
        xk0 = xk;
        yk0 = yk;
    }
    setcolor(2);
    settextstyle(0, 0, 1);
    ht = ho;
    wt = w1 + 50;
    outtextxy(wt + 10, ht - 10, tfc);
    outtextxy(wt, ht, ttab);
    i = 1;
    for (t = -10; t <= 10; t++, i++)
    {
        y = func(t);
        sprintf(tabl, "| %6.2f ", t);
        outtextxy(wt, ht + (i * 10), tabl);
        sprintf(tabl, "| %6.2f ", y);
        outtextxy(wt + 80, ht + (i * 10), tabl);
        sprintf(tabl, "|");
        outtextxy(wt + 160, ht + (i * 10), tabl);
    }
    getch();
    closegraph();
}

