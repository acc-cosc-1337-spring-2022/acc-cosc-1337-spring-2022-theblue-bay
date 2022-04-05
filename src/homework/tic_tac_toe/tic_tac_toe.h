#include <string>
#include <vector>
#include <iostream>

#ifndef TIC_TAC_TOE_H

#define TIC_TAC_TOE_H

class TicTacToe {

    public:

    bool gameOver();
    
    void startGame(std::string firstPlayer);

    void markBoard(int position);

    void displayBoard() const;

    std::string getPlayer() const {return player;};

    std::string getWinner();

    private:

    std::string player;

    std::vector<std::string> pegs{9, " "};

    std::string winner;

    void setNextPlayer();

    bool checkBoardFull();

    void clearBoard();

    bool checkColumnWin();

    bool checkRowWin();

    bool checkDiagonalWin();

    void setWinner();
};
#endif
