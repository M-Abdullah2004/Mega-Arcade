#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 20

void hideCursor() {
    CONSOLE_CURSOR_INFO cursor_info = { 100, 0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void setConsoleColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void snakeGame() {
    int restart = 0;
    while (restart == 0) {
        int x, y, fruitX, fruitY, score, gameOver, i, j, k;
        int tailX[100], tailY[100];
        int nTail = 0;
        char direction;
        // Initial position
        x = WIDTH / 2;
        y = HEIGHT / 2;
        // Initial fruit position
        fruitX = rand() % WIDTH + 1;
        fruitY = rand() % HEIGHT + 1;
        score = 0;
        gameOver = 0;
        hideCursor(); // Hide cursor to reduce flickering
        while (!gameOver) {
            // Move cursor to top-left corner
            printf("\033[H");
            for (i = 0; i < HEIGHT + 2; i++) {
                for (j = 0; j < WIDTH + 2; j++) {
                    if (i == 0 || i == HEIGHT + 1 || j == 0 || j == WIDTH + 1) {
                        setConsoleColor(10); // Green walls
                        printf("#");
                    } else if (i == y && j == x) {
                        setConsoleColor(12); // Red snake head
                        printf("S");
                    } else if (i == fruitY && j == fruitX) {
                        setConsoleColor(14); // Yellow fruit
                        printf("*");
                    } else {
                        int isTail = 0;
                        for (k = 0; k < nTail; k++) {
                            if (tailX[k] == j && tailY[k] == i) {
                                setConsoleColor(12); // Red snake tail
                                printf("s");
                                isTail = 1;
                                break;
                            }
                        }
                        if (!isTail) {
                            printf(" ");
                        }
                    }
                }
                printf("\n");
            }
            setConsoleColor(7); // Reset color
            printf("Score: %d\n", score);
            // Snake movement
            if (_kbhit()) {
                switch (_getch()) {
                    case 75:
                    case 'a':
                    case 'A':
                        direction = 'L';
                        break;
                    case 77:
                    case 'd':
                    case 'D':
                        direction = 'R';
                        break;
                    case 72:
                    case 'w':
                    case 'W':
                        direction = 'U';
                        break;
                    case 80:
                    case 's':
                    case 'S':
                        direction = 'D';
                        break;
                }
            }
            // Move the tail
            int prevX = tailX[0];
            int prevY = tailY[0];
            int prev2X, prev2Y;
            tailX[0] = x;
            tailY[0] = y;
            for (i = 1; i < nTail; i++) {
                prev2X = tailX[i];
                prev2Y = tailY[i];
                tailX[i] = prevX;
                tailY[i] = prevY;
                prevX = prev2X;
                prevY = prev2Y;
            }
            // Move the head
            switch (direction) {
                case 'L':
                    x--;
                    break;
                case 'R':
                    x++;
                    break;
                case 'U':
                    y--;
                    break;
                case 'D':
                    y++;
                    break;
                default:
                    break;
            }
            // Game over conditions
            if (x < 1 || x > WIDTH || y < 1 || y > HEIGHT) {
                gameOver = 1;
            }
            for (i = 0; i < nTail; i++) {
                if (tailX[i] == x && tailY[i] == y) {
                    gameOver = 1;
                    break;
                }
            }
            // Eat fruit
            if (x == fruitX && y == fruitY) {
                score += 10;
                fruitX = rand() % WIDTH + 1;
                fruitY = rand() % HEIGHT + 1;
                nTail++;
            }
            Sleep(100); // Control game speed
        }
        printf("Game Over!\n");
        printf("Your score: %d\n", score);
        char reset;
        restart = 2;
        while (restart == 2) {
            printf("Play again? (Y/N): ");
            scanf(" %c", &reset);
            if (reset == 'y' || reset == 'Y') {
                restart = 0;
            } else if (reset == 'n' || reset == 'N') {
                restart = 1;
            } else {
                printf("Invalid input! Please enter Y or N.\n");
            }
        }
    }
}

void snake() {
	snakeGame();
}
