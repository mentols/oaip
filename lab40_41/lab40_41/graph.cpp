#include "graph.h"
#define min(a,b) (a)<(b)?(a):(b)
Graph::Graph(int count) {
    this->count = count+1;
    this->egde.clear();
}

void Graph::addEdge(int u, int v, int weight) {
    this->egde.push_back({u, v, weight, 0});
}

void Graph::print() {
    for (int i = 0; i < egde.size(); i++) {
        std::cout << "(" << egde[i].out << ")====|" << egde[i].weight << "|===>(" << egde[i].in<< ")\n";
    }
}

int Graph::FordFalken(int start, int end) {
    int max = 0;
    bool* visited = new bool[this->count];
    for (int i = 0; i < this->count; i++) {
        visited[i] = false;
    }
    int buf = maxFlow(start, end, start, visited, 99999999);
    while (buf > 0) {
        for (int i = 0; i < this->count; i++) {
            visited[i] = false;
        }
        max += buf;
        buf = maxFlow(start, end, start, visited, 99999999);
    }
    delete[] visited;
    return max;
}

int Graph::maxFlow(int start, int end, int pivot, bool* visited,int flow) {
    if (pivot == end) {
        return flow;
    }
    visited[pivot] = true;
    for (int i = 0; i < this->egde.size(); i++) {
        if (this->egde[i].out == pivot && !visited[this->egde[i].in]) {
            int buf = maxFlow(start, end, egde[i].in, visited, min(flow, egde[i].weight));
            if (buf > 0) {
                egde[i].weight -= buf;
                egde[i].invWeight += buf;
                return buf;
            }
        }
    }
    return 0;
}
