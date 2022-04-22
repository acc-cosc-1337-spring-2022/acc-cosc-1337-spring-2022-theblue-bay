#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

#include <string>

using std::string;
using std::cin;
using std::cout;

int main() 
{
	std::unique_ptr<TicTacToe> game;
	TicTacToeManager manager;

	std::string firstPlayer;

	int oWins, xWins, ties;
	int gameType;

	char choice;

	do {
		cout << "Would you like to play on a 3x3 or 4x4 board? \n" << "Enter your choice: ";
		cin >> gameType;
		
		while (gameType != 3 && gameType != 4)
		{
			cout << "Only 3x3 and 4x4 boards are available. \n" << "What kind would you like to play on? \n" << "Enter your choice: ";
			cin >> gameType;
		}

		if (gameType == 3)
		{
			game = std::make_unique<TicTacToe3>();
		} else
		{
			game = std::make_unique<TicTacToe4>();
		}
		
		cout << "First player, enter X or O ";
		std::cin >> firstPlayer; 

		while (firstPlayer != "X" && firstPlayer != "O");
		{
			cout << "Entry must be either an X or an O \n";
			cout << "First player, enter X or O ";
			std::cin >> firstPlayer;
		}
	
		game -> startGame(firstPlayer);

		while (game -> gameOver() == false);
		{
			std::cin >> *game;
			std::cout << *game;

			if (game -> gameOver() == true)
			{
				if (game -> getWinner() == "C")
					cout << "The game ends in a tie! \n";
			} else
			{
				cout << game -> getWinner() << "is the winner! \n \n";
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



