#include <string>
#include "doctest/doctest.h"
#include "gettextpp.hpp"

TEST_CASE("Parse empty string")
{
	std::string empty;
	const auto result = gettextpp::parse(empty);
	REQUIRE(result.empty());
}

TEST_CASE("Parse empty iterators")
{
	std::string empty;
	const auto result = gettextpp::parse(empty.begin(), empty.end());
	REQUIRE(result.empty());
}
