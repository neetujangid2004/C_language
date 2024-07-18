// Write a program for DDA line drawing algorithm.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	int x1,y1,x2,y2,dx,dy,steps,xinc,yinc,i,x,y;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("Enter values of x1 and y1 : ");
	scanf("%d%d",&x1,&y1);

	printf("Enter values of x2 and y2 : ");
	scanf("%d%d",&x2,&y2);

	dx = (x2-x1);
	dy = (y2-y1);

	if(abs(dx) >= abs(dy))
		steps = abs(dx);
	else
		steps = abs(dy);

	xinc = dx/steps;
	yinc = dy/steps;

	x = x1;
	y = y1;
	putpixel(x,y,4);

	for(i=0;i<steps;i++){
		x = x + xinc;
		y = y + yinc;
		putpixel(x,y,4);
	}
	getch();
	closegraph();
}