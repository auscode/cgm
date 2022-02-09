//DRAWING CIRCLE BY BRESENHAM ALGORITHM	
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void drawCircle(int xc, int yc, int x,int y){
	putpixel(x+xc,y+yc,RED);
	putpixel(x+xc,-y+yc,YELLOW);
	putpixel(-x+xc,-y+yc,GREEN);
	putpixel(-x+xc,y+yc,BLUE);
	putpixel(y+xc,x+yc,WHITE);
	putpixel(y+xc,-x+yc,BLUE);
	putpixel(-y+xc,-x+yc,GREEN);
	putpixel(-y+xc,x+yc,YELLOW);
}
void circleBres(int xc, int yc,int r){
	int x=0,y=r;
	int d=3-2*r;
	drawCircle(xc,yc,x,y);
	while(y>=x){
		x++;
		if (d>0){
			y--;
			d=d+4*(x-y)+10;
		}else{
			d=d+4*x+6;
			drawCircle(xc,yc,x,y);
			delay(50);
		}
	}
}
int main(){
	int xc = 250, yc=250,r =50;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	circleBres(xc,yc,r);
	return 0;
}