
/*
============================================================
 ADJACENCY LIST GRAPH (Directed)
============================================================

Representation:
- Graph is stored using adjacency lists
- Each srcVertex holds a list of outgoing neighbors

Space Complexity:
- Θ(|V| + |E|)

Degree:
- out-degree(u) = adj[u].size()
- in-degree(v)  = requires scanning all lists

Use Cases:
- Sparse graphs
- Efficient edge iteration
- DFS / BFS / Dijkstra (with adaptations)

============================================================
*/

/* ---------------------------------------------------------- */
#pragma once
/* ---------------------------------------------------------- */
#include <iostream>
#include <list>
/* ---------------------------------------------------------- */
#include "graph.hpp"
/* ---------------------------------------------------------- */

/*
 * Internal Structure:
 *
 * adj[i] → list of vertices reachable from i
 *
 * Example:
 * 0 → 1 → 3
 * 1 → 2
 * 2 → Ø
 */

/*
 * 0 ──▶ 1 ──▶ 3
 * │
 * └──▶ 2
 */

namespace utils::ds::graph_ds
{
    /* ============================================================
     * ADJACENCY LIST GRAPH
     * ============================================================
     *
     * Representation:
     * - Each vertex holds a list of outgoing neighbors
     *
     * Space Complexity:
     * - Θ(|V| + |E|)
     *
     * Edge Operations:
     * - Add edge: Θ(1)
     * - Remove edge: Θ(deg(v))
     * - Has edge: Θ(deg(v))
     *
     * Use when:
     * - Graph is sparse
     * - Fast edge insertion required
     *
     * Avoid when:
     * - Graph is dense
     * ============================================================ */
    class AdjListGraph : public Graph
    {
    private:
        std::list<std::list<int>> adj;

    public:
        // explicit prevents implicit type conversions through constructors.
        /*----------------------------------------------------------
         Constructor: AdjListGraph(int n)

         Purpose:
         - Initializes a graph with n vertices
         - No edges initially

         How it works:
         - Creates a vector of n empty adjacency lists

         Time Complexity:
         - Θ(n)   (initializing n empty vectors)

         Space Complexity:
         - Θ(n)   (one list per vertex)
        ----------------------------------------------------------*/
        AdjListGraph(int n) : adj(n) {}

        /*----------------------------------------------------------
         Function: vertexCount()

         Purpose:
         - Returns the number of vertices in the graph

         How it works:
         - Returns the size of the adjacency list container

         Time Complexity:
         - Θ(1)

         Space Complexity:
         - Θ(1)
        ----------------------------------------------------------*/
        int vertexCount() const override
        {
            return static_cast<int>(adj.size());
        }

        int vertexCount() const override
        {
            return static_cast<int>(adj.size());
        }

        // ver is copy of each element
        /*
         * hasEdge(src, dest)
         *
         * Purpose:
         * - Check if an edge exists
         *
         * Time Complexity:
         * - Θ(deg(src))
         */
        bool hasEdge(int srcVertex, int destVertex) const override
        {
            // rangeBasedForLoop  = for(int i = 0; i < adj[srcVertex].size(); i++)
            // for (int ver : adj[srcVertex])
            //     if (ver == destVertex)
            //         return true;
            // return false;
        }

        /*
         * addEdge(src, dest)
         *
         * Purpose:
         * - Add directed edge src → dest
         *
         * Notes:
         * - Does not check duplicates
         *
         * Time Complexity:
         * - Θ(1)
         */
        void addEdge(int srcVertex, int destVertex) override
        {
            if (!hasEdge(srcVertex, destVertex))
                //
                return;
        }

        void removeEdge(int srcVertex, int destVertex) override
        {
            // // create ref& called list -> adj[srcVertex]
            // // w/o auto:: std::vector<int>& list = adj[srcVertex];
            // auto &list = adj[srcVertex];
            // for (auto it = list.begin(); it != list.end(); ++it)
            // {
            //     if (*it == destVertex)
            //     {
            //         list.erase(it);
            //         return;
            //     }
            // }
        }
    };
}
