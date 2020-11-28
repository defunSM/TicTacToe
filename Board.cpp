#include <iostream>
#include <string>
#include <vector>
//#include "Board.h" removing since repl has problems with .h files
using namespace std;

class Board
{

  public:
    Board()
    {
        this->boardState = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        this->currentPlayerTurn = 'X';
    }

    void showMenu() // displays menu
    {
        cout << "----------------------------" << endl;
        cout << "         Tic Tac Toe        " << endl;
        cout << "----------------------------" << endl;
    }

    void displayBoard() // create the tictactoe board from boardState array
    {

        cout << "      1   2   3  " << endl;
        cout << "   1 [" << this->boardState[0] << "] [" << this->boardState[1] << "] [" << this->boardState[2] << "] " << endl;
        cout << "   2 [" << this->boardState[3] << "] [" << this->boardState[4] << "] [" << this->boardState[5] << "] " << endl;
        cout << "   3 [" << this->boardState[6] << "] [" << this->boardState[7] << "] [" << this->boardState[8] << "] " << endl;
        cout << endl;

    }
    bool checkForWin(); // checking for win returns false if no player won true if someone won
    string getTimeStamp(); // returns a time as a string
    void logMoves(); // log moves onto a log.txt file
    void makeMove(string move) // allows player to make a move
    {
        cout << endl;

        int moveSelected = -1;  // not valid move but place holder

        if (move == "1 1") { this->boardState[0]=this->currentPlayerTurn; }
        else if (move == "1 2") { this->boardState[1]=this->currentPlayerTurn; }
        else if (move == "1 3") { this->boardState[2]=this->currentPlayerTurn; }
        else if (move == "2 1") { this->boardState[3]=this->currentPlayerTurn; }
        else if (move == "2 2") { this->boardState[4]=this->currentPlayerTurn; }
        else if (move == "2 3") { this->boardState[5]=this->currentPlayerTurn; }
        else if (move == "3 1") { this->boardState[6]=this->currentPlayerTurn; }
        else if (move == "3 2") { this->boardState[7]=this->currentPlayerTurn; }
        else if (move == "3 3") { this->boardState[8]=this->currentPlayerTurn; }
        else {}

        if (this->currentPlayerTurn=='X') { this->currentPlayerTurn='O'; }
        else { this->currentPlayerTurn='X'; }
    }
    void checkValidMove(); // checks that the move made was valid

    private:

        vector<char> boardState; // current state of the tictactoe board
        vector<string> boardLogs;   // logs of the board
        char currentPlayerTurn;  // the player turn
};

