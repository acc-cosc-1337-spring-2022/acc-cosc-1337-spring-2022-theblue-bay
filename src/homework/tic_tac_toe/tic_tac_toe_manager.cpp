#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

void TicTacToeManager::updateWinnerCount(std::string winner)
{

    if (winner == "x")
    {
        xWin++;
    } else if (winner == "O")
    {
        oWin++;
    } else
    {
        ties++;
    }
}

void TicTacToeManager::getWinnerTotals(int& o, int& x, int& t)
{
    x = xWin;
    o = oWin;
    t = ties;

    cout << "X wins: " << x << "\n" << "O wins: " << o << "\n" << "Ties: " << t << "\n";
}

void TicTacToeManager::saveGame(TicTacToe b)
{
    games.push_back(b);
    updateWinnerCount(b.getWinner());
}

std::ostream& operator << (std::ostream& output, const TicTacToeManager& manager)
{
    cout << "     Match History     " << "\n";

    for (auto& games: manager.games)
    {
        output << games << "\n";
    }

    return output;
}