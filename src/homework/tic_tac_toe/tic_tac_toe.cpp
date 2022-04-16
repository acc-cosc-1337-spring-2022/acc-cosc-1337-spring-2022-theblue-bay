#include "tic_tac_toe.h"
using std::string, std::cout, std::cin;

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
    for (int i = 0; i < 9; i++) 
    {
        pegs[i] = " ";
    }
}

bool TicTacToe::gameOver() 
{
    bool over;
    std::string winner;

    if (checkDiagonalWin() == true || checkRowWin() == true || checkColumnWin() == true)
    {
        setWinner();
        over = true;
    } else if (checkBoardFull() == true)
    {
        over = true;
        winner = "C";
    }
    return checkBoardFull();
}

bool TicTacToe::checkColumnWin()
{
    bool win;

    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        win = true;
    } else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        win = true;
    } else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        win = true;
    } else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        win = true;
    } else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        win = true;
    } else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        win = true;
    } else
    {
        win = false;
    }
    
    return win;
}

bool TicTacToe::checkRowWin()
{
    bool win;

    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        win = true;
    } else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        win = true;
    } else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        win = true;
    } else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        win = true;
    } else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        win = true;
    } else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        win = true;
    } else
    {
        win = false;
    }
    
    return win;
}

bool TicTacToe::checkDiagonalWin()
{
    bool win;

    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        win = true;
    } else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
        win = true;
    } else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        win = true;
    } else if (pegs[2] == "O" && pegs[4] == "X" && pegs[6] == "O")
    {
        win = true;
    } else 
    {
        win = false;
    }
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

    cout << "Enter a position between 1 and 9: ";
    input >> position;

    while ((position < 1 || (position > 9))
    {
        cout << "Invalid input. Please enter a position between 1 and 9: ";
        input >> position;
    }

    game.markBoard(position);
    return input;
}

std::ostream& operator << (std::ostream output, const TicTacToe& game)
{
    for (int i = 0; i < 9; i += 3)
    {
        cout << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "\n";
    }

    return output;
}