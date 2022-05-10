#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

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

    std::cout << "X wins: " << x << "\n" << "O wins: " << o << "\n" << "Ties: " << t << "\n";
}

void TicTacToeManager::saveGame(std::unique_ptr<TicTacToe>& b)
{
    updateWinnerCount(b -> getWinner());
    games.push_back(std::move(b));
}

std::ostream& operator << (std::ostream& output, const TicTacToeManager& manager)
{
    std::cout << "     Match History     " << "\n";

    for (auto& games: manager.games)
    {
        output << *games << "\n";
    }

    return output;
}

TicTacToeManager::TicTacToeManager(TicTacToeData& d): data(d)
{
    games = data.getGames();

    for (auto& game: games)
    {
        updateWinnerCount(game -> getWinner());
    }
}

TicTacToeManager::~TicTacToeManager()
{
    std::cout << "\n Saving all matches" << std::endl;
    data.saveGames(games);
}

