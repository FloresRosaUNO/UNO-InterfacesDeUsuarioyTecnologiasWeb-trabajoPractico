#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>  // Para _kbhit() y _getch() en Windows

#define WIDTH 10
#define HEIGHT 20

char board[HEIGHT][WIDTH];

void initBoard() {
    for (int i = 0; i < HEIGHT; i++)
        for (int j = 0; j < WIDTH; j++)
            board[i][j] = ' ';
}

void drawBoard() {
    system("cls");  // En Linux usar "clear"
    for (int i = 0; i < HEIGHT; i++) {
        printf("|");
        for (int j = 0; j < WIDTH; j++)
            printf("%c", board[i][j]);
        printf("|\n");
    }
    printf("----------------\n");
}

void dropPiece() {
    int pos = WIDTH / 2;
    for (int i = 0; i < HEIGHT; i++) {
        board[i][pos] = 'X';
        drawBoard();
        board[i][pos] = ' ';
        if (_kbhit()) break;
        _sleep(300);
    }
}

int main() {
    initBoard();
    while (1) {
        dropPiece();
    }
    return 0;
}
