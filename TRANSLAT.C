//CHANGING THE PLACE OR LOCATION OF THE LINE
//BY HARSIT MISHRA
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
int gdriver=DETECT,gmode,errorcode;
int i;
int x2,y2,x1,y1,x,y;
clrscr();
printf("Enter the 2 line end points:");
printf("x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
line(x1,y1,x2,y2);
printf("Enter translation co-ordinates ");
printf("x,y");
scanf("%d%d",&x,&y);
x1=x1+x;
y1=y1+y;
x2=x2+x;
y2=y2+y;
printf("Line after translation");
line(x1,y1,x2,y2);
getch();
closegraph();
}