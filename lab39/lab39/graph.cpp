#include "graph.h"

Graph::Graph(int count){
    this->count = count;
    this->egde.clear();
}

void Graph::addEdge(int u, int v, int weigth) {
    this->egde.push_back(std::pair<int, std::pair<int, int>>(weigth, std::pair<int, int>(u-1, v-1)));
}

void Graph::print() {
    for (int i = 0; i < egde.size(); i++) {
        std::cout << "<" << egde[i].second.first + 1 << ">\t" << egde[i].first << "\t<" << egde[i].second.second + 1 <<">\n";
    }
}

void Graph::BellFord(int start) {
    std::vector<int> dist(count, INT_MAX/2);
    dist[start - 1] = 0;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < egde.size(); j++) {
            if (dist[egde[j].second.first] + egde[j].first < dist[egde[j].second.second]) {
                dist[egde[j].second.second] = dist[egde[j].second.first] + egde[j].first;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        std::cout << "Vertex " << i + 1 << ": " << dist[i] << "\n";
    }
}
