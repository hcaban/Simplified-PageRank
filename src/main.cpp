#include <iostream>
#include "AdjacencyList.h"


int main() 
{
    AdjacencyList graph {};

    int no_of_lines, power_iterations; 
    std::string from, to;

    std::cin >> no_of_lines;
    std::cin >> power_iterations; 

    for(int i = 0; i < no_of_lines; i++)
    {
        std::cin >> from;
        std::cin >> to;
        
        graph.addEdge(from, to);
    }

    // (UNCOMMENT) Created_Graph.PageRank(power_iterations);
}
