#include "PATH/TO/HEADER/FILE.h"
// Set the include to use the .h file of you adjacency list implementation
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
// Make sure catch.hpp is in the same directory (or the include points to where it is)


TEST_CASE("SET NAME", "[SET TAG]")
{
	AdjacencyList graph;

	graph.addEdge("6.com", "0.com");
	graph.addEdge("7.com", "0.com");
	graph.addEdge("9.com", "0.com");
	graph.addEdge("12.com", "0.com");
	graph.addEdge("13.com", "0.com");
	graph.addEdge("14.com", "0.com");
	graph.addEdge("16.com", "0.com");
	graph.addEdge("17.com", "0.com");
	graph.addEdge("0.com", "1.com");
	graph.addEdge("5.com", "1.com");
	graph.addEdge("6.com", "1.com");
	graph.addEdge("11.com", "1.com");
	graph.addEdge("13.com", "1.com");
	graph.addEdge("14.com", "1.com");
	graph.addEdge("17.com", "1.com");
	graph.addEdge("19.com", "1.com");
	graph.addEdge("1.com", "2.com");
	graph.addEdge("6.com", "2.com");
	graph.addEdge("8.com", "2.com");
	graph.addEdge("9.com", "2.com");
	graph.addEdge("13.com", "2.com");
	graph.addEdge("16.com", "2.com");
	graph.addEdge("17.com", "2.com");
	graph.addEdge("6.com", "3.com");
	graph.addEdge("7.com", "3.com");
	graph.addEdge("8.com", "3.com");
	graph.addEdge("9.com", "3.com");
	graph.addEdge("10.com", "3.com");
	graph.addEdge("12.com", "3.com");
	graph.addEdge("13.com", "3.com");
	graph.addEdge("17.com", "3.com");
	graph.addEdge("1.com", "4.com");
	graph.addEdge("6.com", "4.com");
	graph.addEdge("7.com", "4.com");
	graph.addEdge("9.com", "4.com");
	graph.addEdge("12.com", "4.com");
	graph.addEdge("13.com", "4.com");
	graph.addEdge("17.com", "4.com");
	graph.addEdge("19.com", "4.com");
	graph.addEdge("3.com", "5.com");
	graph.addEdge("7.com", "5.com");
	graph.addEdge("9.com", "5.com");
	graph.addEdge("12.com", "5.com");
	graph.addEdge("13.com", "5.com");
	graph.addEdge("15.com", "5.com");
	graph.addEdge("17.com", "5.com");
	graph.addEdge("0.com", "6.com");
	graph.addEdge("1.com", "6.com");
	graph.addEdge("2.com", "6.com");
	graph.addEdge("7.com", "6.com");
	graph.addEdge("8.com", "6.com");
	graph.addEdge("10.com", "6.com");
	graph.addEdge("12.com", "6.com");
	graph.addEdge("13.com", "6.com");
	graph.addEdge("17.com", "6.com");
	graph.addEdge("19.com", "6.com");
	graph.addEdge("0.com", "7.com");
	graph.addEdge("2.com", "7.com");
	graph.addEdge("6.com", "7.com");
	graph.addEdge("9.com", "7.com");
	graph.addEdge("12.com", "7.com");
	graph.addEdge("13.com", "7.com");
	graph.addEdge("14.com", "7.com");
	graph.addEdge("17.com", "7.com");
	graph.addEdge("0.com", "8.com");
	graph.addEdge("6.com", "8.com");
	graph.addEdge("9.com", "8.com");
	graph.addEdge("11.com", "8.com");
	graph.addEdge("13.com", "8.com");
	graph.addEdge("14.com", "8.com");
	graph.addEdge("17.com", "8.com");
	graph.addEdge("19.com", "8.com");
	graph.addEdge("2.com", "9.com");
	graph.addEdge("3.com", "9.com");
	graph.addEdge("4.com", "9.com");
	graph.addEdge("7.com", "9.com");
	graph.addEdge("12.com", "9.com");
	graph.addEdge("13.com", "9.com");
	graph.addEdge("5.com", "10.com");
	graph.addEdge("6.com", "10.com");
	graph.addEdge("8.com", "10.com");
	graph.addEdge("9.com", "10.com");
	graph.addEdge("13.com", "10.com");
	graph.addEdge("15.com", "10.com");
	graph.addEdge("16.com", "10.com");
	graph.addEdge("17.com", "10.com");
	graph.addEdge("19.com", "10.com");
	graph.addEdge("1.com", "11.com");
	graph.addEdge("2.com", "11.com");
	graph.addEdge("5.com", "11.com");
	graph.addEdge("8.com", "11.com");
	graph.addEdge("10.com", "11.com");
	graph.addEdge("13.com", "11.com");
	graph.addEdge("17.com", "11.com");
	graph.addEdge("19.com", "11.com");
	graph.addEdge("1.com", "12.com");
	graph.addEdge("2.com", "12.com");
	graph.addEdge("4.com", "12.com");
	graph.addEdge("5.com", "12.com");
	graph.addEdge("7.com", "12.com");
	graph.addEdge("8.com", "12.com");
	graph.addEdge("9.com", "12.com");
	graph.addEdge("10.com", "12.com");
	graph.addEdge("13.com", "12.com");
	graph.addEdge("14.com", "12.com");
	graph.addEdge("16.com", "12.com");
	graph.addEdge("17.com", "12.com");
	graph.addEdge("18.com", "12.com");
	graph.addEdge("5.com", "13.com");
	graph.addEdge("7.com", "13.com");
	graph.addEdge("9.com", "13.com");
	graph.addEdge("10.com", "13.com");
	graph.addEdge("12.com", "13.com");
	graph.addEdge("14.com", "13.com");
	graph.addEdge("15.com", "13.com");
	graph.addEdge("17.com", "13.com");
	graph.addEdge("0.com", "14.com");
	graph.addEdge("2.com", "14.com");
	graph.addEdge("6.com", "14.com");
	graph.addEdge("10.com", "14.com");
	graph.addEdge("12.com", "14.com");
	graph.addEdge("13.com", "14.com");
	graph.addEdge("17.com", "14.com");
	graph.addEdge("19.com", "14.com");
	graph.addEdge("1.com", "15.com");
	graph.addEdge("6.com", "15.com");
	graph.addEdge("7.com", "15.com");
	graph.addEdge("9.com", "15.com");
	graph.addEdge("10.com", "15.com");
	graph.addEdge("11.com", "15.com");
	graph.addEdge("12.com", "15.com");
	graph.addEdge("13.com", "15.com");
	graph.addEdge("16.com", "15.com");
	graph.addEdge("17.com", "15.com");
	graph.addEdge("3.com", "16.com");
	graph.addEdge("5.com", "16.com");
	graph.addEdge("7.com", "16.com");
	graph.addEdge("8.com", "16.com");
	graph.addEdge("9.com", "16.com");
	graph.addEdge("13.com", "16.com");
	graph.addEdge("7.com", "17.com");
	graph.addEdge("12.com", "17.com");
	graph.addEdge("13.com", "17.com");
	graph.addEdge("14.com", "17.com");
	graph.addEdge("2.com", "18.com");
	graph.addEdge("5.com", "18.com");
	graph.addEdge("7.com", "18.com");
	graph.addEdge("10.com", "18.com");
	graph.addEdge("12.com", "18.com");
	graph.addEdge("13.com", "18.com");
	graph.addEdge("17.com", "18.com");
	graph.addEdge("1.com", "19.com");
	graph.addEdge("7.com", "19.com");
	graph.addEdge("8.com", "19.com");
	graph.addEdge("9.com", "19.com");
	graph.addEdge("11.com", "19.com");
	graph.addEdge("12.com", "19.com");
	graph.addEdge("15.com", "19.com");
	graph.addEdge("17.com", "19.com");


	// Get the final PageRank values from your adjacency list in the form on an ordered map
	// std::map<std::string, double>


	REQUIRE(map["0.com"] == 0.04);
	REQUIRE(map["1.com"] == 0.05);
	REQUIRE(map["2.com"] == 0.04);
	REQUIRE(map["3.com"] == 0.04);
	REQUIRE(map["4.com"] == 0.04);
	REQUIRE(map["5.com"] == 0.05);
	REQUIRE(map["6.com"] == 0.06);
	REQUIRE(map["7.com"] == 0.04);
	REQUIRE(map["8.com"] == 0.05);
	REQUIRE(map["9.com"] == 0.05);
	REQUIRE(map["10.com"] == 0.06);
	REQUIRE(map["11.com"] == 0.05);
	REQUIRE(map["12.com"] == 0.12);
	REQUIRE(map["13.com"] == 0.05);
	REQUIRE(map["14.com"] == 0.05);
	REQUIRE(map["15.com"] == 0.06);
	REQUIRE(map["16.com"] == 0.04);
	REQUIRE(map["17.com"] == 0.02);
	REQUIRE(map["18.com"] == 0.04);
	REQUIRE(map["19.com"] == 0.06);
}