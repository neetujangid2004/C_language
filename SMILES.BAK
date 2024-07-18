#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Function to draw a smiling face
void drawSmiley(int x, int y) {
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, 50, 50); // Face

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - 15, y - 15, 5, 5); // Left Eye
    fillellipse(x + 15, y - 15, 5, 5); // Right Eye

    arc(x, y + 10, 200, 340, 20); // Smile
}

// Function to draw a frowning face
void drawFrown(int x, int y) {
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, 50, 50); // Face

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - 15, y - 15, 5, 5); // Left Eye
    fillellipse(x + 15, y - 15, 5, 5); // Right Eye

    arc(x, y + 30, 20, 160, 20); // Frown
}

// Function to draw a surprised face
void drawSurprised(int x, int y) {
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, 50, 50); // Face

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - 15, y - 15, 5, 5); // Left Eye
    fillellipse(x + 15, y - 15, 5, 5); // Right Eye

    ellipse(x, y + 20, 0, 360, 10, 15); // Surprised mouth
}

// Function to draw a winking face
void drawWink(int x, int y) {
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, 50, 50); // Face

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x + 15, y - 15, 5, 5); // Right Eye

    // Draw left wink eye
    line(x - 20, y - 15, x - 10, y - 15);
    
    arc(x, y + 10, 200, 340, 20); // Smile
}

// Function to draw a laughing face
void drawLaughing(int x, int y) {
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, 50, 50); // Face

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - 15, y - 15, 5, 5); // Left Eye
    fillellipse(x + 15, y - 15, 5, 5); // Right Eye

    ellipse(x, y + 20, 0, 360, 15, 10); // Laughing mouth
    line(x - 10, y + 20, x + 10, y + 20); // Laughing teeth
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Set the background color to light blue
    setbkcolor(LIGHTBLUE);
    cleardevice();

    int max_x = getmaxx();
    int max_y = getmaxy();
    int x = max_x / 2;
    int y = max_y / 2;

    int counter = 0;

    while (!kbhit()) {
        cleardevice();

        switch (counter % 5) {
            case 0:
                drawSmiley(x, y);
                break;
            case 1:
                drawFrown(x, y);
                break;
            case 2:
                drawSurprised(x, y);
                break;
            case 3:
                drawWink(x, y);
                break;
            case 4:
                drawLaughing(x, y);
                break;
        }

        delay(1000); // Delay to control speed

        counter++;
    }

    closegraph();
    return 0;
}
