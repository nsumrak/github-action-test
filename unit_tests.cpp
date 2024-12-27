#include "fibonacci.h"

#define CATCH_CONFIG_MAIN
#include "catch2/catch2.hpp"


TEST_CASE( "simple" )
{
    Fibonacci f(5);

    REQUIRE( f.last() == 5 );
}

TEST_CASE( "empty" )
{
    Fibonacci f(0);

    REQUIRE( f.sum() == 0 );
}

TEST_CASE( "sum" )
{
    Fibonacci f(5);

    REQUIRE( f.sum() == 12 );
}
