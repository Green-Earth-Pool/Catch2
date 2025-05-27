#include <iostream>

#define CATCH_CONFIG_MAIN
#include "Catch.h"

// Project : T9 Algorithm
/*
    Unit testing T9 algorithm
    - Used in older cell phones
    - Input: a sequence of digits
    - Output: suggested words
 
    Examples:
    843 -> "the"
    4663 -> "good"
    43556 -> "hello"
 
    Naive Implementation
 
    
 */
unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE("This is a Test")
{
    
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}
