#include <iostream>
#include <iomanip>
#include <cmath>
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


    auto pageRankVector = graph.getPageRank(power_iterations);

    for (auto& page : pageRankVector)
    {
        //std::cout << std::fixed << std::showpoint << std::setprecision(2);
        
        std::cout << page.first << " " << round(page.second * 100) / 100 << '\n';
    }

    std::cout << std::flush;

    return 0;
}
