#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H

#define TIC_TAC_TOE_4_H

class TicTacToe4: public TicTacToe
{
    public:

    TicTacToe4(): TicTacToe(4){}

TicTacToe4(std::vector<std::string> p, std::string winner) : TicTacToe(p, getWinner()){}
    private:

    bool checkColumnWin() override;

    bool checkRowWin() override;

    bool checkDiagonalWin() override;
};

#endif