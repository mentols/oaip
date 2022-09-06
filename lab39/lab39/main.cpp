#include "graph.h"

int main() {
    Graph graph(5);
    graph.addEdge(2, 1, 6);
    graph.addEdge(4, 1, 1);
    graph.addEdge(1, 2, 2);
    graph.addEdge(3, 2, 6);
    graph.addEdge(2, 3, 3);
    graph.addEdge(4, 3, 3);
    graph.addEdge(1, 4, 1);
    graph.addEdge(5, 4, 1);
    graph.addEdge(1, 5, 5);
    graph.addEdge(2, 5, 1);
    graph.addEdge(4, 5, 1);

    graph.BellFord(2);
}

