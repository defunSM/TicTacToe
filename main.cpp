#include <iostream>
#include <string>

#define Prompt() cout << "> " // defining the prompt '> ' for asking player

using namespace std;

void showMenu(); // displays menu
void displayBoard(char* boardState);		// create the tictactoe board from boardState array
void checkForWin();			// checking for win
string getTimeStamp();		// returns a time as a string
void logMoves();			// log moves onto a log.txt file
void makeMove(string move, char* boardState, char currentPlayerTurn); // allows player to make a move
void checkValidMove();		// checks that the move made was valid

int main() {
	string option;
	string playerOneName, playerTwoName;
	char boardState[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; // variable representing the tictactoe board
	int settings[2] = {0, 0};		// player, win condition

	showMenu();
	cout << "Select by entering '1' or '2'" << endl << endl;
	cout << "1) Player vs Player " << endl;
	cout << "2) Player vs Computer " << endl << endl;
	Prompt(); 
  getline(cin, option);
	cout << endl;

	while (settings[1] == 0) {
		displayBoard(boardState);
		cout << "Enter your next move! (i.e '1 2' means row 1 column 2)" << endl << endl;
		Prompt(); 
    getline(cin, option);
		makeMove(option, boardState, 'X');
	}
}

void makeMove(string move, char* boardState, char currentPlayerTurn) {
	cout << endl;

  int moveSelected = -1;  // not valid move but place holder

  if (move == "1 1") { moveSelected=0; }
  else if (move == "1 2") { moveSelected=1; }
  else if (move == "1 3") { moveSelected=2; }
  else if (move == "2 1") { moveSelected=3; }
  else if (move == "2 2") { moveSelected=4; }
  else if (move == "2 3") { moveSelected=5; }
  else if (move == "3 1") { moveSelected=6; }
  else if (move == "3 2") { moveSelected=7; }
  else if (move == "3 3") { moveSelected=8; }
  else 
  { 
    string move;
    displayBoard(boardState);
    cout << "You did not enter a valid move! Try again." << endl << endl;
    cout << "Enter your next move! (i.e '1 2' means row 1 column 2)" << endl << endl;
		Prompt(); 
    getline(cin, move);
    makeMove(move, boardState, currentPlayerTurn);
  }
  if (currentPlayerTurn == 'X') 
  {
    boardState[moveSelected] = 'X';
  } else {
    boardState[moveSelected] = 'O';
  }

  currentPlayerTurn = 'O';

}

void showMenu() {
	cout << "----------------------------" << endl;
	cout << "         Tic Tac Toe        " << endl;
	cout << "----------------------------" << endl;
}

void displayBoard(char* boardState) {

	cout << "      1   2   3  " << endl;
	cout << "   1 [" << boardState[0] << "] [" << boardState[1] << "] [" << boardState[2] << "] " << endl;
	cout << "   2 [" << boardState[3] << "] [" << boardState[4] << "] [" << boardState[5] << "] " << endl;
	cout << "   3 [" << boardState[6] << "] [" << boardState[7] << "] [" << boardState[8] << "] " << endl;
  cout << endl;
}
