#include <stdio.h>
#include <stdlib.h>

int    count = 0;
int    n;
int    board[16];

int    isable(int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[col] == board[i] || col - i == abs(board[col] - board[i]))
            return 0;
    }
    return 1;
}

void nqueen(int col)
{
    if (col == n)
    {
        count++;
        return ;
    }
    for (int i = 0; i < n; i++)
    {
        board[col] = i;
        if (isable(col))
            nqueen(col + 1);
    }
}

int    main()
{
    scanf("%d", &n);
    nqueen(0);
    printf("%d", count);
}