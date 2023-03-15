#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main()
{

    int n, i, j, x, y, count = 0;
    char alpha;
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    scanf("%d", &n);

    while (count < n)
    {
        scanf("\n%c(%d, %d)", &alpha, &x, &y);
        setPieceOnTable(board, alpha, x, y);
        count++;
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
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
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos)
{
    board[yPos][xPos] = piece;
}