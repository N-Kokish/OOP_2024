#ifndef GRAPH_H
#define GRAPH_H

using namespace std;

class Graph
{
private:
    int n;
    bool mas[100][100];
    int n_rebra;

public:
    Graph();

    Graph(int n);

    void adding_a_rib(int x,int y);
    void delete_edge(int x,int y);
    void edge_presence();
    void availability_neighbors(int vertex);
    int getN_rebra();
    void print_vertex_degrees();
    void isomorphism(const Graph &g) const;
   bool areGraphsIsomorphic(const Graph &g) const;

};

#endif // GRAPH_H
