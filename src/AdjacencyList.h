#pragma once

#include <map>
#include <unordered_map>
#include <string>

class AdjacencyList
{
private:
    std::unordered_map<std::string, std::unordered_map<std::string, double>>  adjList;

public:
    /*
    Creates directed edge between `from` and `to` vertices
    Creates the vertices if they do not exists yet

    Returns bool, false if the edge already exists, true otherwise
    */
    bool addEdge(std::string from, std::string to);

    /*
    Returns map representing the PageRank of all pages after 
    p powerIterations in ascending alphabetical order by webpage name
    */
    std::map<std::string, double> getPageRank(int p);
};
