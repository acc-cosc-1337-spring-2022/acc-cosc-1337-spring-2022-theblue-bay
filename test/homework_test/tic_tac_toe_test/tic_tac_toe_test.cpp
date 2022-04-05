#define CATCH_CONFIG_MAIN  

#include "catch.hpp"
#include "tic_tac_toe.h"

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

TEST_CASE("Test when first is set to X")
{
	TicTacToe game;

	game.startGame("O");
	REQUIRE(game.getPlayer() == "O");
}

TEST_CASE("Test first column win")
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(7);
	game.markBoard(2);
	game.markBoard(4);
	game.markBoard(3);
	game.markBoard(1);
	game.markBoard(8);
	REQUIRE(game.gameOver() == true);
}

TEST_CASE("Test second column win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(2);
	game.markBoard(1);
	game.markBoard(8);
	game.markBoard(3);
	game.markBoard(5);
	game.markBoard(7);
	REQUIRE(game.gameOver() == true);
}

TEST_CASE("Test third column win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(3);
	game.markBoard(2);
	game.markBoard(6);
	game.markBoard(3);
	game.markBoard(9);
	game.markBoard(1);
	REQUIRE(game.gameOver() == true);
}

TEST_CASE("Test first row win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(1);
	game.markBoard(5);
	game.markBoard(2);
	game.markBoard(7);
	game.markBoard(3);
	game.markBoard(9);
	REQUIRE(game.gameOver() == true);
}

TEST_CASE("Test second row win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(4);
	game.markBoard(2);
	game.markBoard(5);
	game.markBoard(3);
	game.markBoard(6);
	game.markBoard(1);
	REQUIRE(game.gameOver() == true);
}

TEST_CASE("Test third row win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(7);
	game.markBoard(2);
	game.markBoard(8);
	game.markBoard(3);
	game.markBoard(9);
	game.markBoard(1);
	REQUIRE(game.gameOver() == true);
}

TEST_CASE("Test diagonal top left win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(1);
	game.markBoard(2);
	game.markboard(5);
	game.markBoard(3);
	game.markBoard(9);
	game.markBoard(7);
	REQUIRE(game.gameOver() == true);
}

TEST_CASE("Test diagonal bottom left win") 
{
	TicTacToe game;

	game.startGame("X");
	game.markBoard(7);
	game.markBoard(2);
	game.markBoard(5);
	game.markBoard(1);
	game.markBoard(3);
	game.markBoard(9);
	REQUIRE(game.gameOver() == true);
}