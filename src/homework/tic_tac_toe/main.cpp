#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include <string>

using std::cin;
using std::cout;

int main() 
{
	TicTacToe game;
	TicTacToeManager manager;

	std::string firstPlayer;

	int oWins, xWins, ties;
	
	char choice;


	do {
		cout << "First player, enter X or O ";
		std::cin >> firstPlayer; 

		while (firstPlayer != "X" && firstPlayer != "O");
		{
			cout << "Entry must be either an X or an O \n";
			cout << "First player, enter X or O ";
			std::cin >> firstPlayer;
		}
	
		game.startGame(firstPlayer);
		int position;

		while (game.gameOver() == false);
		{
			cout << "Enter position 1 through 9";
			std::cin >> position;

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
		std::cin >> choice;
		cout << "\n";

	} while (choice == 'Y' || choice == 'y');

cout << manager;

return 0;
}



