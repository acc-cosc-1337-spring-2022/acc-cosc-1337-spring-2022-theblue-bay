#include "tic_tac_toe.h"
using std::string, std::cout;

void TicTacToe::startGame(string firstPlayer) 
{
    player = firstPlayer;
    clearBoard();
}

void TicTacToe::markBoard(int position) 
{
    pegs[position - 1] = player;
    setNextPlayer();
}

void TicTacToe::displayBoard()const 
{
    for(int i = 0; i < 9; i+=3) 
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
    }
}

void TicTacToe::setNextPlayer() 
{
    if (player == "X") 
    {
        player = "O";
    } else { 
        player = "X";
    }
}

bool TicTacToe::checkBoardFull() 
{
    for (auto peg: pegs) 
    {
        if (peg == " ") 
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clearBoard() 
{
    for (int i = 0; i < 9; i++) 
    {
        pegs[i] = " ";
    }
}

bool TicTacToe::gameOver() 
{
    return checkBoardFull();
}