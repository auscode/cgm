//DRAWING ALGO OF LINE BY DDA
//BY HARSIT MISHRA
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int gdriver = DETECT,gmode,i;
	float x,y,dx,dy,steps;
	int x0,x1,y0,y1;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	setbkcolor(BLACK);
	x0 =30, y0 =50, x1=88, y1=67;
	dx=(float)(x1-x0);
	dy=(float)(y1-y0);
	if( dx >= dy)
		steps= dx;
	else
		steps=dy;
	dx=dx/steps;
	dy=dy/steps;
	x=x0; y=y0; i=0;
	while(i<= steps){
		putpixel(x,y,RED);
		x+=dx;
		y+=dy;
		i=i+1;
		delay(50);
	}
	getch();
	closegraph();
}