#include <iostream>
#include <string>
#include <vector>
//#include "Board.h" removing since repl has problems with .h files
using namespace std;

#define Prompt() cout << "> " // defining the prompt '> ' for asking player

// enum Move { "1 1", "1 2", "1 3", "2 1", "2 2", "2 3", "3 1", "3 2", "3 3" };

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

    int convertMove(string move) {
        if (move == "1 1") return 0;
        else if (move == "1 2") return 1;
        else if (move == "1 3") return 2;
        else if (move == "2 1") return 3;
        else if (move == "2 2") return 4;
        else if (move == "2 3") return 5;
        else if (move == "3 1") return 6;
        else if (move == "3 2") return 7;
        else if (move == "3 3") return 8;
        else { return -1; }
    }

    bool checkValidMove(int playerMove) // checks that the move made was valid
    {
        if(this->boardState[playerMove]!=' ') { return false; }
        else { return true; }
    }

    void makeMove(string move) // allows player to make a move
    {
        cout << endl;

        // redo so that it sets selected move to an index so that it can be used with varify
        int playerMove = convertMove(move);
        string newMove; // incase invalid Move is selected

        if (playerMove == -1 || checkValidMove(playerMove) == false) {
            cout << "Invalid Move!" << endl;
            Prompt();
            getline(cin, newMove);
            makeMove(newMove);

        }
        else {
            this->boardState[playerMove] = this->currentPlayerTurn;
        
            // Changes player turn
            if (this->currentPlayerTurn=='X') { this->currentPlayerTurn='O'; }
            else { this->currentPlayerTurn='X'; }

        }
    }


    private:

        vector<char> boardState; // current state of the tictactoe board
        vector<string> boardLogs;   // logs of the board
        char currentPlayerTurn;  // the player turn
};

