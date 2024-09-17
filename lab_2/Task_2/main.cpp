#include <iostream>
#include <windows.h>
#include "graph.h"
using namespace std;

int main()
{

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    Graph F(5);
    F.adding_a_rib(10,10);
    F.adding_a_rib(2,2);
    F.adding_a_rib(2,9);
    F.adding_a_rib(2,1);
    F.availability_neighbors(2);
    F.edge_presence();
    F.delete_edge(2,1);
    F.edge_presence();


    Graph g[2] = { Graph(3), Graph(3)};
    g[0].adding_a_rib(0, 1);
    g[0].adding_a_rib(1, 2);
    g[0].adding_a_rib(2, 0);

    g[1].adding_a_rib(0, 1);
    g[1].adding_a_rib(1, 2);
    g[1].adding_a_rib(2, 0);
    g[0].isomorphism(g[1]); // Проверка изоморфизма
    return 0;
}
