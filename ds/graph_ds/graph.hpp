/* ---------------------------------------------------------- */

// generic graph pure virtual - only with a certain type !
// also print and etc will be virtual;
// virtual Destructor~ = 0;
//ds = data structure


/*
Graph ADT ( abstract Interface)
A graph is defined by:
- A set of vertices 𝑉
- A set of edges 𝐸
- A representation (list / matrix)
*/

#pragma once 

namespace utils::ds::graph_ds {

    class Graph
    {
    public:
       virtual ~Graph() = 0;  // pure virtual
       //virtual ~Graph() = default;  // pure virtual

       // structual :
       virtual int vertexCount() const = 0;
       virtual bool hasEdge(int srcVertex, int destVertex) const = 0;

       // modification :
       virtual void addEdge(int srcVertex, int destVertex) = 0;
       virtual void removeEdge(int srcVertex, int destVertex) = 0;
    };
    
}