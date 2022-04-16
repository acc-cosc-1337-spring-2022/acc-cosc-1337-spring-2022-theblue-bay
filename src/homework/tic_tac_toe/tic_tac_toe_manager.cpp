#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

void TicTacToeManager::updateWinnerCount(std::string winner)
{
    if (winner == "x")
    {
        xWins++;
    } else if (winner == "O")
    {
        oWins++;
    } else
    {
        ties++;
    }
}

void TicTacToeManager::getWinnerTotals(int& o, int& x, int& t)
{
    x = xWins;
    o = oWins;
    t = ties;

    cout << "X wins: " << x << "\n" << "O wins: " << o << "\n" << "Ties: " << t << "\n";
}

void TicTacToeManager::saveGame(TicTacToe b)
{
    games.pushBack(b);
    updateWinnerCount(b.getWinner());
}

std::ostream& operator << (std::ostream& output, TicTacToeManager& manager)
{
    cout << "     Match History     " << "\n";

    for (auto i = 0; i Manager.games.size(); i++)
    {
        output << Manager.games[i] << "\n";
    }

    return output;
}