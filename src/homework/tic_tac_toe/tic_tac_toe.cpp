#include "tic_tac_toe.h"

using std::string;
using std::cout;
using std::cin;

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

void TicTacToe::setNextPlayer() 
{
    if (player == "X") 
    {
        player = "O";
    } else 
    { 
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
    if (pegs.size() == 9)
    {
        for (int i = 0; i < 9;  i++)
        {
            pegs[i] = " ";
        } 
    } else
    {
        for (int i = 0; i < 16; i++)
        {
            pegs[i] = " ";
        }
    }
}

bool TicTacToe::gameOver() 
{
    bool over;

    if (checkDiagonalWin() == true || checkRowWin() == true || checkColumnWin() == true)
    {
        setWinner();
        over = true;
    } else if (checkBoardFull() == true)
    {
        over = true;
        winner = "C";
    } else
    {
        over = false;
    }
    
    return over;
}

bool TicTacToe::checkColumnWin()
{
    return false;
}

bool TicTacToe::checkRowWin()
{
    return false;
}

bool TicTacToe::checkDiagonalWin()
{
    return false;
}

void TicTacToe::setWinner()
{
    if (player == "X")
    {
        winner = "O";
    } else
    {
        winner = "X";
    }
}

std::istream& operator >> (std::istream& input, TicTacToe& game)
{
    int position;

        if (game.pegs.size() == 9)
        {
            cout << "Enter peg 1 through 9: ";
            cin >> position;
        } else
        {
            cout << "Enter peg 1 through 16: ";
            cin >> position;
        }
   
    game.markBoard(position);
    return input;
}

std::ostream& operator << (std::ostream& output, const TicTacToe& game)
{
    if (game.pegs.size() == 9)
    {
        for (int i = 0; i < 9; i += 3)
        {
            cout << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "\n";
        }
    } else if (game.pegs.size() == 16)
    {
        for (int i = 0; i < 16; i += 4)
        {
            cout << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "|" << game.pegs[i + 3] << "\n";
        }
    }
    
    return output;
}