#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#define WIDTH 40
#define HEIGHT 20
#define MAX_FOOD 6

int pacmanX, pacmanY;
int score = 0;
int ghostX, ghostY;
int foodX[MAX_FOOD], foodY[MAX_FOOD];
char board[HEIGHT][WIDTH + 1];
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int ghostMoveCounter = 0;
int ghostMoveFrequency = 3;

void placeFood(int index) {
    do {
        foodX[index] = rand() % (WIDTH - 2) + 1;
        foodY[index] = rand() % (HEIGHT - 2) + 1;
    } while (board[foodY[index]][foodX[index]] != ' ');

    board[foodY[index]][foodX[index]] = 'o';
}

void setup() {
    srand(time(NULL));

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            board[y][x] = (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1) ? '.' : ' ';
        }
        board[y][WIDTH] = '\0';
    }

    pacmanX = WIDTH / 2;
    pacmanY = HEIGHT / 2;
    board[pacmanY][pacmanX] = '>';

    ghostX = 1;
    ghostY = 1;
    board[ghostY][ghostX] = 'G';
    
     for (int i = 0 ; i < MAX_FOOD; i++) {
        placeFood(i);
    }
}

void printBoard() {
    system("cls");
    SetConsoleTextAttribute(hConsole, 10);
    printf("\t\t\t\t\t\t\t\t ____   _    ____  __  __    _    _   _   \n");
    printf("INSTRUCTION:\t\t\t\t\t\t\t|  _ \\ / \\  / ___||  \\/  |  / \\  | \\ | |\n");
    printf(">> \'W|w\' to move up\t\t\t\t\t\t| |_) / _ \\| |    | |\\/| | / _ \\ |  \\| |  \t\t\t\t\tScore = %d\n", score);
    printf(">> \'A|a\' to move left\t\t\t\t\t\t|  __/ ___ \\ |___ | |  | |/ ___ \\| |\\  |  \n");
    printf(">> \'S|s\' to move down\t\t\t\t\t\t|_| /_/   \\_\\____||_|  |_/_/   \\_\\_| \\_| \n");
    printf(">> \'D|d\' to move right\n\n\n\n\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, 7);
  
    for (int y = 0; y < HEIGHT; y++) {
        printf("\t\t\t\t\t\t\t\t%s\n", board[y]);
    }
    SetConsoleTextAttribute(hConsole, 12);
    if(score < 10){
    	printf("\t\t\t\t\t\t\t\t\t   Difficulty level 1\n");
	}else if(score < 30){
		printf("\t\t\t\t\t\t\t\t\t   Difficulty level 2\n");
		ghostMoveFrequency = 2;
	}else{
		printf("\t\t\t\t\t\t\t\t\t   Difficulty level max\n");
		ghostMoveFrequency = 1;
	}
	SetConsoleTextAttribute(hConsole, 7);
}

void move(int *x, int *y, int dx, int dy) {
    int newX = *x + dx;
    int newY = *y + dy;
    if (board[newY][newX] != '.') {
        *x = newX;
        *y = newY;
    }
}

void moveGhost() {
    if (++ghostMoveCounter >= ghostMoveFrequency) {
        int dx = 0, dy = 0;
        if (pacmanX > ghostX) dx = 1;
        else if (pacmanX < ghostX) dx = -1;

        if (pacmanY > ghostY) dy = 1;
        else if (pacmanY < ghostY) dy = -1;

        board[ghostY][ghostX] = ' ';
        move(&ghostX, &ghostY, dx, dy);
        board[ghostY][ghostX] = 'G';

        ghostMoveCounter = 0; 
    }
}

void pacman(){
	setup();

    while (1) {
        printBoard();
        if (kbhit()) {
        char ch = getch();
        if(ch >= 'A' && ch <= 'Z')
        	ch += 32;
        int dx = 0, dy = 0;
        char pacmanSymbol = '>';
        switch (ch) {
            case 'w': dy = -1; pacmanSymbol = '^'; break;
            case 's': dy = 1; pacmanSymbol = 'v'; break;
            case 'a': dx = -1; pacmanSymbol = '<'; break;
            case 'd': dx = 1; pacmanSymbol = '>'; break;
        }
        board[pacmanY][pacmanX] = ' ';
        move(&pacmanX, &pacmanY, dx, dy);
        board[pacmanY][pacmanX] = pacmanSymbol;

        for (int i = 0; i < MAX_FOOD; i++) {
            if (pacmanX == foodX[i] && pacmanY == foodY[i]) {
                score++;
                placeFood(i);
            }
        }
    }

    moveGhost();
    
    if (pacmanX == ghostX && pacmanY == ghostY) {
    	SetConsoleTextAttribute(hConsole, 12);
    	printf("\t\t\t\t\t\t\t\t\tThe Ghost Has Eaten You:(\n");
        printf("\a     \t\t\t\t\t\t\t\t\t\tGame Over!\n");
        SetConsoleTextAttribute(hConsole, 7);
        //exit(0);
        break;
    }
        Sleep(80);
    }
}
