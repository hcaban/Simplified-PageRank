#include "AdjacencyList.h"


bool AdjacencyList::addEdge(std::string from, std::string to)
{
    // Check this section there might be something wrong with the initialization
    // Simulate test case 1 on paper

    if (adjList.find(from) != adjList.end() && adjList[from].find(to) != adjList[from].end())
        return false;

    adjList[from][to] = 0;

    if (adjList.find(to) == adjList.end())
        adjList[to];

    double rank = 1 / (double)adjList[from].size();

    for (auto& adjVertex : adjList[from])
        adjVertex.second = rank;

    return true;
}


std::map<std::string, double> AdjacencyList::getPageRank(int p)
{
    // Initialize rank vector

    std::map<std::string, double> rankVector;

    double initial = 1 / (double)adjList.size();

    for (const auto& key : adjList)
        rankVector[key.first] = initial;

    // Begin power iterations

    for (int i = 1; i < p; i++)
    {
        std::map<std::string, double> rankVectorPrime;

        for (const auto& row : adjList)
        {
            //rankVectorPrime[row.first] = 0.00;

            for (const auto& column : row.second)
            {
                rankVectorPrime[column.first] += column.second * rankVector[row.first];
            }
        }

        rankVector = rankVectorPrime;
    }

    return rankVector;
}