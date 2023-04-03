#include "AdjacencyList.h"


Vertex::Vertex()
{
    indegree = 0;
    outdegree = 0;

    
}


Vertex::Vertex(std::string to)
{
    indegree = 0;
    outdegree = 1;

    // adjVertices[to] = 
}


double Vertex::operator[](std::string to)
{

}


AdjacencyList::AdjacencyList()
{
    totalVertices = 0;
    totalEdges = 0;
}


bool AdjacencyList::addEdge(std::string from, std::string to)
{
    if (!adjList.count(from))
        adjList[from] = Vertex(to);

    if (!adjList.count(to))
        adjList[to] = Vertex();

    else
        adjList[from][to];


}


std::unordered_map<std::string, double> AdjacencyList::getPageRank(int p)
{


}