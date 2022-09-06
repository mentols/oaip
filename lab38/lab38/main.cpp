#include "Graph.h"

void sort(std::vector<std::pair<int, std::pair<int, int>>>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j].first > v[j + 1].first) {
                std::swap(v[j], v[j + 1]);
            }
        }
    }
}

int find(int* p, int i) {
    return i == p[i] ? i : (find(p, p[i]));
}

Graph::Graph(int count)
{
    this->count = count;
    this->egde.clear();
}

void Graph::addEdge(int u, int v, int weigth) {
    this->egde.push_back(std::pair<int, std::pair<int, int>>(weigth, std::pair<int, int>(u-1, v-1)));
}

void Graph::kruskal() {
    std::vector<std::pair<int, std::pair<int, int>>> buf;
    sort(this->egde);
    int* parent = new int[this->count];
    if (parent == nullptr) {
        return;
    }
    for (int i = 0; i < this->egde.size();i++) {
        parent[i] = i;
    }
    for(int i = 0; i < this->egde.size(); i++) {

        if (find(parent, this->egde[i].second.first) != find(parent, this->egde[i].second.second)) {
            buf.push_back(this->egde[i]);
            parent[find(parent, this->egde[i].second.first)] =  parent[find(parent,egde[i].second.second)];
        }
    }
    this->egde = buf;
}

void Graph::prim() {
    std::vector<std::pair<int, std::pair<int, int>>> buf;
    sort(this->egde);
    bool* parent = new bool[this->count];
    if (parent == nullptr) {
        return;
    }
    for (int i = 0; i < this->egde.size(); i++) {
        parent[i] = false;
    }
    
    for (int j = 0; j < this->count; j++) {
        for (int i = 0; i < this->egde.size(); i++) {
            if (this->egde[i].second.first == j || this->egde[i].second.second == j) {
                if (!parent[this->egde[i].second.first] || !parent[this->egde[i].second.second]) {
                    parent[this->egde[i].second.first] = true;
                    parent[this->egde[i].second.second] = true;
                    buf.push_back(this->egde[i]);
                }
            }
        }
    }
    this->egde = buf;
}


void Graph::print() {
    for (int i = 0; i < egde.size(); i++) {
        std::cout << "<" << egde[i].second.first + 1 << ">\t" << egde[i].first << "\t<" << egde[i].second.second + 1 <<">\n";
    }
}
