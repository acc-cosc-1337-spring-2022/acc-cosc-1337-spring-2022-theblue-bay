#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <fstream>

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData
{
public:

    void saveGames(const std::vector<std::unique_ptr<TicTacToe>>& games);

    std::vector<std::unique_ptr<TicTacToe>> getGames();

private:

    const std::string FILE_NAME = "tic_tac_toe.data";
};

#endif 