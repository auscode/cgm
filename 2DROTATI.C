//DRAWING OF THE ROTATION OF THE LINE AT ANGLE
//BY HARSIT MISHRA
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
	int gdriver=DETECT,gmode,errorcode;
	int i;
	int x2,y2,x1,y1,x,y,xn,yn;
	double r11,r12,r21,r22,th;
	clrscr();
	printf("Enter the 2 line end points:");
	printf("x1,y1,x2,y2");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	line(x1,y1,x2,y2);
	printf("\n\n\n[ Enter the angle");
	scanf("%lf",&th);
	r11=cos((th*3.1428)/180);
	r12=sin((th*3.1428)/180);
	r21=(-sin((th*3.1428)/180));
	r22=cos((th*3.1428)/180);
	printf("%lf  %lf  %lf  %lf",r11,r12,r21,r22);
	xn=((x2*r11)-(y2*r12));
	yn=((x2*r12)+(y2*r11));
	line(x1,y1,xn,yn);
	getch();
	closegraph();
}