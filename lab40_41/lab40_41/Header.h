#pragma once

#include <iostream>
#include <vector>

struct egde_s
{
    int out;
    int in;
    int weight;
    int invWeight;
};

class Graph {
private:
    int count;
    std::vector<egde_s> egde;
    int maxFlow(int start, int end, int pivot, bool* visited, int flow);
public:
    Graph(int a);
    void addEdge(int u, int v, int weight);
    void print();
    int FordFalken(int start, int end);
};
