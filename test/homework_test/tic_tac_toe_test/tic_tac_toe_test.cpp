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
}