#include "graph.h"
#include <iostream>
#include <vector>
#include <algorithm>
Graph::Graph() {
    n=5;
    n_rebra=0;
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            mas[i][j] = 0;
        }
    }
}

Graph::Graph(int n)
{
    this->n=n;
    this->n_rebra=0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            mas[i][j] = 0;
        }
    }
}

void Graph::adding_a_rib(int x, int y)//нове ребро
{
    if (x<n && y<n){
            mas[x][y]=1;
            mas[y][x]=1;
    }else{
        cout<<"Помилка, таких вершин немає(або 1 з них): "<<x<<" , "<<y<<endl;
    }
}

void Graph::delete_edge(int x, int y)//видалення ребра
{
    if (x<n && y<n){
        mas[x][y]=0;
        mas[y][x]=0;
    }else{
        cout<<"Помилка, таких вершин немає(або 1 з них): "<<x<<" , "<<y<<endl;
    }
}

void Graph::edge_presence()//наявність ребра
{
    cout<<"Результати перевірки на наявність ребр :"<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i!=j){
                if (mas[i][j]==1) {
                    cout<<"Вершини "<<i<<" , "<<j<<" мають ребро "<<endl;
                    n_rebra=n_rebra+1;
                }
            }

        }

    }
    n_rebra=n_rebra/2;
}

void Graph::availability_neighbors(int vertex)//наявність сусідов
{
    if (vertex<n){
        bool has_neighbors = false;
        cout << "Сусіди вершини " << vertex << ": ";
        for (int i = 0; i < n; ++i) {
            if(i!=vertex){
                if (mas[vertex][i]==1){
                    cout<<i<<"  ";
                    has_neighbors = true;
                }
            }
        }
        if (!has_neighbors) {
            cout << "немає сусідів";
        }
        cout<<endl;
    }else{
        cout << "Помилка, вершина " << vertex << " не існує." << endl;
    }
}

bool Graph::areGraphsIsomorphic(const Graph &g) const {
    if (n != g.n) return false;//Перевірка кількості вершин
//Створюємо вектор перестановок вершин. Кожен елемент відповідає індексу вершини (0, 1, ..., n-1).
    vector<int> permutation(n);
    for (int i = 0; i < n; ++i) permutation[i] = i;

    do {
        bool isomorphic = true;
        for (int i = 0; i < n && isomorphic; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mas[i][j] != g.mas[permutation[i]][permutation[j]]) {
                    isomorphic = false;
                    break;
                }
            }
        }
        if (isomorphic) return true;
    } while (next_permutation(permutation.begin(), permutation.end()));// Переходимо до наступної перестановки

    return false;
}

void Graph::isomorphism(const Graph &g) const {
    if (areGraphsIsomorphic(g)) {
        cout << "Графи ізоморфні." << endl;
    } else {
        cout << "Графи не ізоморфні." << endl;
    }
}

int Graph::getN_rebra() {
    return n_rebra;
}
