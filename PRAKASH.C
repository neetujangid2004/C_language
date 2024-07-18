#include<graphics.h>
#include<conio.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	settextstyle(DEFAULT_FONT, HORIZ_DIR, 15);
	outtextxy(40, 100, "P");
	setfillstyle(1,BLUE);

	settextstyle(DEFAULT_FONT, HORIZ_DIR, 8);
	outtextxy(100, 150, "rakash");

	getch();
	closegraph();
	return 0;
}