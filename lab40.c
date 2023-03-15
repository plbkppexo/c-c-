#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(
    int board[BOARD_SIZE][BOARD_SIZE], char alphaB, char alphaX, int xPos, int yPos)
{

    board[yPos][xPos] = alphaB;
    for (int i = 1; i < BOARD_SIZE; i++)
    {
        if (xPos + i < BOARD_SIZE && yPos + i < BOARD_SIZE)
            board[yPos + i][xPos + i] = alphaX;
        if (xPos - i > -1 && yPos - i > -1)
            board[yPos - i][xPos - i] = alphaX;
        if (xPos + i < BOARD_SIZE && yPos - i > -1)
            board[yPos - i][xPos + i] = alphaX;
        if (xPos - i > -1 && yPos + i < BOARD_SIZE)
            board[yPos + i][xPos - i] = alphaX;
    }
}

int main()
{

    int i, j, x, y;
    char alphaB = 'B', alphaX = 'X';
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    bishopMoves(board, alphaB, alphaX, x, y);
    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    for (i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d|", i);
        for (j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j] != 0)
                printf("%c|", board[i][j]);
            else
                printf(" |");
        }
        printf("\n");
        printf("------------------\n");
    }
}
