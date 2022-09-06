#pragma once

#include <iostream>
#include <vector>


class Graph {
private:
    int count;
    std::vector<std::pair<int, std::pair<int, int>>> egde;
public:
    Graph(int a);
    void addEdge(int u, int v, int weigth);
    void print();
    void BellFord(int start);
};
