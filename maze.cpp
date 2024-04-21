#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>
#define MAX_WORD_LENGTH 15

HANDLE mConsole = GetStdHandle(STD_OUTPUT_HANDLE);
// Maze Game
char maze[16][16] = {
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, //0
    {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'}, //1
    {'#', '.', '#', '#', '#', '.', '#', '#', '#', '#', '#', '#', '.', '#', '.', '#'}, //2
    {'#', '.', '#', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '#', '.', '#'}, //3
    {'#', '.', '#', '.', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#', '.', '#'}, //4
    {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'}, //5
    {'.', '.', '#', '.', '#', '.', '#', '#', '#', '.', '#', '#', '#', '#', '.', '#'}, //6
    {'#', '.', '#', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#'}, //7
    {'#', '.', '#', '.', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#', '#', '#'}, //8
    {'#', '.', '#', '.', '#', '.', '#', '.', '.', '.', '#', '.', '.', '#', '.', '#'}, //9
    {'#', '.', '#', '.', '.', '.', '#', '.', '#', '.', '.', '#', '.', '#', '.', '#'}, //10
    {'#', '.', '#', '.', '#', '.', '#', '.', '#', '#', '.', '#', '.', '#', '.', '#'}, //11
    {'#', '.', '#', '.', '#', '.', '.', '.', '#', '.', '.', '.', '.', '#', '.', '#'}, //12
    {'#', '.', '#', '.', '#', '#', '#', '#', '#', '#', '#', '.', '#', '#', '.', '#'}, //13
    {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '#'}, //14
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '!', '#', '#'} //15
    // ... (your maze layout)
};

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void print_maze2(int x, int y) {
    // Get console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Get console screen buffer info to retrieve console dimensions
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    int consoleWidth = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
    int consoleHeight = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;

    // Assuming standard maze width and height
    int mazeWidth = 16;
    int mazeHeight = 16;

    // Calculate the starting position for printing the maze
    int startX = (consoleWidth - (mazeWidth * 2)) / 2; // Adjusted starting X position
    int startY = (consoleHeight - mazeHeight) / 2; // Calculate starting Y position

    // Set colors
    SetConsoleTextAttribute(hConsole, 14); // Yellow for maze
    
    // Print the maze
    for (int i = 0; i < mazeHeight; i++) {
        COORD position = { startX, startY + i }; // Set cursor position
        SetConsoleCursorPosition(hConsole, position);
        for (int j = 0; j < mazeWidth; j++) {
            if (maze[i][j] == '0') {
                SetConsoleTextAttribute(hConsole, 10); // Green for zero
                printf("%c ", maze[i][j]);
            } else if (maze[i][j] == '!') {
                SetConsoleTextAttribute(hConsole, 12); // Red for exclamation mark
                printf("%c ", maze[i][j]);
            } else {
                SetConsoleTextAttribute(hConsole, 14); // Yellow for maze
                printf("%c ", maze[i][j]);
            }
        }
    }

    // Print instructions
    SetConsoleTextAttribute(hConsole, 15); // White for instructions
    COORD instructionsPosition = { startX, startY + mazeHeight + 1 };
    SetConsoleCursorPosition(hConsole, instructionsPosition);
    printf("PRESS 'i' TO READ INSTRUCTIONS");
    COORD exitPosition = { startX, startY + mazeHeight + 2 };
    SetConsoleCursorPosition(hConsole, exitPosition);
    printf("PRESS 'm' TO EXIT");

    // Set cursor position for the zero character
    COORD zeroPosition = { startX + (x * 2), startY + y };
    SetConsoleCursorPosition(hConsole, zeroPosition);
    SetConsoleTextAttribute(hConsole, 10); // Green for zero
    printf("0");
}

void instructions() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t INSTRUCTIONS : \n\n\t\t\t\t\t\t\t\t      HELP THE SNAIL TO GET ACROSS THE MAZE");
    printf("\n\t\t\t\t\t\t\t\t\t    USE 'w' 'a' 's' 'd' TO MOVE\n\t\t\t\t\t\t\t\t\t\tPRESS 'm' TO EXIT\n\t\t\t\t\t\t\t\t\t\t  GOOD LUCK..!!");
    getch();
    system("cls");
}

void playMazeGame() {
    char a, b;
    int x, y;
    x = 1;
    y = 6;


printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t|WELCOME TO THE MAZE GAME|");
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tYOUR GAME STARTS IN ..... 3");
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tYOUR GAME STARTS IN ..... 2");
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tYOUR GAME STARTS IN ..... 1");
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tLET'S GO");
    sleep(1);
    system("cls");

    b = 'i';

    while (b != 'm') {
        if (x == 1 && y == 6) {
            system("cls");
            print_maze2(x, y);

            while (1) {
                if (kbhit()) {
                    a = getch();

                    int newX = x, newY = y;
                    switch (a) {
                        case 'a': newX--; break; // left arrow
                        case 'd': newX++; break; // right arrow
                        case 's': newY++; break; // down arrow
                        case 'w': newY--; break; // up arrow
                        case 'i':
                            system("cls");
                            instructions();
                            break;
                        case 'e':
                            b = 'e';
                            break;
                    }
                    if (b == 'm') {
                        break;
                    }
                    if (maze[newY][newX] != '#') {
                        x = newX;
                        y = newY;
                    }

                    system("cls");
                    
                    print_maze2(x, y);

                    if (x == 13 && y == 15) {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tCONGRATULATIONS.. YOU WIN!!\n\\t\t\t\t\t\t\t\t\t\tPRESS 'e' TO QUIT THE GAME");
                        scanf(" %c", &b);
                        if (!(b == 'm')) {
                            system("cls");
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWE HOPE TO SEE YOU AGAIN....!!");
                            getch();
                        }
                        break;
                    }
                }
            }
        }
    }
}
void Maze(){
    playMazeGame();
}
