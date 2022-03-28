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

    std::string getPlayer() const {return player;};

    void displayBoard() const;

    private:
    std::string player;

    std::vector<std::string> pegs{9, " "};

    void setNextPlayer();

    bool checkBoardFull();

    void clearBoard();
};
#endif
