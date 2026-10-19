#include <stdio.h>

int main(void)
{
    char board[3][3];
    int x, y, k, i;

    
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++) board[x][y] = ' ';

    for (k = 0; k < 9; k++) {
        
        printf("(x, y) 좌표: ");
        if (scanf("%d %d", &x, &y) != 2) {
            printf("잘못된 입력입니다.\n");
            while (getchar() != '\n');
            k--; 
            continue;
        }

        
        if (x < 0 || x > 2 || y < 0 || y > 2) {
            printf("잘못된 위치입니다! 0~2 사이의 값을 입력하세요.\n");
            k--;
            continue;
        }

        
        if (board[x][y] != ' ') {
            printf("이미 돌이 놓여 있는 자리입니다! 다른 곳을 선택하세요.\n");
            k--; 
            continue;
        }

       
        board[x][y] = (k % 2 == 0) ? 'X' : 'O';

        
        for (i = 0; i < 3; i++) {
            printf("---|---|---\n");
            printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        }
        printf("---|---|---\n");

        
        int win = 0;
        
        for (i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
                win = 1;
        }
        
        for (i = 0; i < 3; i++) {
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
                win = 1;
        }
        
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
            win = 1;
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
            win = 1;

        
        if (win) {
            printf("\n게임 종료! 승자가 발생했습니다!\n");
            break;
        }
    }

    return 0;
}

