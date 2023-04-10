#include "AdjacencyList.h"


bool AdjacencyList::addEdge(std::string from, std::string to)
{
    // Check if adjList[from][to] exists, returns false if it exists
    if ((adjList.find(from) != adjList.end() && adjList[from].find(to) != adjList[from].end()) || from == to)
        return false;

    // Placeholder value
    adjList[from][to] = 0;

    // Check if vertex "to" exists, creates it if it does not
    if (adjList.find(to) == adjList.end())
        adjList[to];

    double rank = 1 / (double)adjList[from].size();

    // Update every vertex adjacent to "from" with new rank
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

    // p power iterations
    for (int i = 1; i < p; i++)
    {
        std::map<std::string, double> rankVectorPrime;

        // Begin matrix multiplication
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
