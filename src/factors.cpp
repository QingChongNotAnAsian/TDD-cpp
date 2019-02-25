#define CATCH_CONFIG_MAIN
#include "../lib/Catch2/single_include/catch2/catch.hpp"

unsigned long Factorial(unsigned long number){
	return number <= 1 ? 1 : Factorial(number-1)*number;
}

TEST_CASE("Factorials are computed", "[factorial]"){
	REQUIRE(Factorial(0)==1);
	REQUIRE(Factorial(1)==1);
	REQUIRE(Factorial(3)==6);
	REQUIRE(Factorial(10)==3628800);
	REQUIRE(Factorial(100)==93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000);
}
