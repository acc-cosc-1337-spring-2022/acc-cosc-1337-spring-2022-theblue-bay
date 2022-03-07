#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Verify getGcContent")
{
	REQUIRE(getGcContent(agctatag) == 0.375)
	REQUIRE(getGCContent(cgctatag) == 0.50)
}

TEST_CASE("Verify getReverseString")
{
	REQUIRE(getReverseString(agctatag) == "gatatcga")
	REQUIRE(getReverseString(cgctatag) == "gatatcgc")
}
TEST_CASE("Verify getDnaComplement")
{
	REQUIRE(getDnaComplement(aaaacccggt) == "accgggtttt")
	REQUIRE(getDnaComplement(cccggaaaat) == "attttccggg")
}