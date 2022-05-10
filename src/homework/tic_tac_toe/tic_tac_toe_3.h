#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H

#define TIC_TAC_TOE_3_H

class TicTacToe3: public TicTacToe
{

public:

TicTacToe3(): TicTacToe(3){}

TicTacToe3(std::vector<std::string> p, std::string winner) : TicTacToe(p, getWinner()){}

private:

bool checkColumnWin() override;

bool checkRowWin() override;

bool checkDiagonalWin() override;
};

#endif