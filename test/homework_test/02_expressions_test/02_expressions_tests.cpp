#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/homework/02_expressions/expressions.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test Get Sales Tax") 
{
	REQUIRE(getSalesTaxAmount(10.0) == 0.675);
	REQUIRE(getSalesTaxAmount(20.0) == 1.35);
}

TEST_CASE("Test Get Tip Amount")
{
	REQUIRE(getTipAmount(20, 0.15) == 3);
	REQUIRE(getTipAmount(20, 0.20) == 4);
}