#define CATCH_CONFIG_MAIN  

#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("3x3 First player set to X")
{
	std::unique_ptr<TicTacToe> game;

	game = make_unique<TicTacToe3>();
	game -> startGame("X");

	REQUIRE(game -> getPlayer() == "X";
}

TEST_CASE("3x3 First player set to O")
{
	std::unique_ptr<TicTacToe> game;

	game = make_unique<TicTacToe3>();
	game -> startGame("O");

	REQUIRE(game -> getPlayer() == "O";
}

TEST_CASE("4x4 First player set to X")
{
	std::unique_ptr<TicTacToe> game;

	game = make_unique<TicTacToe4>();
	game -> startGame("X");

	REQUIRE(game -> getPlayer() == "X";
}

TEST_CASE("4x4 First player set to O")
{
	std::unique_ptr<TicTacToe> game;

	game = make_unique<TicTacToe4>();
	game -> startGame("O");

	REQUIRE(game -> getPlayer() == "O";
}

TEST_CASE("3x3 Manager and getWinner")
{
	int x;
	int o;
	int t;

	unique_ptr<TicTacToe> xWins;

	xWins = make_unique<TicTacToe3>();
	TicTacToeManager manager;
	xWins -> startGame("X");

	xWins -> markBoard(2);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(3);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(4);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(5);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(7);
	REQUIRE(xWins -> gameOver() == true)

	REQUIRE(xWins -> getWinner() == "X");
	
	manager -> saveGame(xWins);

	unique_ptr<TicTacToe> oWins;

	oWins = make_unique<TicTacToe3>();
	oWins -> startGame("X");

	oWins -> markBoard(2);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(3);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(4);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(5);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(7);
	REQUIRE(oWins -> gameOver() == true)

	REQUIRE(oWins -> getWinner() == "O");
	
	manager -> saveGame(oWins);

	unique_ptr<TicTacToe> ties;

	ties = make_unique<TicTacToe3>();
	ties -> startGame("X");

	ties -> markBoard(1);
	REQUIRE(ties -> gameOver() == false)
	ties -> markBoard(2);
	REQUIRE(ties -> gameOver() == false)
	ties -> markBoard(3);
	REQUIRE(ties -> gameOver() == false)
	ties -> markBoard(4);
	REQUIRE(ties -> gameOver() == false)
	ties -> markBoard(5);
	REQUIRE(ties -> gameOver() == false)
	ties -> markBoard(6);
	REQUIRE(ties -> gameOver() == false)
	ties -> markBoard(7);
	REQUIRE(ties -> gameOver() == false)
	ties -> markBoard(8);
	REQUIRE(ties -> gameOver() == false)
	ties -> markBoard(9);
	REQUIRE(ties -> gameOver() == true)

	REQUIRE(ties -> getWinner() == "C");
	
	manager -> saveGame(ties);

	manager.getWinnerTotals(x, o, t)

	REQUIRE(x == 1)
	REQUIRE(o == 1)
	REQUIRE(t == 1)
}

TEST_CASE("4x4 Manager and getWinner")
{
	int x;
	int o;
	int t;

	unique_ptr<TicTacToe> xWins;

	xWins = make_unique<TicTacToe4>();
	TicTacToeManager manager;
	xWins -> startGame("X");

	xWins -> markBoard(2);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(3);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(4);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(5);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(7);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(10);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(13);
	REQUIRE(xWins -> gameOver() == true)

	REQUIRE(xWins -> getWinner() == "X");

	manager -> saveGame(xWins);

	unique_ptr<TicTacToe> oWins;

	oWins = make_unique<TicTacToe4>();
	oWins -> startGame("O");

	oWins -> startGame("X");

	oWins -> markBoard(2);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(3);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(4);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(5);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(7);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(10);
	REQUIRE(oWins -> gameOver() == false)
	oWins -> markBoard(13);
	REQUIRE(oWins -> gameOver() == true)

	REQUIRE(oWins -> getWinner() == "O");

	manager -> saveGame(oWins);

	unique_ptr<TicTacToe> ties;

	ties = make_unique<TicTacToe4>();
	ties -> startGame("X");

	xWins -> markBoard(1);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(2);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(3);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(4);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(5);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(6);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(7);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(8);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(9);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(10);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(11);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(12);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(13);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(14);
	REQUIRE(xWins -> gameOver() == false)
	xWins -> markBoard(15);
	REQUIRE(xWins -> gameOver() == true)

	REQUIRE(ties -> getWinner() == "C");
	
	manager -> saveGame(ties);

	manager.getWinnerTotals(x, o, t)

	REQUIRE(x == 1)
	REQUIRE(o == 1)
	REQUIRE(t == 1)
}

TEST_CASE("Test game for if a tie occurs on a 3x3") 
{

	std::unique_ptr<TicTacToe> game;

	game =  make_unique<TicTacToe3>();
	game -> startGame("X");
		
	game -> markBoard(1);
	REQUIRE(game -> gameOver() == false);
	game -> markBoard(2);
	REQUIRE(game -> gameOver() == false);
	game -> markBoard(3);
	REQUIRE(game -> gameOver() == false);
	game -> markBoard(4);
	REQUIRE(game -> gameOver() == false);
	game -> markBoard(5);
	REQUIRE(game -> gameOver() == false);
	game -> markBoard(6);
	REQUIRE(game -> gameOver() == false);
	game -> markBoard(7);
	REQUIRE(game -> gameOver() == false);
	game -> markBoard(8);
	REQUIRE(game -> gameOver() == true);

	REQUIRE(game -> getWinner() == "C");
}

