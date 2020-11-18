#include <iostream>
#include <string>
using namespace std;

void showMenu(); // displays menu
void createBoard(); // create the tictactoe board
void checkForWin(); // checking for win
void logMoves(); // log moves onto a log.txt file
void makeMove(string move); // allows player to make a move
void checkValidMove(); // checks that the move made was valid

int main() {

  int boardState [9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};  // variable representing the tictactoe board

  showMenu();
  createBoard();
}

void showMenu()
{
  cout << "---------------------"  << endl;
  cout << "     Tic Tac Toe     " << endl;
  cout << "---------------------"  << endl;
}

void createBoard()
{
  cout << "      1   2   3  " << endl;
  cout << "   1 [ ] [ ] [ ] " << endl;
  cout << "   2 [ ] [ ] [ ] " << endl;
  cout << "   3 [ ] [ ] [ ] " << endl;
}