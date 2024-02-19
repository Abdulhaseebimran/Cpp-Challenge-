#include <iostream>
using namespace std;
#define N 4

class A
{
public:
    void print_board(int board[N][N])
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool is_safe(int board[N][N], int row, int col)
    {
        int i, j;

        // Check this column on the upper side
        for (i = 0; i < row; i++)
        {
            if (board[i][col])
                return false;
        }

        // Check upper left diagonal
        for (i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j])
                return false;
        }

        // Check upper right diagonal
        for (i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
        {
            if (board[i][j])
                return false;
        }

        return true;
    }

    bool solveNQUtil(int board[N][N], int row)
    {
        if (row >= N)
            return true; // base case

        for (int col = 0; col < N; col++)
        {
            if (is_safe(board, row, col))
            {
                board[row][col] = 1;

                if (solveNQUtil(board, row + 1))
                    return true;

                board[row][col] = 0; // backtrack
            }
        }

        return false;
    }
};

int main()
{
    int chess_board[N][N] = {0};
    A obj;
    obj.print_board(chess_board);
    cout << endl;
    if (obj.solveNQUtil(chess_board, 0) == false)
    {
        cout << "Solution does not exist" << endl;
    }
    else
    {
        obj.print_board(chess_board);
    }
    return 0;
}