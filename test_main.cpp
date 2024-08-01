
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"
#include "main.cpp"  // Include the source file containing the function

TEST_CASE("calculateRectangleArea computes the correct area", "[calculateRectangleArea]") {
    REQUIRE(calculateRectangleArea(2, 3) == 6);
    REQUIRE(calculateRectangleArea(0, 5) == 0);
    REQUIRE(calculateRectangleArea(7, 7) == 49);
    REQUIRE(calculateRectangleArea(10, 10) == 100);
    REQUIRE(calculateRectangleArea(1, 1) == 1);
}

std::string captureFizzBuzzOutput(int n) {
    std::ostringstream oss;
    std::streambuf* oldCoutBuf = std::cout.rdbuf(oss.rdbuf());
    fizzBuzz(n);
    std::cout.rdbuf(oldCoutBuf);
    return oss.str();
}

TEST_CASE("fizzBuzz produces correct output", "[fizzBuzz]") {
    REQUIRE(captureFizzBuzzOutput(1) == "1\n");
    REQUIRE(captureFizzBuzzOutput(3) == "1\n2\nFizz\n");
    REQUIRE(captureFizzBuzzOutput(5) == "1\n2\nFizz\n4\nBuzz\n");
    REQUIRE(captureFizzBuzzOutput(15) == "1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\nBuzz\n11\nFizz\n13\n14\nFizzBuzz\n");
}

