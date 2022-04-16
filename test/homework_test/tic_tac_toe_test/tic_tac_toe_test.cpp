#define CATCH_CONFIG_MAIN  

#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test game for if a tie occurs") 
{
	TicTacToe game;

	game.markBoard(1);
	REQUIRE(false == game.gameOver());

	game.markBoard(2);
	REQUIRE(false == game.gameOver());

	game.markBoard(3);
	REQUIRE(false == game.gameOver());

	game.markBoard(4);
	REQUIRE(false == game.gameOver());

	game.markBoard(5);
	REQUIRE(false == game.gameOver());

	game.markBoard(7);
	REQUIRE(false == game.gameOver());

	game.markBoard(6);
	REQUIRE(false == game.gameOver());

	game.markBoard(9);
	REQUIRE(false == game.gameOver());

	game.markBoard(8);
	REQUIRE(true == game.gameOver());
	REQUIRE(game.getWinner() == "C");
}

TEST_CASE("Test when first is set to X")
{
	TicTacToe game;

	game.startGame("X");
	REQUIRE(game.getPlayer() == "X");
}

TEST_CASE("Test when first is set to O")
{
	TicTacToe game;

	game.startGame("O");
	REQUIRE(game.getPlayer() == "O");
}

TEST_CASE("Test first column win")
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(1);
	REQUIRE(game.gameOver() == false);
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
	game.markBoard(4);
	REQUIRE(game.gameOver() == false);
	game.markBoard(3);
	REQUIRE(game.gameOver() == false);
	game.markBoard(7);
	REQUIRE(game.gameOver() == true);

	REQUIRE(game.getWinner() == "X");
}

TEST_CASE("Test second column win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
	game.markBoard(1);
	REQUIRE(game.gameOver() == false);
	game.markBoard(5);
	REQUIRE(game.gameOver() == false);
	game.markBoard(3);
	REQUIRE(game.gameOver() == false);
	game.markBoard(8);
	REQUIRE(game.gameOver() == true);

	REQUIRE(game.getWinner() == "X");
}

TEST_CASE("Test third column win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(3);
	REQUIRE(game.gameOver() == false);
	game.markBoard(1);
	REQUIRE(game.gameOver() == false);
	game.markBoard(6);
	REQUIRE(game.gameOver() == false);
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
	game.markBoard(9);
	REQUIRE(game.gameOver() == true);

	REQUIRE(game.getWinner() == "X");
}

TEST_CASE("Test first row win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(1);
	REQUIRE(game.gameOver() == false);
	game.markBoard(5);
	REQUIRE(game.gameOver() == false);
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
	game.markBoard(6);
	REQUIRE(game.gameOver() == false);
	game.markBoard(3);
	REQUIRE(game.gameOver() == true);
	
	REQUIRE(game.getWinner() == "X");
}

TEST_CASE("Test second row win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(4);
	REQUIRE(game.gameOver() == false);
	game.markBoard(1);
	REQUIRE(game.gameOver() == false);
	game.markBoard(5);
	REQUIRE(game.gameOver() == false);
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
	game.markBoard(6);
	REQUIRE(game.gameOver() == true);

	REQUIRE(game.getWinner() == "X");
}

TEST_CASE("Test third row win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(7);
	REQUIRE(game.gameOver() == false);
	game.markBoard(1);
	REQUIRE(game.gameOver() == false);
	game.markBoard(8);
	REQUIRE(game.gameOver() == false);
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
	game.markBoard(9);
	REQUIRE(game.gameOver() == true);

	REQUIRE(game.getWinner() == "X");
}

TEST_CASE("Test diagonal top left win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(1);
	REQUIRE(game.gameOver() == false);
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
	game.markboard(5);
	REQUIRE(game.gameOver() == false);
	game.markBoard(3);
	REQUIRE(game.gameOver() == false);
	game.markBoard(9);
	REQUIRE(game.gameOver() == true);

	REQUIRE(game.getWinner() == "X");
}

TEST_CASE("Test diagonal bottom left win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(7);
	REQUIRE(game.gameOver() == false);
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
	game.markBoard(5);
	REQUIRE(game.gameOver() == false);
	game.markBoard(4);
	REQUIRE(game.gameOver() == false);
	game.markBoard(3);
	REQUIRE(game.gameOver() == true);

	REQUIRE(game.getWinner() == "X");
}

TEST_CASE("Test Manager and getWinner")
{
	int x, o, t;
	
	TicTacToeManager manager;
	
	TicTacToe xWin;
	
	xWin.startGame("X");
	xWin.markBoard(7);
	REQUIRE(xWin.gameOver() == false);
	xWin.markBoard(2);
	REQUIRE(xWin.gameOver() == false);
	xWin.markBoard(5);
	REQUIRE(xWin.gameOver() == false);
	xWin.markBoard(4);
	REQUIRE(xWin.gameOver() == false);
	xWin.markBoard(3);
	REQUIRE(xWin.gameOver() == true);

	REQUIRE(xWin.getWinner() == "X");

	manager.saveGame(xWin);

	TicTacToe oWin;

	xWin.startGame("O");
	xWin.markBoard(7);
	REQUIRE(oWin.gameOver() == false);
	xWin.markBoard(2);
	REQUIRE(oWin.gameOver() == false);
	xWin.markBoard(5);
	REQUIRE(oWin.gameOver() == false);
	xWin.markBoard(4);
	REQUIRE(oWin.gameOver() == false);
	xWin.markBoard(3);
	REQUIRE(oWin.gameOver() == true);

	REQUIRE(oWin.getWinner() == "O");

	manager.saveGame(oWin);

	TicTacToe tieGame;

	tieGame.startGame("X");
	tieGame.markBoard(1);
	REQUIRE(tieGame.gameOver() == false);
	tieGame.markBoard(3);
	REQUIRE(tieGame.gameOver() == false);
	tieGame.markBoard(2);
	REQUIRE(tieGame.gameOver() == false);
	tieGame.markBoard(4);
	REQUIRE(tieGame.gameOver() == false);
	tieGame.markBoard(6);
	REQUIRE(tieGame.gameOver() == false);
	tieGame.markBoard(5);
	REQUIRE(tieGame.gameOver() == false);
	tieGame.markBoard(7);
	REQUIRE(tieGame.gameOver() == false);
	tieGame.markBoard(9);
	REQUIRE(tieGame.gameOver() == false);
	tieGame.markBoard(8);
	REQUIRE(tieGame.gameOver() == true);
	
	REQUIRE(tieGame.getWinner() == "C");

	manager.saveGame(tieGame);

	manager.getWinnerTotal(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
}