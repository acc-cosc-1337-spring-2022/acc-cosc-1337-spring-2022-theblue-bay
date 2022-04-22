#include "tic_tac_toe.h"

#include <vector>
#include <string>
#include <memory>

#ifndef TIC_TAC_TOE_MANAGER_H

#define TIC_TAC_TOE_MANAGER_H


class TicTacToeManager
{
    public:
        void getWinnerTotals(int& x, int& o, int& t);
        
        void saveGame(std::unique_ptr<TicTacToe>& b);

        friend std::ostream& operator << (std::ostream& output, const TicTacToeManager& manager);

    private:
        std::vector <std::unique_ptr<TicTacToe>> games;

        int xWin = 0;
        int oWin = 0;
        int ties = 0;

        void updateWinnerCount(std::string winner);
};

#endif