#include "AdjacencyList.h"


AdjacencyList::AdjacencyList()
{
    totalVertices = 0;
    totalEdges = 0;
}


bool AdjacencyList::addEdge(std::string from, std::string to)
{
    if (adjList.find(from) != adjList.end() && adjList[from].find(to) != adjList[from].end())
        return false;

    adjList[from][to] = 0;

    if (adjList.find(to) == adjList.end())
        adjList[to];

    double outdegree = adjList[from].size();

    for (auto& list : adjList)
        list.second[to] = 1 / outdegree;

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
            rankVectorPrime[row.first] = 0;

            for (const auto& column : row.second)
            {
                rankVectorPrime[row.first] += column.second * rankVector[column.first];
            }
        }

        rankVector = rankVectorPrime;
    }

    return rankVector;
}