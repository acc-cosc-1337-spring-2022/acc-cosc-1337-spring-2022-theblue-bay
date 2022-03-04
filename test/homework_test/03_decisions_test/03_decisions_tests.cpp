#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Verify functionality of if/else statement")
{
	REQUIRE(getLetterGradeUsingIf(95) == "A");
	REQUIRE(getLetterGradeUsingIf(85) == "B");
	REQUIRE(getLetterGradeUsingIf(75) == "C");
	REQUIRE(getLetterGradeUsingIf(65) == "D");
	REQUIRE(getLetterGradeUsingIf(50) == "F");
}

TEST_CASE("Very functionality of switch statement")
{
	REQUIRE(getLetterGradeUsingSwitch(95) == "A");
	REQUIRE(getLetterGradeUsingSwitch(85) == "B");
	REQUIRE(getLetterGradeUsingSwitch(75) == "C");
	REQUIRE(getLetterGradeUsingSwitch(65) == "D");
	REQUIRE(getLetterGradeUsingSwitch(50) == "F");
}