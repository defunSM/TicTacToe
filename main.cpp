#include <iostream>
#include <string> 

#define Prompt() cout << "> ";

using namespace std;

void showMenu(); // displays menu
void displayBoard(int *boardState); // create the tictactoe board from boardState array
void checkForWin(); // checking for win
string getTimeStamp(); // returns a time as a string
void logMoves(); // log moves onto a log.txt file
void makeMove(string move); // allows player to make a move
void checkValidMove(); // checks that the move made was valid

int main() {

  string option;
  string playerOneName, playerTwoName;
  int boardState [9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};  // variable representing the tictactoe board
  int settings [2] = {0, 0}; // player, win condition

  showMenu();
  cout << "Select by entering '1' or '2'" << endl << endl;
  cout << "1) Player vs Player " << endl;
  cout << "2) Player vs Computer " << endl << endl;
  Prompt();
  getline(cin, option);
  cout << endl; 

  while (settings[1] == 0)
  {
    displayBoard(boardState);
    cout << "Enter your next move! (i.e '1 2' means row 1 column 2)" << endl << endl;
    Prompt();
    getline(cin, option);
    makeMove(option); 
  }
}

void makeMove(string move)
{
  cout << endl;
  if (move.size() == 3) { cout << "Valid move" << endl << endl; }
  else { cout << "You did not enter a valid move! Try again." << endl << endl; }
}

void showMenu()
{
  cout << "----------------------------"  << endl;
  cout << "         Tic Tac Toe        " << endl;
  cout << "----------------------------"  << endl;
}

void displayBoard(int *boardState)
{
  cout << "      1   2   3  " << endl;
  cout << "   1 [ ] [ ] [ ] " << endl;
  cout << "   2 [ ] [ ] [ ] " << endl;
  cout << "   3 [ ] [ ] [ ] " << endl << endl;
}
