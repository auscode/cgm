//DRAWING CIRCLE N MID POINT ALGORITHM
//BY HARSIT MISHRA
#include<stdio.h>
#include<graphics.h>
void main(){
	int x,y,xmid,ymid,radius,p;
	int gmode,gdriver=DETECT;
	clrscr();
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	printf("MID POINT CIRCLE DRAWING ALGORITH \n");
	printf("ENTER THE COORDINATES ");
	scanf("%d%d",&xmid,&ymid);
	printf("\n ENTER THE RADIUS\n");
	scanf("%d",&radius);
	x=0;
	y = radius;
	p= 1-radius;
	do{
		putpixel(xmid+x,ymid+y,RED);
		putpixel(xmid+x,ymid-y,RED);
		putpixel(xmid-x,ymid-y,RED);
		putpixel(xmid-x,ymid+y,RED);
		putpixel(xmid+y,ymid+x,RED);
		putpixel(xmid+y,ymid-x,RED);
		putpixel(xmid-y,ymid-x,RED);
		putpixel(xmid-y,ymid+x,RED);

		if (p<0){
			p+=(2*x)+1;
		}
		else{
			y--;
			p+=(2*x)-(2*y)+1;
		}
		x++;
	}while(y>x);

	getch();
}