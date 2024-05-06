#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>  
#include <tuple.h>

TEST_CASE( "A tuple with w=1.0 is a point", "[tuple]" ) {
    tuple a = tuple::point(4.3, -4.2, 3.1);
    REQUIRE( a.x == 4.3 );
    REQUIRE( a.y == -4.2 );
    REQUIRE( a.z == 3.1 );
    REQUIRE( a.w == 1.0 );
}

TEST_CASE( "A tuple with w=0.0 is a vector", "[tuple]" ) {
    tuple a = tuple::vector(4.3, -4.2, 3.1);
    REQUIRE( a.x == 4.3 );
    REQUIRE( a.y == -4.2 );
    REQUIRE( a.z == 3.1 );
    REQUIRE( a.w == 0.0 );
}

TEST_CASE("test equality", "[tuple]") {
    tuple a = tuple::point(4.3, -4.2, 3.1);
    tuple b = tuple::point(4.3 + 0.000001, -4.2 + 0.000001, 3.1 + 0.000001);
    REQUIRE(a == b);
}