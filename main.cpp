#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "pman.h"
#include "hman.h"
#include "maze.h"
#include "snake.h"

void printMenu() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tWELCOME TO THE\n");
    SetConsoleTextAttribute(hConsole, 14);
    printf("\t\t\t\t\t\t\t\t    _     ____   ____     _     ____   _____\n");
    printf("\t\t\t\t\t\t\t\t   / \\   |  _ \\ / ___|   / \\   | __ \\ |\n");
    printf("\t\t\t\t\t\t\t\t  / _ \\  | |_) || |     / _ \\  ||  | ||_____\n");
    printf("\t\t\t\t\t\t\t\t / ___ \\ |  _  || |__  / ___ \\ ||__| ||\n");
    printf("\t\t\t\t\t\t\t\t/_/   \\_\\|_| \\_\\\\____|/_/   \\_\\|____/ |_____\n\n");
    SetConsoleTextAttribute(hConsole, 9);
    printf("\t\t\t\t\t\t\t\t\t   Press '1' to play PACMAN\n\n");
    printf("\t\t\t\t\t\t\t\t\t   Press '2' to play HANGMAN\n\n");
    printf("\t\t\t\t\t\t\t\t\t   Press '3' to play MAZE\n\n");
    printf("\t\t\t\t\t\t\t\t\t   Press '4' to play SNAKE\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\t\t\t\t\t\t\t\t      Press any other character to exit\n\n");
}

int main() {
    int n;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    while(1) {
        printMenu();
        printf("\t\t\t\t\t\t\t\tSelect: ");
        scanf("%d", &n);
        switch(n) {
            case 1:
                system("cls");
                pacman();
                system("cls");
                break;
            case 2:
                system("cls");
                hangman();
                system("cls");
                break;
            case 3:
                system("cls");
                Maze();
                system("cls");
                break;
            case 4:
                system("cls");
                snake();
                system("cls");
                break;
            default:
                SetConsoleTextAttribute(hConsole, 12);
                printf("\n\n\t\t\t\t\t\t\t\t\t    Arcade mode exited.\n");
                SetConsoleTextAttribute(hConsole, 7);
                exit(0);
        }
    }
    return 0;
}
