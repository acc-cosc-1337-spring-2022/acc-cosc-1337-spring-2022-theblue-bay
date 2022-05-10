#include "tic_tac_toe_data.h"

void TicTacToeData::saveGames(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    std::ofstream outfile;
    outfile.open(FILE_NAME);

    if (outfile.is_open())
    {
        for (auto& game: games)
        {
            for (auto& peg: game -> getPegs())
            {
                outfile << peg;
            }

            outfile << game -> getWinner();
            outfile << std::endl; 
        }
    }

    outfile.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::getGames()
{
    std::vector<std::unique_ptr<TicTacToe>> boards;
    std::ifstream inpfile;
    inpfile.open(FILE_NAME);

    std::string line;

    if (inpfile.is_open())
    {
        while (std::getline(inpfile, line))
        {
            std::vector<std::string> pegs;

            for (auto i = 0; i < (line.size() - 1); ++i)
            {
                std::string ch(1, line[i]);
                pegs.push_back(ch);
            }

            std::string winnerChar{line[line.size() - 1]};
            std::unique_ptr<TicTacToe> board;

            if      (pegs.size() == 9)
            {
                board = std::make_unique<TicTacToe3>(pegs, winnerChar);
            }
            else if (pegs.size() == 16)
            {
                board = std::make_unique<TicTacToe4>(pegs, winnerChar);
            }

            boards.push_back(std::move(board));
        }

        inpfile.close();
    }

    return boards;
} 