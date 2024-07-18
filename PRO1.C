#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void drawGirl() {
	// Draw head
	circle(300, 100, 30); // center at (300,100) with radius 30

	// Draw eyes
	circle(290, 90, 5); // left eyes
	circle(310, 90, 5); // right eyes

	// Draw mouth
	arc(300, 110, 230, 310, 10); // smiling mouth

	// Draw body
	line(300, 130, 300, 250);   // body line

	// Draw arms
	line(300, 150, 250, 200);  // left arm
	line(300, 150, 350, 200);  // right arm

	// Draw legs
	line(300, 250, 250, 350);  // left leg
	line(300, 250, 350, 350);  // right leg

	// Draw skirt
	line(300, 200, 260, 250);
	line(300, 200, 340, 250);
	line(260, 250, 340, 250);
}

void drawGIRL(int x,int y){
	// draw head
	sercolor(WHITE);
	setfillstyle(SOLID_FILL, YELLOW);
	fillellipse(x, y, 30, 30);	// center at (x,y) with radius 30

	// draw eyes
	setfillstyle(SOLID_FILL, BLACK);
	fillellipse(x - 10, y - 10, 5, 5);	// left eye
	fillellipse(x + 10, y - 10, 5, 5);	// right eye

	// draw smaller mouth
	setcolor(RED);
	arc(x, y + 10, 230, 310, 10);

	// draw body
	setcolor(BLUE);
	line(x, y + 30, x, y + 150);

	// draw arms
	line(x, y + 50, x - 50, y + 100);
	line(x, y + 50, x + 50, y + 100);

	// draw legs
	line(x, y + 150, x - 50, y + 250);
	line(x, y + 150, x + 50, y + 250);

	// draw skirt
	setcolor(MAGENTA);
	line(x, y + 80,x - 40, y + 150);
	line(x,y + 80,x + 40, y + 150);
	line(x - 40,y + 150,x + 40,y + 150);
}

void drawBOY(int x,int y){
	// draw head
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	fillellipse(x, y, 30, 30);

	// draw eyes
	setfillstyle(SOLID_FILL, BLACK);
	fillellipse(x - 10,y - 10, 5, 5);
	fillellipse(x + 10,y - 10, 5, 5);

	// draw smaller mouth
	setcolor(RED);
	arc(x, y + 10, 230, 310, 10);

	// draw body
	setcolor(GREEN);
	line(x, y + 30, x, y + 150);

	// draw arms
	line(x, y + 50, x - 50, y + 100);
	line(x, y + 50, x + 50, y + 100);

	// draw legs
	line(x, y + 150, x - 50, y + 250);
	line(x, y + 150, x + 50, y + 250);

	// draw shorts
	setcolor(CYAN);
	line(x, y + 100, x - 40, y + 150);
	line(x, y + 100, x + 40, y + 150);
	line(x - 40, y + 150, x + 40, y + 150);
}

void main() {
	int girlX = 300, girlY = 100;
	int boyX = 400, boyY = 100;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

	//drawGirl();

	drawGIRL(girlX, girlY);
	drawBOY(boyX, boyY);

	delay(5000);	// wait for 5 second

	cleardevice();	// clear the screen
	girlX = 200;
	girlY = 200;
	boyX = 500;
	boyY = 200;

	drawGIRL(girlX, girlY);
	drawBOY(boyX, boyY);

	getch();
	closegraph();
}
