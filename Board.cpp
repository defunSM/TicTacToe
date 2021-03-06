#include <iostream>
#include <string>
#include <vector>
//#include "Board.h" removing since repl has problems with .h files
using namespace std;

class Board
{

  public:
    Board(string player1, string player2, int* boardstate);
    void showMenu(); // displays menu
    void displayBoard(int *boardState); // create the tictactoe board from boardState array
    void checkForWin(); // checking for win
    string getTimeStamp(); // returns a time as a string
    void logMoves(); // log moves onto a log.txt file
    void makeMove(string move); // allows player to make a move
    void checkValidMove(); // checks that the move made was valid

  private:
    int* boardState; // current state of the tictactoe board
    vector<int> boardLogs; // logs of the board

};

