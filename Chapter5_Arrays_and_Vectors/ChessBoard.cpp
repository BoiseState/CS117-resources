// Chessboard.cpp : Defines the entry point for the console application.
//

#include <iostream>

const int BOARDSIZE = 8;
const int BLACK = 1;
const int RED = 0;


using namespace std;
/*
 * When passing arrays we don't specify the number of rows, but we do HAVE to pass the number of columns...
 */
void printBoard(int board[][BOARDSIZE])
{
    for (int i = 0; i < BOARDSIZE; i++)
    {
        for (int j = 0; j < BOARDSIZE; j++)
        {
            if (board[i][j] == BLACK)
                cout << "Black\t";
            else
                cout << "Red\t";
        }
        cout << endl;
    }

}
/*
 * When passing arrays we don't specify the number of rows, but we do HAVE to pass the number of columns...
 */
void createBoard(int board[][BOARDSIZE])
{
    for (int i = 0; i < BOARDSIZE; i++)
    {
        for (int j = 0; j < BOARDSIZE; j++)
        {
            //
            // We are using the XOR boolean operator here (one side of the XOR operator is TRUE only, not both)
            // ANDing doesn't work - try changing the '^' to '&&' and see what happens...
            // Attempt to understand why XORing the values of 'i' and 'j' works.
            //
            if (i % 2 == 0 ^ j % 2 == 0)
                board[i][j] = BLACK;
            else
                board[i][j] = RED;
        }
    }

}
int main(int argc, char* argv[])
{
    //
    // create 2D array and initialize every cell to ZERO - '0'
    //
    int chessBoard[BOARDSIZE][BOARDSIZE] = {0};
    createBoard(chessBoard);
    cout << "\n\t\tChessboard" << endl;
    //
    // How can we 'pretty' up the chessboard?
    //
    printBoard(chessBoard);
    cout << endl;


    return 0;
}

