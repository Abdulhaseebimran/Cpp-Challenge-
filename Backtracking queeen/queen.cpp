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

        // Check this row on the left side
        for (i = 0; i < col; i++)
        {
            if (board[row][i])
                return false;
        }

        // Check upper diagonal on the left side
        for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j])
                return false;
        }

        // Check lower diagonal on the left side
        for (i = row, j = col; i < N && j >= 0; i++, j--)
        {
            if (board[i][j])
                return false;
        }

        return true;
    }

    bool solveNQUtil(int board[N][N], int col)
    {
        cout << "solveNQUtil def() col " << col << endl;
        if (col >= N)
            return true; // base case
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (is_safe(board, i, col))
                {
                    cout << "is_safe call() col " << col << endl;
                    board[i][col] = 1;

                    if (solveNQUtil(board, col + 1))
                    {
                        cout << "solveNQUtil def() col+1 " << col + 1 << endl;
                         return true;
                    }
                    cout << endl;
                    print_board(board);
                    cout << endl;
                    board[i][col] = 0; // BACKTRACK
                    cout << "After backtrack " << endl;
                    print_board(board);
                    cout << endl;
                }
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
