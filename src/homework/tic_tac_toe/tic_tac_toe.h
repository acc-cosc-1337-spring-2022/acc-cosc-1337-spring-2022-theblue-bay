#include <string>
#include <vector>
#include <iostream>

using std::cout;

#ifndef TIC_TAC_TOE_H

#define TIC_TAC_TOE_H

class TicTacToe {

    public:

    std::string getPlayer() const {return player;};

    std::string getWinner() {return winner;};
    
    bool gameOver();
    
    void startGame(std::string firstPlayer);

    void markBoard(int position);

    void displayBoard() const;

    friend std::istream& operator << (std::istream& input, TicTacToe& game);

    friend std::ostream& operator << (std::ostream& output, const TicTacToe& game);


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
