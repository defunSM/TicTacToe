#include <iostream>
#include <string>
#include "Board.cpp"


using namespace std;


int main() {
	string userInput;
	string playerOneName, playerTwoName;
	char boardState[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; // variable representing the tictactoe board
	int settings[2] = {0, 0};		// player, win condition

  Board *b = new Board;  // Initializing new object board


	b->showMenu();
	cout << "Select by entering '1' or '2'" << endl << endl;
	cout << "1) Player vs Player " << endl;
	cout << "2) Player vs Computer " << endl << endl;
	Prompt();
  getline(cin, userInput);
	cout << endl;

  while (b->checkForWin()) {

    b->displayBoard();
    cout << "Current Turn: Player " << b->getCurrentPlayerTurn() << endl;
    cout << "Enter your next move! (i.e '1 2' means row 1 column 2)" << endl << endl;
    Prompt();
    getline(cin, userInput);
    b->makeMove(userInput);

  }

  string w = b->getWinner();
  b->logMoves(w);
  b->displayBoard();

  cout << endl;
  cout << "Winner is " << b->getWinner() << endl;

}
