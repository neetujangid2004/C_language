#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main(){
	int x=50, y=200, radius=30;
	int dx = 10;
	int dy = 5;
	//int direction

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	setbkcolor(WHITE);

	while(!kbhit()){
		cleardevice();
		setcolor(BLUE);

		circle(x, y, radius);
		setfillstyle(SOLID_FILL,RED);
		floodfill(x, y, BLUE);

		delay(80);
		x = x + dx;
		y = y + dy;
		if(x > getmaxx() - radius || x < radius){
			dx = -dx;
		}
		if(y > getmaxx() - radius || y < radius){
			dy = -dy;
		}
		// x = x + 10 * direction;
		// if(x > getmaxx() - radius || x < radius){
		//	direction = -direction;
		//}
	}

	getch();
	closegraph();
	return 0;
}