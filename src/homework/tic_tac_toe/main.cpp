#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using std::string, std::cout, std::cin;

int main() 
{
	TicTacToe game;
	TicTacToeManager manager;

	string firstPlayer;

	int oWins, xWins, ties;
	
	char choice;


	do {
	cout << "First player, enter X or O ";
	cin >> firstPlayer;

	while (firstPlayer != "X" && firstPlayer != "O")
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

		if (game.gameOver() == true)
		{
			if (game.getWinner() == "C")
			{
				cout << "The game has been tied. \n";
			} else
			{
				cout << game.getWinner() << " is the winner! \n";
			}
		}
	}

	manager.saveGame(game);

	manager.getWinnerTotals(oWins, xWins, ties);
	cout << "Current score: \n" << "X: " << xWins << "\n" << "O: " << oWins << "\n" << "Ties: " << ties << "\n";

	cout << "Continue? ";
	cin >> choice;
	cout << "\n";

} while (choice == 'Y' || choice == 'y');

cout << manager;

return 0;
