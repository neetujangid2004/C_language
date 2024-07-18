#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main(){
	// request auto detection
	int gdriver = DETECT,gmode,errorcode;
	int midx, midy;
	int radius = 100;
	int gd = DETECT, gm;

	// initialize graphics and local variable
	initgraph(&gdriver, &gmode, "C:\\turboc3\\bgi");
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");

	//line(150,130,230,200);
	//line(150,130,250,170);
	//line(450,370,430,190);
	//line(430,400,430,190);
	//line(450,450,450,350);
	//line(250,450,450,350);

	arc(310,270,180,350,30);              // smile
	arc(310,275,179,353,30);
	rectangle(90,90,550,450);             // box

	// read result of initialization
	errorcode = graphresult();
	if(errorcode != grOk) // an error occurred
	{
		printf("Graphics error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1); //terminate with an error code
	}
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;
	setcolor(getmaxcolor());

	// draw the circle
	circle(midx, midy, radius);    // face
	circle(350,205,10);    // eye 1
	circle(290,205,10);    // eye 2

	setfillstyle(1,BLUE);         // box color
	floodfill(150,150,WHITE);
	setfillstyle(1,YELLOW);   // face color
	floodfill(midx,midy,WHITE);

	// clean up
	getch();
	closegraph();
	return 0;
}