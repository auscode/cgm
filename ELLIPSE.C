//DRAWING OF DYNAMIC ELLIPSE
//BY HARSIT MISHRA
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
void main()
{
long int d1,d2,rx,ry,xsq,yxq,fx,fy,dx,dy;
int i,gdriver=DETECT,gmode,x,y;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

printf("Enter the x Radius of the ellipse ");
scanf("%ld",&rx);
printf("Enter the y Radius of the ellipse ");
scanf("%ld",&ry);

xsq=rx*rx;
yxq=ry*ry;
fx=2*xsq;
fy=2*yxq;
x=0;
y=ry;
d1=yxq - (xsq * ry) + (0.25 * xsq);
dx= fy * x;
dy= fx * y;
do
{
  putpixel(200+x,200+y,15);
  putpixel(200-x,200-y,15);
  putpixel(200+x,200-y,15);
  putpixel(200-x,200+y,15);
  if (d1 < 0)
   {
    x=x+1;
    y=y;
     dx=dx + fy;
     d1=d1 + dx + yxq;
     }
   else
   {
    x=x+1;
    y=y-1;
    dx= dx + fy;
    dy= dy - fx;
    d1= d1 + dx - dy + yxq;
    }
    delay(50);
    }while (dx < dy);
   d2 = yxq * ( x + 0.5) * ( x + 0.5 ) + xsq * (y - 1) * (y-1) - xsq * yxq;
    do
    {
  putpixel(200+x,200+y,15);
  putpixel(200-x,200-y,15);
  putpixel(200+x,200-y,15);
  putpixel(200-x,200+y,15);

  if (d2 >0)
  {
  x=x;
  y=y-1;
  dy = dy - fx;
  d2 = d2 - dy + xsq;
  }
  else
  {
  x= x+1;
  y=y-1;
  dy=dy - fx;
  dx= dx + fy;
  d2 = d2 + dx -dy + xsq;
  }
  delay(20);
} while ( y> 0);
getch();
closegraph();
}