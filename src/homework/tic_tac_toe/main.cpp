#include "tic_tac_toe.h"
using std::string, std::cout, std::cin;

int main() 
{
	TicTacToe game;
	string firstPlayer;
	
	char choice;
	int position;

	do {
	cout << "First player, enter X or O ";
	cin >> firstPlayer;

	game.startGame(firstPlayer);

	while (game.gameOver() == false) {
		cout << "Enter position 1 through 9";
		cin >> position;

		game.markBoard(position);
		game.displayBoard();
	}

	cout << "Continue? ";
	cin >> choice;

	} while (choice == 'Y' || choice == 'y' || choice == 'Yes' || choice == 'yes');

	return 0;
}