#pragma once

#include <map>
#include <unordered_map>
#include <string>


class AdjacencyList
{
private:
    int totalVertices, totalEdges;

    // adjList[from][to] = rank(from) / outdegree(from)
    //std::unordered_map<std::string, Vertex> adjList;
    std::unordered_map<std::string, std::unordered_map<std::string, double>>  adjList;


public:
    // Default Constructor
    AdjacencyList();

    /*
    Creates edge between from and to vertices
    Creates the vertices aswell if they do not exists yet

    Returns bool, false if the edge already exists, true otherwise
    */
    bool addEdge(std::string from, std::string to);

    /*
    Returns map representing the PageRank of all pages after 
    p powerIterations in ascending alphabetical order of webpages 
    and rounding rank to two decimal places
    */
    std::map<std::string, double> getPageRank(int p);
};