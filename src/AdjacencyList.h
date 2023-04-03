#pragma once

#include <unordered_map>
#include <string>


struct Vertex
{
    std::unordered_map<std::string, Vertex*> adjVertices;

    int indegree;
    int outdegree;
    int rank;

    Vertex();
    Vertex(std::string to);

    double operator[](std::string to);
};


class AdjacencyList
{
private:
    int totalVertices, totalEdges;

    // adjList[from][to] = rank(from) / outdegree(from)
    std::unordered_map<std::string, Vertex> adjList;

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
    std::unordered_map<std::string, double> getPageRank(int p);


};