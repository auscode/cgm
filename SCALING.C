//Implementing the scaling of line 
//BY HARSIT MISHRA
#include<graphics.h>
#include<stdio.h>
void main()
{
int gdriver=DETECT,gmode,errorcode;
int i;
int x2,y2,x1,y1,x,y;
clrscr();
printf("Enter the 2 line end points: \n");
printf("x1,y1,x2,y2 \n");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
line(x1,y1,x2,y2);
printf("Enter scaling co-ordinates \n ");
printf("x,y \n");
scanf("%d%d",&x,&y);
x1=(x1*x);
y1=(y1*y);
x2=(x2*x);
y2=(y2*y);
printf("Line after scaling \n");
line(x1,y1,x2,y2);
getch();
closegraph();
}