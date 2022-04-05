#include "tic_tac_toe.h"
using std::string, std::cout, std::cin;

int main() 
{
	TicTacToe game;
	string firstPlayer;
	
	char choice;

	do {
	cout << "First player, enter X or O ";
	cin >> firstPlayer;

	while (firstPLayer != "X" && firstPlayer != "O")
	{
		cout << "Entry must be either an X or an O \n";
		cout << "First player, enter X or O ";
		cin >> firstPlayer;
	}
	
	game.startGame(firstPlayer);
	int position;

	while (game.gameOver() == false) 
	{
		cout << "Enter position 1 through 9";
		cin >> position;

		game.markBoard(position);
		game.displayBoard();
	}

	cout << game.getWinner() << "is the winner! \n";
	cout << "Continue? ";
	cin >> choice;

	} while (choice == 'Y' || choice == 'y' || choice == 'Yes' || choice == 'yes');

	return 0;
}