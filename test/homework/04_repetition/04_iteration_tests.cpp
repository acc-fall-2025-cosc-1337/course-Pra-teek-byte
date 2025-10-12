#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Test get_factorial function")
{
    REQUIRE(get_factorial(3) == 6);
    REQUIRE(get_factorial(5) == 120);
    REQUIRE(get_factorial(6) == 720);
}

TEST_CASE("Test sum_odd_numbers function")
{
    REQUIRE(sum_odd_numbers(5) == 9);   // 1 + 3 + 5 = 9
    REQUIRE(sum_odd_numbers(10) == 25); // 1 + 3 + 5 + 7 + 9 = 25
}
<<<<<<< HEAD
=======
<<<<<<< HEAD


=======
>>>>>>> aa1a573 (Homework 4: Completed menu program and unit tests for factorial & sum of odd numbers)
>>>>>>> hw05_fixed
