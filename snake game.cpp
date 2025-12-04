#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // For getch() and kbhit()
#include <windows.h> // For Sleep() and gotoxy()

#define HEIGHT 20
#define WIDTH 40

int gameover;
int x, y, fruitx, fruity, score;
int snakeTailX[100], snakeTailY[100];
int snakeTailLen;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setup() {
    gameover = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitx = rand() % WIDTH;
    fruity = rand() % HEIGHT;
    score = 0;
    snakeTailLen = 0;
}

void draw() {
    system("cls"); // Clear console

    // Draw borders
    for (int i = 0; i < WIDTH + 2; i++) printf("-");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {
            if (j == 0 || j == WIDTH) printf("#");
            else if (i == y && j == x) printf("O"); // Snake head
            else if (i == fruity && j == fruitx) printf("*"); // Fruit
            else {
                int printTail = 0;
                for (int k = 0; k < snakeTailLen; k++) {
                    if (snakeTailX[k] == j && snakeTailY[k] == i) {
                        printf("o"); // Snake tail
                        printTail = 1;
                    }
                }
                if (!printTail) printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) printf("-");
    printf("\n");
    printf("Score: %d\n", score);
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameover = 1; break;
        }
    }
}

void logic() {
    int prevX = snakeTailX[0];
    int prevY = snakeTailY[0];
    int prev2X, prev2Y;
    snakeTailX[0] = x;
    snakeTailY[0] = y;

    for (int i = 1; i < snakeTailLen; i++) {
        prev2X = snakeTailX[i];
        prev2Y = snakeTailY[i];
        snakeTailX[i] = prevX;
        snakeTailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
        default: break;
    }

    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) gameover = 1;

    for (int i = 0; i < snakeTailLen; i++) {
        if (snakeTailX[i] == x && snakeTailY[i] == y) gameover = 1;
    }

    if (x == fruitx && y == fruity) {
        score += 10;
        fruitx = rand() % WIDTH;
        fruity = rand() % HEIGHT;
        snakeTailLen++;
    }
}

int main() {
    setup();
    while (!gameover) {
        draw();
        input();
        logic();
        Sleep(100); // Adjust for game speed
    }
    printf("Game Over! Final Score: %d\n", score);
    return 0;
}
 
