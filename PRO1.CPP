#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void drawStar(int x,int y){
	int star[20] = {x, y-10, x+4, y-4, x+10, y-4, x+6, y+2, x+8, y+8, x, y+4, x-8, y+8, x-6, y+2, x-10, y-4, x-4, y-4};
	setfillstyle(SOLID_FILL, WHITE);
	fillpoly(10, star);
}

void drawStars(){
	int i;
	for(i=0;i<6;i++){
		drawStar(100 + i*100, 50);
	}
}

void drawGIRL(int x,int y){
	int i;

	// draw head
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	fillellipse(x, y, 30, 30);

	// draw hair
	setfillstyle(SOLID_FILL, BLACK);
	fillellipse(x+37, y-10, 8, 5);
	fillellipse(x+33, y-20, 8, 5);
	fillellipse(x+23, y-30, 8, 5);

	// draw eyes
	setfillstyle(SOLID_FILL, BLACK);
	fillellipse(x - 10,y - 10, 5, 5);
	fillellipse(x + 10,y - 10, 5, 5);

	// draw smaller mouth
	setcolor(BLACK);
	arc(x, y + 10, 230, 310, 10);

	// draw arms
	setcolor(WHITE);
	for(i = 1; i<=3 ; i++){
		line(x, y + 50, x - 50, y + 100);
		y++;
	}
	for(i = 1; i<=3 ; i++){
		line(x, y + 50, x + 50, y + 100);
		y--;
	}

	// draw legs
	for(i = 8; i<=10 ; i++){
		line(x + i,y + 180, x + i, y + 250);
	}
	for(i = -10; i<=-8 ; i++){
		line(x + i,y + 180, x + i, y + 250);
	}

	// draw shorts
	setcolor(CYAN);
	for(i = -40;i <= 40; i = i + 2){
		line(x, y + 100, x + i, y + 190);
	}
	line(x - 41, y + 190, x + 41, y + 190);

	// draw body
	setcolor(BLUE);
	for(i = -10; i <= 10 ; i++){
		line(x + i, y + 50, x + i, y + 120);
	}
	setcolor(WHITE);
	for(i = -1; i<=1 ; i++){
		line(x + i, y + 30, x + i, y + 50);
	}
}

void main() {
	int gX1 = 300, gY1 = 200;
	int gX2 = 400, gY2 = 200;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

	drawStars();
	drawGIRL(gX1, gY1);
	drawGIRL(gX2, gY2);

	getch();
	closegraph();
}
