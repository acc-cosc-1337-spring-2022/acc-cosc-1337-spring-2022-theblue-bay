#include <string>
#include <vector>
#include <iostream>
#include <memory>

#ifndef TIC_TAC_TOE_H

#define TIC_TAC_TOE_H

class TicTacToe {

    friend std::istream& operator >> (std::istream& input, TicTacToe& game);

    friend std::ostream& operator << (std::ostream& output, const TicTacToe& game);


    public:

    TicTacToe(int size): pegs(size * size, " ") {};

    TicTacToe (std::vector<std::string> p, std::string win) : pegs(p), winner(win){}

    std::string getPlayer() const {return player;};

    std::string getWinner() {return winner;};

    std::vector<std::string> getPegs()const{return pegs;}

    bool gameOver();
    
    void startGame(std::string firstPlayer);

    void markBoard(int position);


    protected:

    std::vector <std::string> pegs;

    virtual bool checkColumnWin();

    virtual bool checkRowWin();

    virtual bool checkDiagonalWin();


    private:

    std::string player;

    std::string winner;

    void setNextPlayer();

    bool checkBoardFull();

    void clearBoard();

    void setWinner();
};

#endif
